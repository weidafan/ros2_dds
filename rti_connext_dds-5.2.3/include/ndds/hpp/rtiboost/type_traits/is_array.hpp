
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, Howard
//  Hinnant & John Maddock 2000.  
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.


// Some fixes for is_array are based on a newsgroup posting by Jonathan Lundquist.


#ifndef RTIBOOST_TT_IS_ARRAY_HPP_INCLUDED
#define RTIBOOST_TT_IS_ARRAY_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>

#ifdef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
#   include <rtiboost/type_traits/detail/yes_no_type.hpp>
#   include <rtiboost/type_traits/detail/wrap.hpp>
#endif

#include <cstddef>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

#if defined( __CODEGEARC__ )
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_array,T,__is_array(T))
#elif !defined(RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_array,T,false)
#if !defined(RTIBOOST_NO_ARRAY_TYPE_SPECIALIZATIONS)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,is_array,T[N],true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,is_array,T const[N],true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,is_array,T volatile[N],true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,is_array,T const volatile[N],true)
#if !RTIBOOST_WORKAROUND(__BORLANDC__, < 0x600) && !defined(__IBMCPP__) &&  !RTIBOOST_WORKAROUND(__DMC__, RTIBOOST_TESTED_AT(0x840))
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_array,T[],true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_array,T const[],true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_array,T volatile[],true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_array,T const volatile[],true)
#endif
#endif

#else // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

namespace detail {

using ::rtiboost::type_traits::yes_type;
using ::rtiboost::type_traits::no_type;
using ::rtiboost::type_traits::wrap;

template< typename T > T(* is_array_tester1(wrap<T>) )(wrap<T>);
char RTIBOOST_TT_DECL is_array_tester1(...);

template< typename T> no_type is_array_tester2(T(*)(wrap<T>));
yes_type RTIBOOST_TT_DECL is_array_tester2(...);

template< typename T >
struct is_array_impl
{ 
    RTIBOOST_STATIC_CONSTANT(bool, value = 
        sizeof(::rtiboost::detail::is_array_tester2(
            ::rtiboost::detail::is_array_tester1(
                ::rtiboost::type_traits::wrap<T>()
                )
        )) == 1
    );
};

#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_array,void,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_array,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_array,void volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_array,void const volatile,false)
#endif

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_array,T,::rtiboost::detail::is_array_impl<T>::value)

#endif // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_ARRAY_HPP_INCLUDED
