# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef RTIBOOST_PREPROCESSOR_DEBUG_ERROR_HPP
# define RTIBOOST_PREPROCESSOR_DEBUG_ERROR_HPP
#
# include <rtiboost/preprocessor/cat.hpp>
# include <rtiboost/preprocessor/config/config.hpp>
#
# /* RTIBOOST_PP_ERROR */
#
# if RTIBOOST_PP_CONFIG_ERRORS
#    define RTIBOOST_PP_ERROR(code) RTIBOOST_PP_CAT(RTIBOOST_PP_ERROR_, code)
# endif
#
# define RTIBOOST_PP_ERROR_0x0000 RTIBOOST_PP_ERROR(0x0000, RTIBOOST_PP_INDEX_OUT_OF_BOUNDS)
# define RTIBOOST_PP_ERROR_0x0001 RTIBOOST_PP_ERROR(0x0001, RTIBOOST_PP_WHILE_OVERFLOW)
# define RTIBOOST_PP_ERROR_0x0002 RTIBOOST_PP_ERROR(0x0002, RTIBOOST_PP_FOR_OVERFLOW)
# define RTIBOOST_PP_ERROR_0x0003 RTIBOOST_PP_ERROR(0x0003, RTIBOOST_PP_REPEAT_OVERFLOW)
# define RTIBOOST_PP_ERROR_0x0004 RTIBOOST_PP_ERROR(0x0004, RTIBOOST_PP_LIST_FOLD_OVERFLOW)
# define RTIBOOST_PP_ERROR_0x0005 RTIBOOST_PP_ERROR(0x0005, RTIBOOST_PP_SEQ_FOLD_OVERFLOW)
# define RTIBOOST_PP_ERROR_0x0006 RTIBOOST_PP_ERROR(0x0006, RTIBOOST_PP_ARITHMETIC_OVERFLOW)
# define RTIBOOST_PP_ERROR_0x0007 RTIBOOST_PP_ERROR(0x0007, RTIBOOST_PP_DIVISION_BY_ZERO)
#
# endif
