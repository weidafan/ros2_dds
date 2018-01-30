
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_OBJECT_HPP_INCLUDED
#define RTIBOOST_TT_IS_OBJECT_HPP_INCLUDED

#include <rtiboost/type_traits/is_reference.hpp>
#include <rtiboost/type_traits/is_void.hpp>
#include <rtiboost/type_traits/is_function.hpp>
#include <rtiboost/type_traits/detail/ice_and.hpp>
#include <rtiboost/type_traits/detail/ice_not.hpp>
#include <rtiboost/config.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail {

template <typename T>
struct is_object_impl
{
#ifndef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_and<
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_reference<T>::value>::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_void<T>::value>::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_function<T>::value>::value
      >::value));
#else
   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_and<
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_reference<T>::value>::value,
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_void<T>::value>::value
      >::value));
#endif
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_object,T,::rtiboost::detail::is_object_impl<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_OBJECT_HPP_INCLUDED
