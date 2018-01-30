
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_POD_HPP_INCLUDED
#define RTIBOOST_TT_IS_POD_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/is_void.hpp>
#include <rtiboost/type_traits/is_scalar.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>
#include <rtiboost/type_traits/intrinsics.hpp>

#include <cstddef>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

#ifndef RTIBOOST_IS_POD
#define RTIBOOST_INTERNAL_IS_POD(T) false
#else
#define RTIBOOST_INTERNAL_IS_POD(T) RTIBOOST_IS_POD(T)
#endif

namespace rtiboost {

// forward declaration, needed by 'is_pod_array_helper' template below
template< typename T > struct is_POD;

namespace detail {

#ifndef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

template <typename T> struct is_pod_impl
{ 
    RTIBOOST_STATIC_CONSTANT(
        bool, value =
        (::rtiboost::type_traits::ice_or<
            ::rtiboost::is_scalar<T>::value,
            ::rtiboost::is_void<T>::value,
            RTIBOOST_INTERNAL_IS_POD(T)
         >::value));
};

#if !defined(RTIBOOST_NO_ARRAY_TYPE_SPECIALIZATIONS)
template <typename T, std::size_t sz>
struct is_pod_impl<T[sz]>
    : public is_pod_impl<T>
{
};
#endif

#else

template <bool is_array = false>
struct is_pod_helper
{
    template <typename T> struct result_
    {
        RTIBOOST_STATIC_CONSTANT(
            bool, value =
            (::rtiboost::type_traits::ice_or<
                ::rtiboost::is_scalar<T>::value,
                ::rtiboost::is_void<T>::value,
                RTIBOOST_INTERNAL_IS_POD(T)
            >::value));
    };
};

template <bool b>
struct bool_to_yes_no_type
{
    typedef ::rtiboost::type_traits::no_type type;
};

template <>
struct bool_to_yes_no_type<true>
{
    typedef ::rtiboost::type_traits::yes_type type;
};

template <typename ArrayType>
struct is_pod_array_helper
{
    enum { is_pod = ::rtiboost::is_POD<ArrayType>::value }; // MSVC workaround
    typedef typename bool_to_yes_no_type<is_pod>::type type;
    type instance() const;
};

template <typename T>
is_pod_array_helper<T> is_POD_array(T*);

template <>
struct is_pod_helper<true>
{
    template <typename T> struct result_
    {
        static T& help();
        RTIBOOST_STATIC_CONSTANT(bool, value =
            sizeof(is_POD_array(help()).instance()) == sizeof(::rtiboost::type_traits::yes_type)
            );
    };
};


template <typename T> struct is_pod_impl
{ 
   RTIBOOST_STATIC_CONSTANT(
       bool, value = (
           ::rtiboost::detail::is_pod_helper<
              ::rtiboost::is_array<T>::value
           >::template result_<T>::value
           )
       );
};

#endif // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

// the following help compilers without partial specialization support:
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_pod,void,true)

#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_pod,void const,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_pod,void volatile,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_pod,void const volatile,true)
#endif

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_pod,T,::rtiboost::detail::is_pod_impl<T>::value)
// is_POD is the old depricated name for this trait, do not use this as it may
// be removed in future without warning!!
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_POD,T,::rtiboost::is_pod<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#undef RTIBOOST_INTERNAL_IS_POD

#endif // RTIBOOST_TT_IS_POD_HPP_INCLUDED
