//  (C) Copyright John Maddock 2007. 
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.

#ifndef RTIBOOST_TT_IS_COMPLEX_HPP
#define RTIBOOST_TT_IS_COMPLEX_HPP

#include <rtiboost/type_traits/is_convertible.hpp>
#include <complex>
// should be the last #include
#include <rtiboost/type_traits/detail/bool_trait_def.hpp>


namespace rtiboost {
namespace detail{

struct is_convertible_from_tester
{
   template <class T>
   is_convertible_from_tester(const std::complex<T>&);
};

}

RTIBOOST_TT_AUX_BOOL_TRAIT_DEF1(is_complex,T,(::rtiboost::is_convertible<T, rtiboost::detail::is_convertible_from_tester>::value))

} // namespace rtiboost

#include <rtiboost/type_traits/detail/bool_trait_undef.hpp>

#endif //RTIBOOST_TT_IS_COMPLEX_HPP
