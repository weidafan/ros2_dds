
//  (C) Copyright Rani Sharoni 2003-2005.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.
 
#ifndef RTIBOOST_TT_IS_BASE_OF_HPP_INCLUDED
#define RTIBOOST_TT_IS_BASE_OF_HPP_INCLUDED

#include <rtiboost/type_traits/is_base_and_derived.hpp>
#include <rtiboost/type_traits/is_same.hpp>
#include <rtiboost/type_traits/is_class.hpp>
#include <rtiboost/type_traits/detail/ice_or.hpp>
#include <rtiboost/type_traits/detail/ice_and.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

   namespace detail{
      template <class B, class D>
      struct is_base_of_imp
      {
          typedef typename remove_cv<B>::type ncvB;
          typedef typename remove_cv<D>::type ncvD;
          RTIBOOST_STATIC_CONSTANT(bool, value = (::rtiboost::type_traits::ice_or<      
            (::rtiboost::detail::is_base_and_derived_impl<ncvB,ncvD>::value),
            (::rtiboost::type_traits::ice_and< ::rtiboost::is_same<ncvB,ncvD>::value, ::rtiboost::is_class<ncvB>::value>::value)>::value));
      };
   }

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF2(
      is_base_of
    , Base
    , Derived
    , (::rtiboost::detail::is_base_of_imp<Base, Derived>::value))

#ifndef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC2_2(typename Base,typename Derived,is_base_of,Base&,Derived,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC2_2(typename Base,typename Derived,is_base_of,Base,Derived&,false)
RTIBOOST_TT_AUX_BOOL_TRAIT_PARTIAL_SPEC2_2(typename Base,typename Derived,is_base_of,Base&,Derived&,false)
#endif

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_BASE_AND_DERIVED_HPP_INCLUDED
