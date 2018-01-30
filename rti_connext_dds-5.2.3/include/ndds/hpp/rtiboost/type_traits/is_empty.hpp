
// (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_EMPTY_HPP_INCLUDED
#define RTIBOOST_TT_IS_EMPTY_HPP_INCLUDED

#include <rtiboost/type_traits/is_convertible.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>
#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/intrinsics.hpp>

#ifndef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
#   include <rtiboost/type_traits/remove_cv.hpp>
#   include <rtiboost/type_traits/is_class.hpp>
#   include <rtiboost/type_traits/add_reference.hpp>
#else
#   include <rtiboost/type_traits/is_reference.hpp>
#   include <rtiboost/type_traits/is_pointer.hpp>
#   include <rtiboost/type_traits/is_member_pointer.hpp>
#   include <rtiboost/type_traits/is_array.hpp>
#   include <rtiboost/type_traits/is_void.hpp>
#   include <rtiboost/type_traits/detail/ice_and.hpp>
#   include <rtiboost/type_traits/detail/ice_not.hpp>
#endif

// should be always the last #include directive
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

#ifndef RTIBOOST_INTERNAL_IS_EMPTY
#define RTIBOOST_INTERNAL_IS_EMPTY(T) false
#else
#define RTIBOOST_INTERNAL_IS_EMPTY(T) RTIBOOST_IS_EMPTY(T)
#endif

namespace rtiboost {

namespace detail {

#ifndef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

#ifdef RTIBOOST_MSVC
#pragma warning(push)
#pragma warning(disable:4624) // destructor could not be generated
#endif

template <typename T>
struct empty_helper_t1 : public T
{
    empty_helper_t1();  // hh compiler bug workaround
    int i[256];
private:
   // suppress compiler warnings:
   empty_helper_t1(const empty_helper_t1&);
   empty_helper_t1& operator=(const empty_helper_t1&);
};

#ifdef RTIBOOST_MSVC
#pragma warning(pop)
#endif

struct empty_helper_t2 { int i[256]; };

#if !RTIBOOST_WORKAROUND(__BORLANDC__, < 0x600)

template <typename T, bool is_a_class = false>
struct empty_helper
{
    RTIBOOST_STATIC_CONSTANT(bool, value = false);
};

template <typename T>
struct empty_helper<T, true>
{
    RTIBOOST_STATIC_CONSTANT(
        bool, value = (sizeof(empty_helper_t1<T>) == sizeof(empty_helper_t2))
        );
};

template <typename T>
struct is_empty_impl
{
    typedef typename remove_cv<T>::type cvt;
    RTIBOOST_STATIC_CONSTANT(
        bool, value = (
            ::rtiboost::type_traits::ice_or<
              ::rtiboost::detail::empty_helper<cvt,::rtiboost::is_class<T>::value>::value
              , RTIBOOST_INTERNAL_IS_EMPTY(cvt)
            >::value
            ));
};

#else // __BORLANDC__

template <typename T, bool is_a_class, bool convertible_to_int>
struct empty_helper
{
    RTIBOOST_STATIC_CONSTANT(bool, value = false);
};

template <typename T>
struct empty_helper<T, true, false>
{
    RTIBOOST_STATIC_CONSTANT(bool, value = (
        sizeof(empty_helper_t1<T>) == sizeof(empty_helper_t2)
        ));
};

template <typename T>
struct is_empty_impl
{
   typedef typename remove_cv<T>::type cvt;
   typedef typename add_reference<T>::type r_type;

   RTIBOOST_STATIC_CONSTANT(
       bool, value = (
           ::rtiboost::type_traits::ice_or<
              ::rtiboost::detail::empty_helper<
                  cvt
                , ::rtiboost::is_class<T>::value
                , ::rtiboost::is_convertible< r_type,int>::value
              >::value
              , RTIBOOST_INTERNAL_IS_EMPTY(cvt)
           >::value));
};

#endif // __BORLANDC__

#else // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

#ifdef RTIBOOST_MSVC6_MEMBER_TEMPLATES

template <typename T>
struct empty_helper_t1 : public T
{
   empty_helper_t1();
   int i[256];
};

struct empty_helper_t2 { int i[256]; };

template <typename T>
struct empty_helper_base
{
   enum { value = (sizeof(empty_helper_t1<T>) == sizeof(empty_helper_t2)) };
};

template <typename T>
struct empty_helper_nonbase
{
   enum { value = false };
};

template <bool base>
struct empty_helper_chooser
{
   template <typename T> struct result_
   {
      typedef empty_helper_nonbase<T> type;
   };
};

template <>
struct empty_helper_chooser<true>
{
   template <typename T> struct result_
   {
      typedef empty_helper_base<T> type;
   };
};

template <typename T>
struct is_empty_impl
{
   typedef ::rtiboost::detail::empty_helper_chooser<
      ::rtiboost::type_traits::ice_and<
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_reference<T>::value >::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_convertible<T,double>::value >::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_pointer<T>::value >::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_member_pointer<T>::value >::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_array<T>::value >::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_void<T>::value >::value,
         ::rtiboost::type_traits::ice_not<
            ::rtiboost::is_convertible<T,void const volatile*>::value
            >::value
      >::value > chooser;

   typedef typename chooser::template result_<T> result;
   typedef typename result::type eh_type;

   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_or<eh_type::value, RTIBOOST_INTERNAL_IS_EMPTY(T)>::value));
};

#else

template <typename T> struct is_empty_impl
{
    RTIBOOST_STATIC_CONSTANT(bool, value = RTIBOOST_INTERNAL_IS_EMPTY(T));
};

#endif  // RTIBOOST_MSVC6_MEMBER_TEMPLATES

#endif  // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

// these help when the compiler has no partial specialization support:
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_empty,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_empty,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_empty,void volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_empty,void const volatile,false)
#endif

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_empty,T,::rtiboost::detail::is_empty_impl<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#undef RTIBOOST_INTERNAL_IS_EMPTY

#endif // RTIBOOST_TT_IS_EMPTY_HPP_INCLUDED

