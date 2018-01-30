
//  (C) Copyright John Maddock 2005.  
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.


#ifndef RTIBOOST_TT_IS_MEMBER_OBJECT_POINTER_HPP_INCLUDED
#define RTIBOOST_TT_IS_MEMBER_OBJECT_POINTER_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/is_member_pointer.hpp>
#include <rtiboost/type_traits/is_member_function_pointer.hpp>
#include <rtiboost/type_traits/detail/ice_and.hpp>
#include <rtiboost/type_traits/detail/ice_not.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>

namespace rtiboost {

namespace detail{

template <typename T>
struct is_member_object_pointer_impl
{
   RTIBOOST_STATIC_CONSTANT(
      bool, value = (::rtiboost::type_traits::ice_and<
         ::rtiboost::is_member_pointer<T>::value,
         ::rtiboost::type_traits::ice_not<
            ::rtiboost::is_member_function_pointer<T>::value
         >::value
      >::value ));
};

} // namespace detail

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_member_object_pointer,T,::rtiboost::detail::is_member_object_pointer_impl<T>::value)

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif // RTIBOOST_TT_IS_MEMBER_FUNCTION_POINTER_HPP_INCLUDED
