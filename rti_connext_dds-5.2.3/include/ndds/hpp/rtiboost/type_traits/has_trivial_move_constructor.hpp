
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  (C) Copyright Eric Friedman 2002-2003.
//  (C) Copyright Antony Polukhin 2013.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_HAS_TRIVIAL_MOVE_CONSTRUCTOR_HPP_INCLUDED
#define RTIBOOST_TT_HAS_TRIVIAL_MOVE_CONSTRUCTOR_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/intrinsics.hpp>
#include <rtiboost/type_traits/is_pod.hpp>
#include <rtiboost/type_traits/is_volatile.hpp>
#include <rtiboost/type_traits/detail/ice_and.hpp>
#include <rtiboost/type_traits/detail/ice_not.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail {

template <typename T>
struct has_trivial_move_ctor_impl
{
#ifdef RTIBOOST_HAS_TRIVIAL_MOVE_CONSTRUCTOR
   RTIBOOST_STATIC_CONSTANT(bool, value = (RTIBOOST_HAS_TRIVIAL_MOVE_CONSTRUCTOR(T)));
#else
   RTIBOOST_STATIC_CONSTANT(bool, value =
           (::rtiboost::type_traits::ice_and<
              ::rtiboost::is_pod<T>::value,
              ::rtiboost::type_traits::ice_not< ::rtiboost::is_volatile<T>::value >::value
           >::value));
#endif
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_trivial_move_constructor,T,::rtiboost::detail::has_trivial_move_ctor_impl<T>::value)

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_move_constructor,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_move_constructor,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_move_constructor,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_move_constructor,void volatile,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_HAS_TRIVIAL_MOVE_CONSTRUCTOR_HPP_INCLUDED
