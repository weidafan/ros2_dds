
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_HAS_NOTHROW_CONSTRUCTOR_HPP_INCLUDED
#define RTIBOOST_TT_HAS_NOTHROW_CONSTRUCTOR_HPP_INCLUDED

#include <rtiboost/type_traits/has_trivial_constructor.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail{

template <class T>
struct has_nothrow_constructor_imp{
#ifdef RTIBOOST_HAS_NOTHROW_CONSTRUCTOR
   RTIBOOST_STATIC_CONSTANT(bool, value = RTIBOOST_HAS_NOTHROW_CONSTRUCTOR(T));
#else
   RTIBOOST_STATIC_CONSTANT(bool, value = ::rtiboost::has_trivial_constructor<T>::value);
#endif
};

}

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_nothrow_constructor,T,::rtiboost::detail::has_nothrow_constructor_imp<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_nothrow_default_constructor,T,::rtiboost::detail::has_nothrow_constructor_imp<T>::value)

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_constructor,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_constructor,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_constructor,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_constructor,void volatile,false)
#endif

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_default_constructor,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_default_constructor,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_default_constructor,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_default_constructor,void volatile,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_HAS_NOTHROW_CONSTRUCTOR_HPP_INCLUDED
