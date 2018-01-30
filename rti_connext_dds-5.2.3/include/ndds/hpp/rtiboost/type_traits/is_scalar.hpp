
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_SCALAR_HPP_INCLUDED
#define RTIBOOST_TT_IS_SCALAR_HPP_INCLUDED

#include <rtiboost/type_traits/is_arithmetic.hpp>
#include <rtiboost/type_traits/is_enum.hpp>
#include <rtiboost/type_traits/is_pointer.hpp>
#include <rtiboost/type_traits/is_member_pointer.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>
#include <rtiboost/config.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail {

template <typename T>
struct is_scalar_impl
{ 
   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_or<
         ::rtiboost::is_arithmetic<T>::value,
         ::rtiboost::is_enum<T>::value,
         ::rtiboost::is_pointer<T>::value,
         ::rtiboost::is_member_pointer<T>::value
      >::value));
};

// these specializations are only really needed for compilers 
// without partial specialization support:
template <> struct is_scalar_impl<void>{ RTIBOOST_STATIC_CONSTANT(bool, value = false ); };
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
template <> struct is_scalar_impl<void const>{ RTIBOOST_STATIC_CONSTANT(bool, value = false ); };
template <> struct is_scalar_impl<void volatile>{ RTIBOOST_STATIC_CONSTANT(bool, value = false ); };
template <> struct is_scalar_impl<void const volatile>{ RTIBOOST_STATIC_CONSTANT(bool, value = false ); };
#endif

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_scalar,T,::rtiboost::detail::is_scalar_impl<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_SCALAR_HPP_INCLUDED
