
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_HAS_TRIVIAL_DESTRUCTOR_HPP_INCLUDED
#define RTIBOOST_TT_HAS_TRIVIAL_DESTRUCTOR_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/intrinsics.hpp>
#include <rtiboost/type_traits/is_pod.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail {

template <typename T>
struct has_trivial_dtor_impl
{
#ifdef RTIBOOST_HAS_TRIVIAL_DESTRUCTOR
   RTIBOOST_STATIC_CONSTANT(bool, value = RTIBOOST_HAS_TRIVIAL_DESTRUCTOR(T));
#else
   RTIBOOST_STATIC_CONSTANT(bool, value = ::rtiboost::is_pod<T>::value);
#endif
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_trivial_destructor,T,::rtiboost::detail::has_trivial_dtor_impl<T>::value)

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_destructor,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_destructor,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_destructor,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_trivial_destructor,void volatile,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_HAS_TRIVIAL_DESTRUCTOR_HPP_INCLUDED
