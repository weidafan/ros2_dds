
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_VOID_HPP_INCLUDED
#define RTIBOOST_TT_IS_VOID_HPP_INCLUDED

#include <rtiboost/config.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

//* is a type T void - is_void<T>
#if defined( __CODEGEARC__ )
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_void,T,__is_void(T))
#else
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_void,T,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_void,void,true)

#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_void,void const,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_void,void volatile,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(is_void,void const volatile,true)
#endif

#endif  // non-CodeGear implementation

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_VOID_HPP_INCLUDED
