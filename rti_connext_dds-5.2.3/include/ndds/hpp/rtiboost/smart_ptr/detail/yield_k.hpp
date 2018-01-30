#ifndef RTIBOOST_SMART_PTR_DETAIL_YIELD_K_HPP_INCLUDED
#define RTIBOOST_SMART_PTR_DETAIL_YIELD_K_HPP_INCLUDED

// MS compatible compilers support #pragma once

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

//
//  yield_k.hpp
//
//  Copyright (c) 2008 Peter Dimov
//
//  void yield( unsigned k );
//
//  Typical use:
//
//  for( unsigned k = 0; !try_lock(); ++k ) yield( k );
//
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//

#include <rtiboost/config.hpp>

// RTIBOOST_SMT_PAUSE

#if defined(_MSC_VER) && _MSC_VER >= 1310 && ( defined(_M_IX86) || defined(_M_X64) )

extern "C" void _mm_pause();

#define RTIBOOST_SMT_PAUSE _mm_pause();

#elif defined(__GNUC__) && ( defined(__i386__) || defined(__x86_64__) )

#define RTIBOOST_SMT_PAUSE __asm__ __volatile__( "rep; nop" : : : "memory" );

#endif

//

#if defined( WIN32 ) || defined( _WIN32 ) || defined( __WIN32__ ) || defined( __CYGWIN__ )

#if defined( RTIBOOST_USE_WINDOWS_H )
# include <windows.h>
#endif

namespace rtiboost
{

namespace detail
{

#if !defined( RTIBOOST_USE_WINDOWS_H )
  extern "C" void __stdcall Sleep( unsigned long ms );
#endif

inline void yield( unsigned k )
{
    if( k < 4 )
    {
    }
#if defined( RTIBOOST_SMT_PAUSE )
    else if( k < 16 )
    {
        RTIBOOST_SMT_PAUSE
    }
#endif
    else if( k < 32 )
    {
        Sleep( 0 );
    }
    else
    {
        Sleep( 1 );
    }
}

} // namespace detail

} // namespace rtiboost

#elif defined( RTIBOOST_HAS_PTHREADS )

#include <sched.h>
#include <time.h>

namespace rtiboost
{

namespace detail
{

inline void yield( unsigned k )
{
    if( k < 4 )
    {
    }
#if defined( RTIBOOST_SMT_PAUSE )
    else if( k < 16 )
    {
        RTIBOOST_SMT_PAUSE
    }
#endif
    else if( k < 32 || k & 1 )
    {
        sched_yield();
    }
    else
    {
        // g++ -Wextra warns on {} or {0}
        struct timespec rqtp = { 0, 0 };

        // POSIX says that timespec has tv_sec and tv_nsec
        // But it doesn't guarantee order or placement

        rqtp.tv_sec = 0;
        rqtp.tv_nsec = 1000;

        nanosleep( &rqtp, 0 );
    }
}

} // namespace detail

} // namespace rtiboost

#else

namespace rtiboost
{

namespace detail
{

inline void yield( unsigned )
{
}

} // namespace detail

} // namespace rtiboost

#endif

#endif // #ifndef RTIBOOST_SMART_PTR_DETAIL_YIELD_K_HPP_INCLUDED
