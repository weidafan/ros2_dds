//  (C) Copyright John Maddock & Thorsten Ottosen 2005.
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.


#ifndef RTIBOOST_TT_DECAY_HPP_INCLUDED
#define RTIBOOST_TT_DECAY_HPP_INCLUDED

#include <rtiboost/type_traits/config.hpp>
#include <rtiboost/type_traits/is_array.hpp>
#include <rtiboost/type_traits/is_function.hpp>
#include <rtiboost/type_traits/remove_bounds.hpp>
#include <rtiboost/type_traits/add_pointer.hpp>
#include <rtiboost/type_traits/remove_reference.hpp>
#include <rtiboost/mpl/eval_if.hpp>
#include <rtiboost/mpl/identity.hpp>

namespace rtiboost 
{

    template< class T >
    struct decay
    {
    private:
        typedef RTIBOOST_DEDUCED_TYPENAME remove_reference<T>::type Ty;
    public:
        typedef RTIBOOST_DEDUCED_TYPENAME mpl::eval_if< 
            is_array<Ty>,
            mpl::identity<RTIBOOST_DEDUCED_TYPENAME remove_bounds<Ty>::type*>,
            RTIBOOST_DEDUCED_TYPENAME mpl::eval_if< 
                is_function<Ty>,
                add_pointer<Ty>,
                mpl::identity<Ty>
            >
        >::type type;
    };
    
} // namespace rtiboost


#endif // RTIBOOST_TT_DECAY_HPP_INCLUDED
