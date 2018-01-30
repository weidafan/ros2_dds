
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, 
//      Howard Hinnant and John Maddock 2000. 
//  (C) Copyright Mat Marcus, Jesse Jones and Adobe Systems Inc 2001

//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

//    Fixed is_pointer, is_reference, is_const, is_volatile, is_same, 
//    is_member_pointer based on the Simulated Partial Specialization work 
//    of Mat Marcus and Jesse Jones. See  http://opensource.adobe.com or 
//    http://groups.yahoo.com/group/boost/message/5441 
//    Some workarounds in here use ideas suggested from "Generic<Programming>: 
//    Mappings between Types and Values" 
//    by Andrei Alexandrescu (see http://www.cuj.com/experts/1810/alexandr.html).


#ifndef RTIBOOST_TT_IS_MEMBER_POINTER_HPP_INCLUDED
#define RTIBOOST_TT_IS_MEMBER_POINTER_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/detail/workaround.hpp>

#if !defined(RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION) && !RTIBOOST_WORKAROUND(__BORLANDC__, < 0x600)
#   include <rtiboost/type_traits/is_member_function_pointer.hpp>
#else
#   include <rtiboost/type_traits/is_reference.hpp>
#   include <rtiboost/type_traits/is_array.hpp>
#   include <rtiboost/type_traits/detail/is_mem_fun_pointer_tester.hpp>
#   include <rtiboost/type_traits/detail/yes_no_type.hpp>
#   include <rtiboost/type_traits/detail/false_result.hpp>
#   include <rtiboost/type_traits/detail/ice_or.hpp>
#endif

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

#if defined( __CODEGEARC__ )
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_member_pointer,T,__is_member_pointer(T))
#elif RTIBOOST_WORKAROUND(__BORLANDC__, < 0x600)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_member_pointer,T,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,typename U,is_member_pointer,U T::*,true)

#elif !defined(RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION)
RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_member_pointer,T,::rtiboost::is_member_function_pointer<T>::value)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,typename U,is_member_pointer,U T::*,true)

#if !RTIBOOST_WORKAROUND(__MWERKS__,<=0x3003) && !RTIBOOST_WORKAROUND(__IBMCPP__, <=600)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,typename U,is_member_pointer,U T::*const,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,typename U,is_member_pointer,U T::*volatile,true)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC1_2(typename T,typename U,is_member_pointer,U T::*const volatile,true)
#endif

#else // no partial template specialization

namespace detail {

template <typename R, typename T>
::rtiboost::type_traits::yes_type RTIBOOST_TT_DECL is_member_pointer_tester(R T::*const volatile*);
::rtiboost::type_traits::no_type RTIBOOST_TT_DECL is_member_pointer_tester(...);

template <bool>
struct is_member_pointer_select
    : public ::rtiboost::type_traits::false_result
{
};

template <>
struct is_member_pointer_select<false>
{
    template <typename T> struct result_
    {
        static T* make_t();
        RTIBOOST_STATIC_CONSTANT(
            bool, value =
            (::rtiboost::type_traits::ice_or<
                (1 == sizeof(::rtiboost::type_traits::is_mem_fun_pointer_tester(make_t()))),
                (1 == sizeof(is_member_pointer_tester(make_t())))
            >::value) );
    };
};

template <typename T>
struct is_member_pointer_impl
    : public is_member_pointer_select<
          ::rtiboost::type_traits::ice_or<
              ::rtiboost::is_reference<T>::value
            , ::rtiboost::is_array<T>::value
            >::value
        >::template result_<T>
{
};

RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_member_pointer,void,false)
#ifndef RTIBOOST_NO_CV_VOID_SPECIALIZATIONS
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_member_pointer,void const,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_member_pointer,void volatile,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_IMPL_SPEC1(is_member_pointer,void const volatile,false)
#endif

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_member_pointer,T,::rtiboost::detail::is_member_pointer_impl<T>::value)

#endif // __BORLANDC__

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_MEMBER_POINTER_HPP_INCLUDED
