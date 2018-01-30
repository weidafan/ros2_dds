//  (C) Copyright 2009-2011 Frederic Bron.
//
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_HAS_MINUS_HPP_INCLUDED
#define RTIBOOST_TT_HAS_MINUS_HPP_INCLUDED

#define RTIBOOST_TT_TRAIT_NAME has_minus
#define RTIBOOST_TT_TRAIT_OP -
#define RTIBOOST_TT_FORBIDDEN_IF\
   ::rtiboost::type_traits::ice_or<\
      /* Lhs==pointer and Rhs==fundamental and Rhs!=integral */\
      ::rtiboost::type_traits::ice_and<\
         ::rtiboost::is_pointer< Lhs_noref >::value,\
         ::rtiboost::is_fundamental< Rhs_nocv >::value,\
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_integral< Rhs_noref >::value >::value\
      >::value,\
      /* Lhs==void* and (Rhs==fundamental or Rhs==pointer) */\
      ::rtiboost::type_traits::ice_and<\
         ::rtiboost::is_pointer< Lhs_noref >::value,\
         ::rtiboost::is_void< Lhs_noptr >::value,\
         ::rtiboost::type_traits::ice_or<\
            ::rtiboost::is_fundamental< Rhs_nocv >::value,\
            ::rtiboost::is_pointer< Rhs_noref >::value\
         >::value\
      >::value,\
      /* Rhs==void* and (Lhs==fundamental or Lhs==pointer) */\
      ::rtiboost::type_traits::ice_and<\
         ::rtiboost::is_pointer< Rhs_noref >::value,\
         ::rtiboost::is_void< Rhs_noptr >::value,\
         ::rtiboost::type_traits::ice_or<\
            ::rtiboost::is_fundamental< Lhs_nocv >::value,\
            ::rtiboost::is_pointer< Lhs_noref >::value\
         >::value\
      >::value,\
      /* Lhs=fundamental and Rhs=pointer */\
      ::rtiboost::type_traits::ice_and<\
         ::rtiboost::is_fundamental< Lhs_nocv >::value,\
         ::rtiboost::is_pointer< Rhs_noref >::value\
      >::value,\
      /* two different pointers */\
      ::rtiboost::type_traits::ice_and<\
         ::rtiboost::is_pointer< Lhs_noref >::value,\
         ::rtiboost::is_pointer< Rhs_noref >::value,\
         ::rtiboost::type_traits::ice_not< ::rtiboost::is_same< Lhs_nocv, Rhs_nocv >::value >::value\
      >::value\
   >::value


#include <rtiboost/type_traits/detail/has_binary_operator.hpp>

#undef RTIBOOST_TT_TRAIT_NAME
#undef RTIBOOST_TT_TRAIT_OP
#undef RTIBOOST_TT_FORBIDDEN_IF

#endif
