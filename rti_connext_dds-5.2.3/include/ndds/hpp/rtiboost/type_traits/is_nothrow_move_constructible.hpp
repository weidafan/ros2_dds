
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  (C) Copyright Eric Friedman 2002-2003.
//  (C) Copyright Antony Polukhin 2013.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_NOTHROW_MOVE_CONSTRUCTIBLE_HPP_INCLUDED
#define RTIBOOST_TT_IS_NOTHROW_MOVE_CONSTRUCTIBLE_HPP_INCLUDED

#include <rtiboost/config.hpp>
#include <rtiboost/type_traits/has_trivial_move_constructor.hpp>
#include <rtiboost/type_traits/has_nothrow_copy.hpp>
#include <rtiboost/type_traits/is_array.hpp>
#include <rtiboost/type_traits/is_reference.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>
#include <rtiboost/type_traits/detail/ice_and.hpp>
#include <rtiboost/utility/declval.hpp>
#include <rtiboost/utility/enable_if.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail{

#ifndef RTIBOOST_NO_CXX11_NOEXCEPT

template <class T, class Enable = void>
struct false_or_cpp11_noexcept_move_constructible: public ::rtiboost::false_type {};

template <class T>
struct false_or_cpp11_noexcept_move_constructible <
        T,
        typename ::rtiboost::enable_if_c<sizeof(T) && RTIBOOST_NOEXCEPT_EXPR(T(::rtiboost::declval<T>()))>::type
    > : public ::rtiboost::integral_constant<bool, RTIBOOST_NOEXCEPT_EXPR(T(::rtiboost::declval<T>()))>
{};

template <class T>
struct is_nothrow_move_constructible_imp{
   RTIBOOST_STATIC_CONSTANT(bool, value = 
        (::rtiboost::type_traits::ice_and<
            ::rtiboost::type_traits::ice_not< ::rtiboost::is_volatile<T>::value >::value,
            ::rtiboost::type_traits::ice_not< ::rtiboost::is_reference<T>::value >::value,
            ::rtiboost::detail::false_or_cpp11_noexcept_move_constructible<T>::value
        >::value));
};

#else

template <class T>
struct is_nothrow_move_constructible_imp{
    RTIBOOST_STATIC_CONSTANT(bool, value =(
        ::rtiboost::type_traits::ice_and<
            ::rtiboost::type_traits::ice_or<
                ::rtiboost::has_trivial_move_constructor<T>::value,
                ::rtiboost::has_nothrow_copy<T>::value
            >::value,
            ::rtiboost::type_traits::ice_not< ::rtiboost::is_array<T>::value >::value
        >::value));
};

#endif

}

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_nothrow_move_constructible,T,::rtiboost::detail::is_nothrow_move_constructible_imp<T>::value)

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_nothrow_move_constructible,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_nothrow_move_constructible,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_nothrow_move_constructible,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_nothrow_move_constructible,void volatile,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_NOTHROW_MOVE_CONSTRUCTIBLE_HPP_INCLUDED
