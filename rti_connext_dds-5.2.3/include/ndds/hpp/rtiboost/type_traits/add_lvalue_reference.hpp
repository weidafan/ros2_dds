//  Copyright 2010 John Maddock

//  Distributed under the Boost Software License, Version 1.0.
//  See http://www.boost.org/LICENSE_1_0.txt

#ifndef RTIBOOST_TYPE_TRAITS_EXT_ADD_LVALUE_REFERENCE__HPP
#define RTIBOOST_TYPE_TRAITS_EXT_ADD_LVALUE_REFERENCE__HPP

#include <rtiboost/type_traits/add_reference.hpp>

// should be the last #include
#include <rtiboost/type_traits/detail/type_trait_def.hpp>

namespace rtiboost{

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(add_lvalue_reference,T,typename rtiboost::add_reference<T>::type)

#ifndef RTIBOOST_NO_CXX11_RVALUE_REFERENCES
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,add_lvalue_reference,T&&,T&)
#endif

}

#include <rtiboost/type_traits/detail/type_trait_undef.hpp>

#endif  // RTIBOOST_TYPE_TRAITS_EXT_ADD_LVALUE_REFERENCE__HPP
