#ifndef RTIBOOST_SMART_PTR_DETAIL_SPINLOCK_POOL_HPP_INCLUDED
#define RTIBOOST_SMART_PTR_DETAIL_SPINLOCK_POOL_HPP_INCLUDED

// MS compatible compilers support #pragma once

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

//
//  boost/detail/spinlock_pool.hpp
//
//  Copyright (c) 2008 Peter Dimov
//
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
//  spinlock_pool<0> is reserved for atomic<>, when/if it arrives
//  spinlock_pool<1> is reserved for shared_ptr reference counts
//  spinlock_pool<2> is reserved for shared_ptr atomic access
//

#include <rtiboost/config.hpp>
#include <rtiboost/smart_ptr/detail/spinlock.hpp>
#include <cstddef>

namespace rtiboost
{

namespace detail
{

template< int I > class spinlock_pool
{
private:

    static spinlock pool_[ 41 ];

public:

    static spinlock & spinlock_for( void const * pv )
    {
#if defined(__VMS) && __INITIAL_POINTER_SIZE == 64  
        std::size_t i = reinterpret_cast< unsigned long long >( pv ) % 41;
#else  
        std::size_t i = reinterpret_cast< std::size_t >( pv ) % 41;
#endif  
        return pool_[ i ];
    }

    class scoped_lock
    {
    private:

        spinlock & sp_;

        scoped_lock( scoped_lock const & );
        scoped_lock & operator=( scoped_lock const & );

    public:

        explicit scoped_lock( void const * pv ): sp_( spinlock_for( pv ) )
        {
            sp_.lock();
        }

        ~scoped_lock()
        {
            sp_.unlock();
        }
    };
};

template< int I > spinlock spinlock_pool< I >::pool_[ 41 ] =
{
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, RTIBOOST_DETAIL_SPINLOCK_INIT, 
    RTIBOOST_DETAIL_SPINLOCK_INIT
};

} // namespace detail
} // namespace rtiboost

#endif // #ifndef RTIBOOST_SMART_PTR_DETAIL_SPINLOCK_POOL_HPP_INCLUDED