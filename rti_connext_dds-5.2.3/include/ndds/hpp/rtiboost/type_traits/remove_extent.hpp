
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000-2005.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_REMOVE_EXTENT_HPP_INCLUDED
#define RTIBOOST_TT_REMOVE_EXTENT_HPP_INCLUDED

#include <rtiboost/config.hpp>
#include <rtiboost/detail/workaround.hpp>
#include <cstddef>

#if RTIBOOST_WORKAROUND(RTIBOOST_MSVC,<=1300)
#include <rtiboost/type_traits/msvc/remove_extent.hpp>
#endif

// should be the last #include
#include <rtiboost/type_traits/detail/type_trait_def.hpp>

#if !RTIBOOST_WORKAROUND(RTIBOOST_MSVC,<=1300)

namespace rtiboost {

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(remove_extent,T,T)

#if !defined(RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION) && !defined(RTIBOOST_NO_ARRAY_TYPE_SPECIALIZATIONS)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_extent,T[N],T type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_extent,T const[N],T const type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_extent,T volatile[N],T volatile type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_extent,T const volatile[N],T const volatile type)
#if !RTIBOOST_WORKAROUND(__BORLANDC__, RTIBOOST_TESTED_AT(0x610)) && !defined(__IBMCPP__) &&  !RTIBOOST_WORKAROUND(__DMC__, RTIBOOST_TESTED_AT(0x840))
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_extent,T[],T)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_extent,T const[],T const)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_extent,T volatile[],T volatile)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_extent,T const volatile[],T const volatile)
#endif
#endif

} // namespace rtiboost

#endif

#include <rtiboost/type_traits/detail/type_trait_undef.hpp>

#endif // RTIBOOST_TT_REMOVE_BOUNDS_HPP_INCLUDED
