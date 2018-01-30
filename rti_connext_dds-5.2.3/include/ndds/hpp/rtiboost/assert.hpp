//
//  boost/assert.hpp - RTIBOOST_ASSERT(expr)
//                     RTIBOOST_ASSERT_MSG(expr, msg)
//                     RTIBOOST_VERIFY(expr)
//
//  Copyright (c) 2001, 2002 Peter Dimov and Multi Media Ltd.
//  Copyright (c) 2007 Peter Dimov
//  Copyright (c) Beman Dawes 2011
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
//  Note: There are no include guards. This is intentional.
//
//  See http://www.boost.org/libs/utility/assert.html for documentation.
//

//
// Stop inspect complaining about use of 'assert':
//
// boostinspect:naassert_macro
//

//--------------------------------------------------------------------------------------//
//                                     RTIBOOST_ASSERT                                     //
//--------------------------------------------------------------------------------------//

#undef RTIBOOST_ASSERT

#if defined(RTIBOOST_DISABLE_ASSERTS)

# define RTIBOOST_ASSERT(expr) ((void)0)

#elif defined(RTIBOOST_ENABLE_ASSERT_HANDLER)

#include <rtiboost/config.hpp>
#include <rtiboost/current_function.hpp>

namespace rtiboost
{
  void assertion_failed(char const * expr,
                        char const * function, char const * file, long line); // user defined
} // namespace rtiboost

#define RTIBOOST_ASSERT(expr) (RTIBOOST_LIKELY(!!(expr)) \
  ? ((void)0) \
  : ::rtiboost::assertion_failed(#expr, RTIBOOST_CURRENT_FUNCTION, __FILE__, __LINE__))

#else
# include <assert.h> // .h to support old libraries w/o <cassert> - effect is the same
# define RTIBOOST_ASSERT(expr) assert(expr)
#endif

//--------------------------------------------------------------------------------------//
//                                   RTIBOOST_ASSERT_MSG                                   //
//--------------------------------------------------------------------------------------//

# undef RTIBOOST_ASSERT_MSG

#if defined(RTIBOOST_DISABLE_ASSERTS) || defined(NDEBUG)

  #define RTIBOOST_ASSERT_MSG(expr, msg) ((void)0)

#elif defined(RTIBOOST_ENABLE_ASSERT_HANDLER)

  #include <rtiboost/config.hpp>
  #include <rtiboost/current_function.hpp>

  namespace rtiboost
  {
    void assertion_failed_msg(char const * expr, char const * msg,
                              char const * function, char const * file, long line); // user defined
  } // namespace rtiboost

  #define RTIBOOST_ASSERT_MSG(expr, msg) (RTIBOOST_LIKELY(!!(expr)) \
    ? ((void)0) \
    : ::rtiboost::assertion_failed_msg(#expr, msg, RTIBOOST_CURRENT_FUNCTION, __FILE__, __LINE__))

#else
  #ifndef RTIBOOST_ASSERT_HPP
    #define RTIBOOST_ASSERT_HPP
    #include <cstdlib>
    #include <iostream>
    #include <rtiboost/config.hpp>
    #include <rtiboost/current_function.hpp>

    //  IDE's like Visual Studio perform better if output goes to std::cout or
    //  some other stream, so allow user to configure output stream:
    #ifndef RTIBOOST_ASSERT_MSG_OSTREAM
    # define RTIBOOST_ASSERT_MSG_OSTREAM std::cerr
    #endif

    namespace rtiboost
    {
      namespace assertion
      {
        namespace detail
        {
          // Note: The template is needed to make the function non-inline and avoid linking errors
          template< typename CharT >
          RTIBOOST_NOINLINE void assertion_failed_msg(CharT const * expr, char const * msg, char const * function,
            char const * file, long line)
          {
            RTIBOOST_ASSERT_MSG_OSTREAM
              << "***** Internal Program Error - assertion (" << expr << ") failed in "
              << function << ":\n"
              << file << '(' << line << "): " << msg << std::endl;
#ifdef UNDER_CE
            // The Windows CE CRT library does not have abort() so use exit(-1) instead.
            std::exit(-1);
#else
            std::abort();
#endif
          }
        } // detail
      } // assertion
    } // detail
  #endif

  #define RTIBOOST_ASSERT_MSG(expr, msg) (RTIBOOST_LIKELY(!!(expr)) \
    ? ((void)0) \
    : ::rtiboost::assertion::detail::assertion_failed_msg(#expr, msg, \
          RTIBOOST_CURRENT_FUNCTION, __FILE__, __LINE__))
#endif

//--------------------------------------------------------------------------------------//
//                                     RTIBOOST_VERIFY                                     //
//--------------------------------------------------------------------------------------//

#undef RTIBOOST_VERIFY

#if defined(RTIBOOST_DISABLE_ASSERTS) || ( !defined(RTIBOOST_ENABLE_ASSERT_HANDLER) && defined(NDEBUG) )

# define RTIBOOST_VERIFY(expr) ((void)(expr))

#else

# define RTIBOOST_VERIFY(expr) RTIBOOST_ASSERT(expr)

#endif
