//  (C) Copyright John Maddock 2006.
//  Use, modification and distribution are subject to the
//  Boost Software License, Version 1.0. (See accompanying file
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org for most recent version.

//  GCC-XML C++ compiler setup:

#  if !defined(__GCCXML_GNUC__) || ((__GCCXML_GNUC__ <= 3) && (__GCCXML_GNUC_MINOR__ <= 3))
#     define RTIBOOST_NO_IS_ABSTRACT
#  endif

//
// Threading support: Turn this on unconditionally here (except for
// those platforms where we can know for sure). It will get turned off again
// later if no threading API is detected.
//
#if !defined(__MINGW32__) && !defined(_MSC_VER) && !defined(linux) && !defined(__linux) && !defined(__linux__)
# define RTIBOOST_HAS_THREADS
#endif

//
// gcc has "long long"
//
#define RTIBOOST_HAS_LONG_LONG

// C++0x features:
//
#  define RTIBOOST_NO_CXX11_CONSTEXPR
#  define RTIBOOST_NO_CXX11_NULLPTR
#  define RTIBOOST_NO_CXX11_TEMPLATE_ALIASES
#  define RTIBOOST_NO_CXX11_DECLTYPE
#  define RTIBOOST_NO_CXX11_DECLTYPE_N3276
#  define RTIBOOST_NO_CXX11_FUNCTION_TEMPLATE_DEFAULT_ARGS
#  define RTIBOOST_NO_CXX11_RVALUE_REFERENCES
#  define RTIBOOST_NO_CXX11_STATIC_ASSERT
#  define RTIBOOST_NO_CXX11_VARIADIC_TEMPLATES
#  define RTIBOOST_NO_CXX11_VARIADIC_MACROS
#  define RTIBOOST_NO_CXX11_AUTO_DECLARATIONS
#  define RTIBOOST_NO_CXX11_AUTO_MULTIDECLARATIONS
#  define RTIBOOST_NO_CXX11_CHAR16_T
#  define RTIBOOST_NO_CXX11_CHAR32_T
#  define RTIBOOST_NO_CXX11_DEFAULTED_FUNCTIONS
#  define RTIBOOST_NO_CXX11_DELETED_FUNCTIONS
#  define RTIBOOST_NO_CXX11_HDR_INITIALIZER_LIST
#  define RTIBOOST_NO_CXX11_SCOPED_ENUMS
#  define RTIBOOST_NO_SFINAE_EXPR
#  define RTIBOOST_NO_CXX11_EXPLICIT_CONVERSION_OPERATORS
#  define RTIBOOST_NO_CXX11_LAMBDAS
#  define RTIBOOST_NO_CXX11_LOCAL_CLASS_TEMPLATE_PARAMETERS
#  define RTIBOOST_NO_CXX11_RANGE_BASED_FOR
#  define RTIBOOST_NO_CXX11_RAW_LITERALS
#  define RTIBOOST_NO_CXX11_UNICODE_LITERALS
#  define RTIBOOST_NO_CXX11_NOEXCEPT
#  define RTIBOOST_NO_CXX11_UNIFIED_INITIALIZATION_SYNTAX
#  define RTIBOOST_NO_CXX11_USER_DEFINED_LITERALS
#  define RTIBOOST_NO_CXX11_ALIGNAS
#  define RTIBOOST_NO_CXX11_TRAILING_RESULT_TYPES
#  define RTIBOOST_NO_CXX11_INLINE_NAMESPACES

#define RTIBOOST_COMPILER "GCC-XML C++ version " __GCCXML__


