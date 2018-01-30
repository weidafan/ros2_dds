
//  (C) Copyright Dave Abrahams, Steve Cleary, Beman Dawes, Howard
//  Hinnant & John Maddock 2000.  
//  Use, modification and distribution are subject to the Boost Software License,
//  Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt).
//
//  See http://www.boost.org/libs/type_traits for most recent version including documentation.


#ifndef RTIBOOST_TT_REMOVE_VOLATILE_HPP_INCLUDED
#define RTIBOOST_TT_REMOVE_VOLATILE_HPP_INCLUDED

#include <rtiboost/type_traits/is_const.hpp>
#include <rtiboost/type_traits/broken_compiler_spec.hpp>
#include <rtiboost/type_traits/detail/cv_traits_impl.hpp>
#include <rtiboost/config.hpp>
#include <rtiboost/detail/workaround.hpp>

#include <cstddef>

#if RTIBOOST_WORKAROUND(RTIBOOST_MSVC,<=1300)
#include <rtiboost/type_traits/msvc/remove_volatile.hpp>
#endif

// should be the last #include
#include <rtiboost/type_traits/detail/type_trait_def.hpp>

namespace rtiboost {

#ifndef RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

namespace detail {

template <typename T, bool is_const>
struct remove_volatile_helper
{
    typedef T type;
};

template <typename T>
struct remove_volatile_helper<T,true>
{
    typedef T const type;
};

template <typename T>
struct remove_volatile_impl
{
    typedef typename remove_volatile_helper<
          typename cv_traits_imp<T*>::unqualified_type
        , ::rtiboost::is_const<T>::value
        >::type type;
};

//
// We can't filter out rvalue_references at the same level as
// references or we get ambiguities from msvc:
//
#ifndef RTIBOOST_NO_CXX11_RVALUE_REFERENCES
template <typename T>
struct remove_volatile_impl<T&&>
{
    typedef T&& type;
};
#endif
} // namespace detail

// * convert a type T to a non-volatile type - remove_volatile<T>

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(remove_volatile,T,typename rtiboost::detail::remove_volatile_impl<T>::type)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_1(typename T,remove_volatile,T&,T&)
#if !defined(RTIBOOST_NO_ARRAY_TYPE_SPECIALIZATIONS)
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_volatile,T volatile[N],T type[N])
RTIBOOST_TT_AUX_TYPE_TRAIT_PARTIAL_SPEC1_2(typename T,std::size_t N,remove_volatile,T const volatile[N],T const type[N])
#endif

#elif !RTIBOOST_WORKAROUND(RTIBOOST_MSVC,<=1300)

RTIBOOST_TT_AUX_TYPE_TRAIT_DEF1(remove_volatile,T,typename rtiboost::detail::remove_volatile_impl<T>::type)

#endif // RTIBOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION

} // namespace rtiboost

#include <rtiboost/type_traits/detail/type_trait_undef.hpp>

#endif // RTIBOOST_TT_REMOVE_VOLATILE_HPP_INCLUDED
