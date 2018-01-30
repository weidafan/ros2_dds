
//  (C) Copyright John Maddock 2005.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_REMOVE_ALL_EXTENTS_HPP_INCLUDED
#define RTIBOOST_TT_REMOVE_ALL_EXTENTS_HPP_INCLUDED

#include <rtiboost/config.hpp>
#include <cstddef>
#include <rtiboost/detail/workaround.hpp>

#if RTIBOOST_WORKAROUND(RTIBOOST_MSVC,<=1300)
#include <rtiboost/type_traits/msvc/remove_all_extents.hpp>
#endif

// should be the last #include
#include <rtiboost/type_traits/detail/type_trait_def.hpp>

#if !RTIBOOST_WORKAROUND(RTIBOOST_MSVC,<=1300)

namespace rtiboost {

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(remove_all_extents,T,T)

#if !defined(RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION) && !defined(RTIBOOST_NO_ARRAY_TYPE_SPECIALIZATIONS)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_all_extents,T[N],typename rtiboost::remove_all_extents<T>::type type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_all_extents,T const[N],typename rtiboost::remove_all_extents<T const>::type type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_all_extents,T volatile[N],typename rtiboost::remove_all_extents<T volatile>::type type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_all_extents,T const volatile[N],typename rtiboost::remove_all_extents<T const volatile>::type type)
#if !RTIBOOST_WORKAROUND(__BORLANDC__, RTIBOOST_TESTED_AT(0x610)) && !defined(__IBMCPP__) &&  !RTIBOOST_WORKAROUND(__DMC__, RTIBOOST_TESTED_AT(0x840))
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_all_extents,T[],typename rtiboost::remove_all_extents<T>::type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_all_extents,T const[],typename rtiboost::remove_all_extents<T const>::type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_all_extents,T volatile[],typename rtiboost::remove_all_extents<T volatile>::type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_all_extents,T const volatile[],typename rtiboost::remove_all_extents<T const volatile>::type)
#endif
#endif

} // namespace rtiboost

#endif

#include <rtiboost/type_traits/detail/type_trait_undef.hpp>

#endif // RTIBOOST_TT_REMOVE_BOUNDS_HPP_INCLUDED
