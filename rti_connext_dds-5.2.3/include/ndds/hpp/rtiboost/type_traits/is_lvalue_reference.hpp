
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, 
//      Howard Hinnant and John Maddock 2000. 
//  (C) Copyright Mat Marcus, Jesse Jones and Adobe Systems Inc 2001

//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

//    Fixed is_pointer, is_lvalue_reference, is_const, is_volatile, is_same, 
//    is_member_pointer based on the Simulated Partial Specialization work 
//    of Mat Marcus and Jesse Jones. See  http://opensource.adobe.com or 
//    http://groups.yahoo.com/group/boost/message/5441 
//    Some workarounds in here use ideas suggested from "Generic<Programming>: 
//    Mappings between Types and Values" 
//    by Andrei Alexandrescu (see http://www.cuj.com/experts/1810/alexandr.html).


#ifndef RTIBOOST_TT_IS_LVALUE_REFERENCE_HPP_INCLUDED
#define RTIBOOST_TT_IS_LVALUE_REFERENCE_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>

#ifdef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
#   include <rtiboost/type_traits/detail/yes_no_type.hpp>
#   include <rtiboost/type_traits/detail/wrap.hpp>
#endif

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

#if defined( __CODEGEARC__ )
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_lvalue_reference,T,__is_reference(T))
#elif !defined(RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION)

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_lvalue_reference,T,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T&,true)

#if  defined(RTIBOOST_ILLEGAL_CV_REFERENCES)
// these are illegal specialisations; cv-qualifies applied to
// references have no effect according to [8.3.2p1],
// C++ Builder requires them though as it treats cv-qualified
// references as distinct types...
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T& const,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T& volatile,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T& const volatile,true)
#endif

#if defined(__GNUC__) && (__GNUC__ < 3)
// these allow us to work around illegally cv-qualified reference
// types.
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T const ,::rtiboost::is_lvalue_reference<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T volatile ,::rtiboost::is_lvalue_reference<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_1(typename T,is_lvalue_reference,T const volatile ,::rtiboost::is_lvalue_reference<T>::value)
// However, the above specializations confuse gcc 2.96 unless we also
// supply these specializations for array types
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,unsigned long N,is_lvalue_reference,T[N],false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,unsigned long N,is_lvalue_reference,const T[N],false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,unsigned long N,is_lvalue_reference,volatile T[N],false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,unsigned long N,is_lvalue_reference,const volatile T[N],false)
#endif

#else

#ifdef RTIBOOST_MSVC
#   pragma warning(push)
#   pragma warning(disable: 4181 4097)
#endif

namespace detail {

using ::rtiboost::type_traits::yes_type;
using ::rtiboost::type_traits::no_type;
using ::rtiboost::type_traits::wrap;

template <class T> T&(* is_lvalue_reference_helper1(wrap<T>) )(wrap<T>);
char is_lvalue_reference_helper1(...);

template <class T> no_type is_lvalue_reference_helper2(T&(*)(wrap<T>));
yes_type is_lvalue_reference_helper2(...);

template <typename T>
struct is_lvalue_reference_impl
{
    RTIBOOST_STATIC_CONSTANT(
        bool, value = sizeof(
            ::rtiboost::detail::is_lvalue_reference_helper2(
                ::rtiboost::detail::is_lvalue_reference_helper1(::rtiboost::type_traits::wrap<T>()))) == 1
        );
};

RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_lvalue_reference,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_lvalue_reference,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_lvalue_reference,void volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_lvalue_reference,void const volatile,false)
#endif

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_lvalue_reference,T,::rtiboost::detail::is_lvalue_reference_impl<T>::value)

#ifdef RTIBOOST_MSVC
#   pragma warning(pop)
#endif

#endif // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_REFERENCE_HPP_INCLUDED

