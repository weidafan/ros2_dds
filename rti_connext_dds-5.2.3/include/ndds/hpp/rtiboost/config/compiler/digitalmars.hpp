//  Copyright (C) Christof Meerwald 2003
//  Copyright (C) Dan Watkins 2003
//
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  Digital Mars C++ compiler setup:
#define RTIBOOST_COMPILER __DMC_VERSION_STRING__

#define RTIBOOST_HAS_LONG_LONG
#define RTIBOOST_HAS_PRAGMA_ONCE

#if !defined(RTIBOOST_STRICT_CONFIG)
#define RTIBOOST_NO_MEMBER_TEMPLATE_FRIENDS
#define RTIBOOST_NO_OPERATORS_IN_NAMESPACE
#define RTIBOOST_NO_UNREACHABLE_RETURN_DETECTION
#define RTIBOOST_NO_SFINAE
#define RTIBOOST_NO_USING_TEMPLATE
#define RTIBOOST_FUNCTION_SCOPE_USING_DECLARATION_BREAKS_ADL
#endif

//
// has macros:
#define RTIBOOST_HAS_DIRENT_H
#define RTIBOOST_HAS_STDINT_H
#define RTIBOOST_HAS_WINTHREADS

#if (__DMC__ >= 0x847)
#define RTIBOOST_HAS_EXPM1
#define RTIBOOST_HAS_LOG1P
#endif

//
// Is this really the best way to detect whether the std lib is in namespace std?
//
#ifdef __cplusplus
#include <cstddef>
#endif
#if !defined(__STL_IMPORT_VENDOR_CSTD) && !defined(_STLP_IMPORT_VENDOR_CSTD)
#  define RTIBOOST_NO_STDC_NAMESPACE
#endif


// check for exception handling support:
#if !defined(_CPPUNWIND) && !defined(RTIBOOST_NO_EXCEPTIONS)
#  define RTIBOOST_NO_EXCEPTIONS
#endif

//
// C++0x features
//
#define RTIBOOST_NO_CXX11_AUTO_DECLARATIONS
#define RTIBOOST_NO_CXX11_AUTO_MULTIDECLARATIONS
#define RTIBOOST_NO_CXX11_CHAR16_T
#define RTIBOOST_NO_CXX11_CHAR32_T
#define RTIBOOST_NO_CXX11_CONSTEXPR
#define RTIBOOST_NO_CXX11_DECLTYPE
#define RTIBOOST_NO_CXX11_DECLTYPE_N3276
#define RTIBOOST_NO_CXX11_DEFAULTED_FUNCTIONS
#define RTIBOOST_NO_CXX11_DELETED_FUNCTIONS
#define RTIBOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#define RTIBOOST_NO_CXX11_EXTERN_TEMPLATE
#define RTIBOOST_NO_CXX11_HDR_INITIALIZER_LIST
#define RTIBOOST_NO_CXX11_LAMBDAS
#define RTIBOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#define RTIBOOST_NO_CXX11_NOEXCEPT
#define RTIBOOST_NO_CXX11_NULLPTR
#define RTIBOOST_NO_CXX11_RANGE_BASED_FOR
#define RTIBOOST_NO_CXX11_RAW_LITERALS
#define RTIBOOST_NO_CXX11_RVALUE_REFERENCES
#define RTIBOOST_NO_CXX11_SCOPED_ENUMS
#define RTIBOOST_NO_SFINAE_EXPR
#define RTIBOOST_NO_CXX11_STATIC_ASSERT
#define RTIBOOST_NO_CXX11_TEMPLATE_ALIASES
#define RTIBOOST_NO_CXX11_UNICODE_LITERALS
#define RTIBOOST_NO_CXX11_VARIADIC_TEMPLATES
#define RTIBOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX
#define RTIBOOST_NO_CXX11_USER_DEFINED_LITERALS
#define RTIBOOST_NO_CXX11_ALIGNAS
#define RTIBOOST_NO_CXX11_TRAILING_RESULT_TYPES
#define RTIBOOST_NO_CXX11_INLINE_NAMESPACES

#if (__DMC__ <= 0x840)
#error "Compiler not supported or configured - please reconfigure"
#endif
//
// last known and checked version is ...:
#if (__DMC__ > 0x848)
#  if defined(RTIBOOST_ASSERT_CONFIG)
#     error "Unknown compiler version - please run the configure tests and report the results"
#  endif
#endif
