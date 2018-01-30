// Copyright 2005 Alexander Nasonov.
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#ifndef RTI_FILE_boost_type_traits_floating_point_promotion_hpp_INCLUDED
#define RTI_FILE_boost_type_traits_floating_point_promotion_hpp_INCLUDED

#include <rtiboost/config.hpp>

#ifdef RTIBOOST_NO_CV_SPECIALIZATIONS
#include <rtiboost/mpl/at.hpp>
#include <rtiboost/mpl/int.hpp>
#include <rtiboost/mpl/multiplies.hpp>
#include <rtiboost/mpl/plus.hpp>
#include <rtiboost/mpl/vector.hpp>
#include <rtiboost/type_traits/is_same.hpp>
#endif

// Should be the last #include
#include <rtiboost/type_traits/detail/type_trait_def.hpp>

namespace rtiboost {

namespace type_traits { namespace detail {

#ifndef RTIBOOST_NO_CV_SPECIALIZATIONS

template<class T>
struct floating_point_promotion
{
    typedef T type;
};

template<>
struct floating_point_promotion<float>
{
    typedef double type;
};

template<>
struct floating_point_promotion<float const>
{
    typedef double const type;
};

template<>
struct floating_point_promotion<float volatile>
{
    typedef double volatile type;
};

template<>
struct floating_point_promotion<float const volatile>
{
    typedef double const volatile type;
};

#else

template<class T>
struct floating_point_promotion
  : mpl::at<
        mpl::vector< T, double, double const, double volatile,
                     double const volatile >
      , mpl::plus<
            is_same<T, float>
          , mpl::multiplies< is_same<T, float const>         , mpl::int_<2> >
          , mpl::multiplies< is_same<T, float volatile>      , mpl::int_<3> >
          , mpl::multiplies< is_same<T, float const volatile>, mpl::int_<4> >
          >
      >
{
};

#endif

} }

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(
      floating_point_promotion
    , T
    , RTIBOOST_DEDUCED_TYPENAME
        rtiboost::type_traits::detail::floating_point_promotion<T>::type
    )
}

#include <rtiboost/type_traits/detail/type_trait_undef.hpp>

#endif // #ifndef FILE_boost_type_traits_floating_point_promotion_hpp_INCLUDED

