
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_HAS_TRIVIAL_CONSTRUCTOR_HPP_INCLUDED
#define RTIBOOST_TT_HAS_TRIVIAL_CONSTRUCTOR_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/intrinsics.hpp>
#include <rtiboost/type_traits/is_pod.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail {

template <typename T>
struct has_trivial_ctor_impl
{
#ifdef RTIBOOST_HAS_TRIVIAL_CONSTRUCTOR
   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_or<
         ::rtiboost::is_pod<T>::value,
         RTIBOOST_HAS_TRIVIAL_CONSTRUCTOR(T)
      >::value));
#else
   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_or<
         ::rtiboost::is_pod<T>::value,
         false
      >::value));
#endif
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_trivial_constructor,T,::rtiboost::detail::has_trivial_ctor_impl<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_trivial_default_constructor,T,::rtiboost::detail::has_trivial_ctor_impl<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_HAS_TRIVIAL_CONSTRUCTOR_HPP_INCLUDED
