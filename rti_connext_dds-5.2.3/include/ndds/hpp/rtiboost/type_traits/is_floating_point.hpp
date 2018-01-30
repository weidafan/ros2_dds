
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000-2005.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TYPE_TRAITS_IS_FLOATING_HPP_INCLUDED
#define RTIBOOST_TYPE_TRAITS_IS_FLOATING_HPP_INCLUDED

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

//* is a type T a floating-point type described in the standard (3.9.1p8)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_floating_point,T,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_CV_SPEC1(is_floating_point,float,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_CV_SPEC1(is_floating_point,double,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_CV_SPEC1(is_floating_point,long double,true)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TYPE_TRAITS_IS_FLOAT_HPP_INCLUDED
