
//  (C) Copyright Steve Cleary, Beman Dawes, Howard Hinnant & John Maddock 2000.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_HAS_NOTHROW_COPY_HPP_INCLUDED
#define RTIBOOST_TT_HAS_NOTHROW_COPY_HPP_INCLUDED

#include <rtiboost/type_traits/has_trivial_copy.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail{

template <class T>
struct has_nothrow_copy_imp{
#ifdef RTIBOOST_HAS_NOTHROW_COPY
   RTIBOOST_STATIC_CONSTANT(bool, value = RTIBOOST_HAS_NOTHROW_COPY(T));
#else
   RTIBOOST_STATIC_CONSTANT(bool, value = ::rtiboost::has_trivial_copy<T>::value);
#endif
};

}

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_nothrow_copy,T,::rtiboost::detail::has_nothrow_copy_imp<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(has_nothrow_copy_constructor,T,::rtiboost::detail::has_nothrow_copy_imp<T>::value)

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy,void volatile,false)
#endif

RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy_constructor,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy_constructor,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy_constructor,void const volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_SPEC1(has_nothrow_copy_constructor,void volatile,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_HAS_NOTHROW_COPY_HPP_INCLUDED
