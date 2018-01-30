// Copyright 2005 Alexander Nasonov.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef RTI_FILE_boost_type_traits_promote_hpp_INCLUDED
#define RTI_FILE_boost_type_traits_promote_hpp_INCLUDED

#include <rtiboost/config.hpp>
#include <rtiboost/type_traits/integral_promotion.hpp>
#include <rtiboost/type_traits/floating_point_promotion.hpp>

// Should be the last #include
#include <rtiboost/type_traits/detail/type_trait_def.hpp>

namespace rtiboost {

namespace detail {

template<class T>
struct promote_impl
  : public integral_promotion<
        RTIBOOST_DEDUCED_TYPENAME floating_point_promotion<T>::type
      >
{
};

}

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(
      promote
    , T
    , RTIBOOST_DEDUCED_TYPENAME rtiboost::detail::promote_impl<T>::type
    )
}

#include <rtiboost/type_traits/detail/type_trait_undef.hpp>

#endif // #ifndef FILE_boost_type_traits_promote_hpp_INCLUDED

