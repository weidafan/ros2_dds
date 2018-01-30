//  (C) Copyright John Maddock 2011.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

//  Greenhills C compiler setup:

#define RTIBOOST_COMPILER "Cray C version " RTIBOOST_STRINGIZE(_RELEASE)

#if _RELEASE < 7
#  error "Boost is not configured for Cray compilers prior to version 7, please try the configure script."
#endif

//
// Check this is a recent EDG based compiler, otherwise we don't support it here:
//
#ifndef __EDG_VERSION__
#  error "Unsupported Cray compiler, please try running the configure script."
#endif

#include "rtiboost/config/compiler/common_edg.hpp"

//
// Cray peculiarities, probably version 7 specific:
//
#undef RTIBOOST_NO_CXX11_AUTO_DECLARATIONS
#undef RTIBOOST_NO_CXX11_AUTO_MULTIDECLARATIONS
#define RTIBOOST_HAS_NRVO
#define RTIBOOST_NO_CXX11_VARIADIC_TEMPLATES
#define RTIBOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX
#define RTIBOOST_NO_CXX11_UNICODE_LITERALS
#define RTIBOOST_NO_TWO_PHASE_NAME_LOOKUP
#define RTIBOOST_HAS_NRVO
#define RTIBOOST_NO_CXX11_TEMPLATE_ALIASES
#define RTIBOOST_NO_CXX11_STATIC_ASSERT
#define RTIBOOST_NO_SFINAE_EXPR
#define RTIBOOST_NO_CXX11_SCOPED_ENUMS
#define RTIBOOST_NO_CXX11_RVALUE_REFERENCES
#define RTIBOOST_NO_CXX11_RANGE_BASED_FOR
#define RTIBOOST_NO_CXX11_RAW_LITERALS
#define RTIBOOST_NO_CXX11_NULLPTR
#define RTIBOOST_NO_CXX11_NOEXCEPT
#define RTIBOOST_NO_CXX11_LAMBDAS
#define RTIBOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#define RTIBOOST_NO_CXX11_FUNCTION_TEMPLATE_DEFAULT_ARGS
#define RTIBOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#define RTIBOOST_NO_CXX11_DELETED_FUNCTIONS
#define RTIBOOST_NO_CXX11_DEFAULTED_FUNCTIONS
#define RTIBOOST_NO_CXX11_DECLTYPE_N3276
#define RTIBOOST_NO_CXX11_DECLTYPE
#define RTIBOOST_NO_CXX11_CONSTEXPR
#define RTIBOOST_NO_CXX11_USER_DEFINED_LITERALS
#define RTIBOOST_NO_COMPLETE_VALUE_INITIALIZATION
#define RTIBOOST_NO_CXX11_CHAR32_T
#define RTIBOOST_NO_CXX11_CHAR16_T
#define RTIBOOST_NO_CXX11_ALIGNAS
//#define RTIBOOST_BCB_PARTIAL_SPECIALIZATION_BUG
#define RTIBOOST_MATH_DISABLE_STD_FPCLASSIFY
//#define RTIBOOST_HAS_FPCLASSIFY

#define RTIBOOST_SP_USE_PTHREADS
#define RTIBOOST_AC_USE_PTHREADS

