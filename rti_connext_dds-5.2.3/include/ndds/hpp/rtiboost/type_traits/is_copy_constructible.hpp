//  (C) Copyright Antony Polukhin 2013.
//
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_COPY_CONSTRUCTIBLE_HPP_INCLUDED
#define RTIBOOST_TT_IS_COPY_CONSTRUCTIBLE_HPP_INCLUDED

#include <rtiboost/config.hpp>
#include <rtiboost/type_traits/detail/yes_no_type.hpp>
#include <rtiboost/type_traits/is_base_and_derived.hpp>
#include <rtiboost/type_traits/add_reference.hpp>
#include <rtiboost/type_traits/is_rvalue_reference.hpp>
#include <rtiboost/utility/declval.hpp>
#include <rtiboost/noncopyable.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail{

template <bool DerivedFromNoncopyable, class T>
struct is_copy_constructible_impl2 {

// Intel compiler has problems with SFINAE for copy constructors and deleted functions:
//
// error: function *function_name* cannot be referenced -- it is a deleted function
// static rtiboost::type_traits::yes_type test(T1&, decltype(T1(rtiboost::declval<T1&>()))* = 0);
//                                                        ^ 
#if !defined(RTIBOOST_NO_CXX11_DELETED_FUNCTIONS) && !defined(RTIBOOST_INTEL_CXX_VERSION)

#ifdef RTIBOOST_NO_CXX11_DECLTYPE
    template <class T1>
    static rtiboost::type_traits::yes_type test(T1&, rtiboost::mpl::int_<sizeof(T1(rtiboost::declval<T1&>()))>* = 0);
#else
    template <class T1>
    static rtiboost::type_traits::yes_type test(T1&, decltype(T1(rtiboost::declval<T1&>()))* = 0);
#endif

    static rtiboost::type_traits::no_type test(...);
#else
    template <class T1>
    static rtiboost::type_traits::no_type test(T1&, typename T1::boost_move_no_copy_constructor_or_assign* = 0);
    static rtiboost::type_traits::yes_type test(...);
#endif

    // If you see errors like this:
    //
    //      `'T::T(const T&)' is private`
    //      `boost/type_traits/is_copy_constructible.hpp:68:5: error: within this context`
    //
    // then you are trying to call that macro for a structure defined like that:
    //
    //      struct T {
    //          ...
    //      private:
    //          T(const T &);
    //          ...
    //      };
    //
    // To fix that you must modify your structure:
    //
    //      // C++03 and C++11 version
    //      struct T: private rtiboost::noncopyable {
    //          ...
    //      private:
    //          T(const T &);
    //          ...
    //      };
    //
    //      // C++11 version
    //      struct T {
    //          ...
    //      private:
    //          T(const T &) = delete;
    //          ...
    //      };
    RTIBOOST_STATIC_CONSTANT(bool, value = (
            sizeof(test(
                rtiboost::declval<RTIBOOST_DEDUCED_TYPENAME rtiboost::add_reference<T>::type>()
            )) == sizeof(rtiboost::type_traits::yes_type)
        ||
            rtiboost::is_rvalue_reference<T>::value
    ));
};

template <class T>
struct is_copy_constructible_impl2<true, T> {
    RTIBOOST_STATIC_CONSTANT(bool, value = false);
};

template <class T>
struct is_copy_constructible_impl {

    RTIBOOST_STATIC_CONSTANT(bool, value = (
        rtiboost::detail::is_copy_constructible_impl2<
            rtiboost::is_base_and_derived<rtiboost::noncopyable, T>::value,
            T
        >::value
    ));
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_copy_constructible,T,::rtiboost::detail::is_copy_constructible_impl<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_copy_constructible,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_copy_constructible,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_copy_constructible,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_copy_constructible,void volatile,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_COPY_CONSTRUCTIBLE_HPP_INCLUDED
