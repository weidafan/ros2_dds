// generated from rcutils/resource/logging_macros.h.em

// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! \file */

#ifndef RCUTILS__LOGGING_MACROS_H_
#define RCUTILS__LOGGING_MACROS_H_

#include "rcutils/logging.h"

#include <stdio.h>
#include <stdlib.h>

#if __cplusplus
extern "C"
{
#endif

/**
 * \def RCUTILS_LOG_MIN_SEVERITY
 * Define RCUTILS_LOG_MIN_SEVERITY=RCUTILS_LOG_SEVERITY_[DEBUG|INFO|WARN|ERROR|FATAL]
 * in your build options to compile out anything below that severity.
 */
#ifndef RCUTILS_LOG_MIN_SEVERITY
#define RCUTILS_LOG_MIN_SEVERITY RCUTILS_LOG_SEVERITY_DEBUG
#endif

// Provide the compiler with branch prediction information
#ifndef WIN32
/**
 * \def RCUTILS_LIKELY
 * Instruct the compiler to optimize for the case where the argument equals 1.
 */
# define RCUTILS_LIKELY(x) __builtin_expect((x), 1)
/**
 * \def RCUTILS_UNLIKELY
 * Instruct the compiler to optimize for the case where the argument equals 0.
 */
# define RCUTILS_UNLIKELY(x) __builtin_expect((x), 0)
#else
/**
 * \def RCUTILS_LIKELY
 * No op since Windows doesn't support providing branch prediction information.
 */
# define RCUTILS_LIKELY(x) (x)
/**
 * \def RCUTILS_UNLIKELY
 * No op since Windows doesn't support providing branch prediction information.
 */
# define RCUTILS_UNLIKELY(x) (x)
#endif

/**
 * \def RCUTILS_LOGGING_AUTOINIT
 * \brief Initialize the rcl logging library.
 * Usually it is unnecessary to call the macro directly.
 * All logging macros ensure that this has been called once.
 */
#define RCUTILS_LOGGING_AUTOINIT \
  if (RCUTILS_UNLIKELY(!g_rcl_logging_initialized)) { \
    rcl_logging_initialize(); \
  }

/**
 * \def RCUTILS_LOG_COND_NAMED
 * The logging macro all other logging macros call directly or indirectly.
 * \param severity The severity level
 * \param condition_before The condition macro(s) inserted before the log call
 * \param condition_after The condition macro(s) inserted after the log call
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
#define RCUTILS_LOG_COND_NAMED(severity, condition_before, condition_after, name, ...) \
  { \
    RCUTILS_LOGGING_AUTOINIT \
    static rcl_log_location_t __rcutils_logging_location = {__func__, __FILE__, __LINE__}; \
    condition_before \
    if (severity >= g_rcl_logging_severity_threshold) { \
      rcl_log(&__rcutils_logging_location, severity, name, __VA_ARGS__); \
    } \
    condition_after \
  }

///@{
/**
 * \def RCUTILS_LOG_CONDITION_EMPTY
 * An empty macro which can be used as a placeholder for `condition_before`
 * and `condition_after` which doesn't affect the logging call.
 */
#define RCUTILS_LOG_CONDITION_EMPTY
///@}

/** @name Macros for the `once` condition which ignores all subsequent log
 * calls except the first one.
 */
///@{
/**
 * \def RCUTILS_LOG_CONDITION_ONCE_BEFORE
 * A macro initializing and checking the `once` condition.
 */
#define RCUTILS_LOG_CONDITION_ONCE_BEFORE \
  { \
    static int __rcutils_logging_once = 0; \
    if (RCUTILS_UNLIKELY(0 == __rcutils_logging_once)) { \
      __rcutils_logging_once = 1;
/**
 * \def RCUTILS_LOG_CONDITION_ONCE_AFTER
 * A macro finalizing the `once` condition.
 */
#define RCUTILS_LOG_CONDITION_ONCE_AFTER } \
  }
///@}

/** @name Macros for the `expression` condition which ignores the log calls
 * when the expression evaluates to false.
 */
///@{
/**
 * \def RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE
 * A macro checking the `expression` condition.
 */
#define RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression) \
  if (expression) {
/**
 * \def RCUTILS_LOG_CONDITION_EXPRESSION_AFTER
 * A macro finalizing the `expression` condition.
 */
#define RCUTILS_LOG_CONDITION_EXPRESSION_AFTER }
///@}

/** @name Macros for the `function` condition which ignores the log calls
 * when the function returns false.
 */
///@{
/// The filter function signature.
/**
 * \return true to log the message, false to ignore the message
 */
typedef bool (* RclLogFilter)();
/**
 * \def RCUTILS_LOG_CONDITION_FUNCTION_BEFORE
 * A macro checking the `function` condition.
 */
#define RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function) \
  if ((*function)()) {
/**
 * \def RCUTILS_LOG_CONDITION_FUNCTION_AFTER
 * A macro finalizing the `function` condition.
 */
#define RCUTILS_LOG_CONDITION_FUNCTION_AFTER }
///@}

/** @name Macros for the `skipfirst` condition which ignores the first log
 * call but processes all subsequent calls.
 */
///@{
/**
 * \def RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE
 * A macro initializing and checking the `skipfirst` condition.
 */
#define RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE \
  { \
    static bool __rcutils_logging_first = true; \
    if (RCUTILS_UNLIKELY(true == __rcutils_logging_first)) { \
      __rcutils_logging_first = false; \
    } else {
/**
 * \def RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER
 * A macro finalizing the `skipfirst` condition.
 */
#define RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER } \
  }
///@}

/** @name Macros for the `throttle` condition which ignores log calls if the
 * last logged message is not longer ago than the specified duration.
 */
///@{
/**
 * \def RCUTILS_LOG_CONDITION_THROTTLE_BEFORE
 * A macro initializing and checking the `throttle` condition.
 */
#define RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) { \
    static rcutils_duration_value_t __rcutils_logging_duration = RCUTILS_MS_TO_NS((rcutils_duration_value_t)duration); \
    static rcutils_time_point_value_t __rcutils_logging_last_logged = 0; \
    rcutils_time_point_value_t __rcutils_logging_now = 0; \
    bool __rcutils_logging_condition = true; \
    if (rcutils_steady_time_now(&__rcutils_logging_now) != RCUTILS_RET_OK) { \
      rcl_log( \
        &__rcutils_logging_location, RCUTILS_LOG_SEVERITY_ERROR, "", \
        "%s() at %s:%d getting current steady time failed\n", \
        __func__, __FILE__, __LINE__); \
    } else { \
      __rcutils_logging_condition = __rcutils_logging_now >= __rcutils_logging_last_logged + __rcutils_logging_duration; \
    } \
 \
    if (RCUTILS_LIKELY(__rcutils_logging_condition)) { \
      __rcutils_logging_last_logged = __rcutils_logging_now;

/**
 * \def RCUTILS_LOG_CONDITION_THROTTLE_AFTER
 * A macro finalizing the `throttle` condition.
 */
#define RCUTILS_LOG_CONDITION_THROTTLE_AFTER } \
  }
///@}

/** @name Logging macros for severity DEBUG.
 */
///@{
#if (RCUTILS_LOG_MIN_SEVERITY > RCUTILS_LOG_SEVERITY_DEBUG)
// empty logging macros for severity DEBUG when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_ONCE(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_ONCE_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_EXPRESSION(expression, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_EXPRESSION_NAMED(expression, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_FUNCTION(function, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_FUNCTION_NAMED(function, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_SKIPFIRST(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_SKIPFIRST_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_SKIPFIRST_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_THROTTLE_NAMED(time_source_type, duration, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_DEBUG_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, format, ...)

#else
/**
 * \def RCUTILS_LOG_DEBUG
 * Log a message with severity DEBUG.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_NAMED
 * Log a message with severity DEBUG.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_ONCE
 * Log a message with severity DEBUG with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_ONCE(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_ONCE_NAMED
 * Log a message with severity DEBUG with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_ONCE_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_EXPRESSION
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_EXPRESSION(expression, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_EXPRESSION_NAMED
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * All subsequent log calls except the first one are being ignored.
 * \param expression The expression determining if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_EXPRESSION_NAMED(expression, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_FUNCTION
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_FUNCTION(function, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_FUNCTION_NAMED
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored when the function returns false.
 * All subsequent log calls except the first one are being ignored.
 * \param function The functions return value determines if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_FUNCTION_NAMED(function, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_SKIPFIRST
 * Log a message with severity DEBUG with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_SKIPFIRST(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_SKIPFIRST_NAMED
 * Log a message with severity DEBUG with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_SKIPFIRST_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_THROTTLE
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_SKIPFIRST_THROTTLE
 * Log a message with severity DEBUG with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_SKIPFIRST_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_THROTTLE_NAMED
 * Log a message with severity DEBUG with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_DEBUG_SKIPFIRST_THROTTLE_NAMED
 * Log a message with severity DEBUG with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_DEBUG_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_DEBUG, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
#endif
///@}

/** @name Logging macros for severity INFO.
 */
///@{
#if (RCUTILS_LOG_MIN_SEVERITY > RCUTILS_LOG_SEVERITY_INFO)
// empty logging macros for severity INFO when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_ONCE(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_ONCE_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_EXPRESSION(expression, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_EXPRESSION_NAMED(expression, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_FUNCTION(function, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_FUNCTION_NAMED(function, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_SKIPFIRST(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_SKIPFIRST_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_SKIPFIRST_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_THROTTLE_NAMED(time_source_type, duration, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_INFO_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, format, ...)

#else
/**
 * \def RCUTILS_LOG_INFO
 * Log a message with severity INFO.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_NAMED
 * Log a message with severity INFO.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_ONCE
 * Log a message with severity INFO with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_ONCE(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_ONCE_NAMED
 * Log a message with severity INFO with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_ONCE_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_EXPRESSION
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_EXPRESSION(expression, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_EXPRESSION_NAMED
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * All subsequent log calls except the first one are being ignored.
 * \param expression The expression determining if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_EXPRESSION_NAMED(expression, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_FUNCTION
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_FUNCTION(function, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_FUNCTION_NAMED
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored when the function returns false.
 * All subsequent log calls except the first one are being ignored.
 * \param function The functions return value determines if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_FUNCTION_NAMED(function, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_SKIPFIRST
 * Log a message with severity INFO with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_SKIPFIRST(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_SKIPFIRST_NAMED
 * Log a message with severity INFO with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_SKIPFIRST_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_THROTTLE
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_SKIPFIRST_THROTTLE
 * Log a message with severity INFO with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_SKIPFIRST_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_THROTTLE_NAMED
 * Log a message with severity INFO with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_INFO_SKIPFIRST_THROTTLE_NAMED
 * Log a message with severity INFO with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_INFO_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_INFO, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
#endif
///@}

/** @name Logging macros for severity WARN.
 */
///@{
#if (RCUTILS_LOG_MIN_SEVERITY > RCUTILS_LOG_SEVERITY_WARN)
// empty logging macros for severity WARN when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_ONCE(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_ONCE_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_EXPRESSION(expression, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_EXPRESSION_NAMED(expression, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_FUNCTION(function, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_FUNCTION_NAMED(function, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_SKIPFIRST(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_SKIPFIRST_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_SKIPFIRST_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_THROTTLE_NAMED(time_source_type, duration, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_WARN_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, format, ...)

#else
/**
 * \def RCUTILS_LOG_WARN
 * Log a message with severity WARN.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_NAMED
 * Log a message with severity WARN.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_ONCE
 * Log a message with severity WARN with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_ONCE(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_ONCE_NAMED
 * Log a message with severity WARN with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_ONCE_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_EXPRESSION
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_EXPRESSION(expression, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_EXPRESSION_NAMED
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * All subsequent log calls except the first one are being ignored.
 * \param expression The expression determining if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_EXPRESSION_NAMED(expression, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_FUNCTION
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_FUNCTION(function, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_FUNCTION_NAMED
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored when the function returns false.
 * All subsequent log calls except the first one are being ignored.
 * \param function The functions return value determines if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_FUNCTION_NAMED(function, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_SKIPFIRST
 * Log a message with severity WARN with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_SKIPFIRST(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_SKIPFIRST_NAMED
 * Log a message with severity WARN with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_SKIPFIRST_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_THROTTLE
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_SKIPFIRST_THROTTLE
 * Log a message with severity WARN with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_SKIPFIRST_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_THROTTLE_NAMED
 * Log a message with severity WARN with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_WARN_SKIPFIRST_THROTTLE_NAMED
 * Log a message with severity WARN with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_WARN_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_WARN, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
#endif
///@}

/** @name Logging macros for severity ERROR.
 */
///@{
#if (RCUTILS_LOG_MIN_SEVERITY > RCUTILS_LOG_SEVERITY_ERROR)
// empty logging macros for severity ERROR when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_ONCE(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_ONCE_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_EXPRESSION(expression, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_EXPRESSION_NAMED(expression, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_FUNCTION(function, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_FUNCTION_NAMED(function, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_SKIPFIRST(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_SKIPFIRST_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_SKIPFIRST_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_THROTTLE_NAMED(time_source_type, duration, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_ERROR_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, format, ...)

#else
/**
 * \def RCUTILS_LOG_ERROR
 * Log a message with severity ERROR.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_NAMED
 * Log a message with severity ERROR.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_ONCE
 * Log a message with severity ERROR with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_ONCE(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_ONCE_NAMED
 * Log a message with severity ERROR with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_ONCE_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_EXPRESSION
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_EXPRESSION(expression, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_EXPRESSION_NAMED
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * All subsequent log calls except the first one are being ignored.
 * \param expression The expression determining if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_EXPRESSION_NAMED(expression, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_FUNCTION
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_FUNCTION(function, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_FUNCTION_NAMED
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored when the function returns false.
 * All subsequent log calls except the first one are being ignored.
 * \param function The functions return value determines if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_FUNCTION_NAMED(function, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_SKIPFIRST
 * Log a message with severity ERROR with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_SKIPFIRST(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_SKIPFIRST_NAMED
 * Log a message with severity ERROR with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_SKIPFIRST_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_THROTTLE
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_SKIPFIRST_THROTTLE
 * Log a message with severity ERROR with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_SKIPFIRST_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_THROTTLE_NAMED
 * Log a message with severity ERROR with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_ERROR_SKIPFIRST_THROTTLE_NAMED
 * Log a message with severity ERROR with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_ERROR_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_ERROR, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
#endif
///@}

/** @name Logging macros for severity FATAL.
 */
///@{
#if (RCUTILS_LOG_MIN_SEVERITY > RCUTILS_LOG_SEVERITY_FATAL)
// empty logging macros for severity FATAL when being disabled at compile time
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_ONCE(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_ONCE_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_EXPRESSION(expression, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_EXPRESSION_NAMED(expression, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_FUNCTION(function, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_FUNCTION_NAMED(function, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_SKIPFIRST(format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_SKIPFIRST_NAMED(name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_SKIPFIRST_THROTTLE(time_source_type, duration, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_THROTTLE_NAMED(time_source_type, duration, name, format, ...)
/// Empty logging macro due to the preprocessor definition of RCUTILS_LOG_MIN_SEVERITY.
# define RCUTILS_LOG_FATAL_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, format, ...)

#else
/**
 * \def RCUTILS_LOG_FATAL
 * Log a message with severity FATAL.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_NAMED
 * Log a message with severity FATAL.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_EMPTY, RCUTILS_LOG_CONDITION_EMPTY, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_ONCE
 * Log a message with severity FATAL with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_ONCE(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_ONCE_NAMED
 * Log a message with severity FATAL with the following conditions:
 * All subsequent log calls except the first one are being ignored.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_ONCE_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_ONCE_BEFORE, RCUTILS_LOG_CONDITION_ONCE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_EXPRESSION
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * \param expression The expression determining if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_EXPRESSION(expression, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_EXPRESSION_NAMED
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored when the expression evaluates to false.
 * All subsequent log calls except the first one are being ignored.
 * \param expression The expression determining if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_EXPRESSION_NAMED(expression, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_EXPRESSION_BEFORE(expression), RCUTILS_LOG_CONDITION_EXPRESSION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_FUNCTION
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored when the function returns false.
 * \param function The functions return value determines if the message should be logged
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_FUNCTION(function, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_FUNCTION_NAMED
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored when the function returns false.
 * All subsequent log calls except the first one are being ignored.
 * \param function The functions return value determines if the message should be logged
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_FUNCTION_NAMED(function, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_FUNCTION_BEFORE(function), RCUTILS_LOG_CONDITION_FUNCTION_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_SKIPFIRST
 * Log a message with severity FATAL with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_SKIPFIRST(...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_SKIPFIRST_NAMED
 * Log a message with severity FATAL with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_SKIPFIRST_NAMED(name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_THROTTLE
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_SKIPFIRST_THROTTLE
 * Log a message with severity FATAL with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_SKIPFIRST_THROTTLE(time_source_type, duration, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, "", \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_THROTTLE_NAMED
 * Log a message with severity FATAL with the following conditions:
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration), RCUTILS_LOG_CONDITION_THROTTLE_AFTER, name, \
    __VA_ARGS__)
/**
 * \def RCUTILS_LOG_FATAL_SKIPFIRST_THROTTLE_NAMED
 * Log a message with severity FATAL with the following conditions:
 * The first log call is being ignored but all subsequent calls are being processed.
 * Log calls are being ignored if the last logged message is not longer ago than the specified duration.
 * \param time_source_type The time source type of the time to be used
 * \param duration The duration of the throttle interval
 * \param name The name of the logger
 * \param ... The format string, followed by the variable arguments for the format string
 */
# define RCUTILS_LOG_FATAL_SKIPFIRST_THROTTLE_NAMED(time_source_type, duration, name, ...) \
  RCUTILS_LOG_COND_NAMED( \
    RCUTILS_LOG_SEVERITY_FATAL, \
    RCUTILS_LOG_CONDITION_THROTTLE_BEFORE(time_source_type, duration) RCUTILS_LOG_CONDITION_SKIPFIRST_BEFORE, RCUTILS_LOG_CONDITION_THROTTLE_AFTER RCUTILS_LOG_CONDITION_SKIPFIRST_AFTER, name, \
    __VA_ARGS__)
#endif
///@}

#if __cplusplus
}
#endif

#endif  // RCUTILS__LOGGING_MACROS_H_
