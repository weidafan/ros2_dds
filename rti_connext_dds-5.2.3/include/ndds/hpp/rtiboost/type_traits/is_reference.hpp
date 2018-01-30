
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, 
//      Howard Hinnant and John Maddock 2000, 2010. 
//  (C) Copyright Mat Marcus, Jesse Jones and Adobe Systems Inc 2001

//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_REFERENCE_HPP_INCLUDED
#define RTIBOOST_TT_IS_REFERENCE_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/is_lvalue_reference.hpp>
#include <rtiboost/type_traits/is_rvalue_reference.hpp>
#include <rtiboost/type_traits/ice.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail {

template <typename T>
struct is_reference_impl
{
   RTIBOOST_STATIC_CONSTANT(bool, value =
      (::rtiboost::type_traits::ice_or<
         ::rtiboost::is_lvalue_reference<T>::value, ::rtiboost::is_rvalue_reference<T>::value
       >::value));
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_reference,T,::rtiboost::detail::is_reference_impl<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_REFERENCE_HPP_INCLUDED

