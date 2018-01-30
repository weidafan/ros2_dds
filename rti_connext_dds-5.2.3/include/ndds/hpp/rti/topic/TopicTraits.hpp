/* $Id$

(c) Copyright, Real-Time Innovations, 2014-2016.
All rights reserved.

No duplications, whole or partial, manual or electronic, may be made
without express written permission.  Any such copies, or
revisions thereof, must display this notice unaltered.
This code contains trade secrets of Real-Time Innovations, Inc.


modification history
--------------------
5.20,08aug14,ajm CODEGENII-303 Adding impl_type trait
5.20,16jun14,acr Created
============================================================================= */

#ifndef RTI_DDS_TOPIC_TOPICTRAITS_HPP_
#define RTI_DDS_TOPIC_TOPICTRAITS_HPP_

// IMPORTANT: macros.hpp must be the first RTI header included in every header
// file so that symbols are exported correctly on Windows
#include <dds/core/macros.hpp>

#include <dds/core/types.hpp>

namespace rti { namespace topic {

/**
 * @ingroup DDSTopicTraitsModule
 * @brief @extension Indicates if a topic type contains directly or indirectly
 *  IDL pointer members.
 *
 * This template is specialized in the generated code for topic types that do
 * contain pointers.
 *
 * This trait enables (when it's \p false_type) or disables (when it's
 * \p true_type) the DataReader read/take operations that copy instead of
 * loaning the data (for example,
 * dds::sub::DataReader::take(SamplesFWIterator, int32_t))
 *
 */
template <typename TopicType>
struct topic_type_has_pointer_members : public dds::core::false_type {};

/*
 * For internal use.
 *
 * This template is specialized in the generated code to return the equivalent
 * generated type in C
 */
template <typename TopicType>
struct impl_type {};

/**
 * @ingroup DDSTopicTraitsModule
 * @headerfile rti/topic/TopicTraits.hpp
 * @brief Provides a DynamicType that represents an IDL-generated type.
 *
 * This type is specialized for \ref DDSTypesModule "IDL-generated types" to
 * provide a \p get() function whose return type is a const reference to a
 * concrete subclass of dds::core::xtypes::DynamicType, such as
 * dds::core::xtypes::StructType, dds::core::xtypes::UnionType,
 * dds::core::xtypes::EnumType.
 *
 * For example, given the following IDL type \p Foo:
 *
 * \code
 * struct Foo {
 *     long x;
 * };
 * \endcode
 *
 * You can obtain its DynamicType (in this case a StructType) as follows:
 *
 * \code
 * const dds::core::xtypes::StructType& foo_dynamic = rti::topic::dynamic_type<Foo>::get();
 * std::cout << foo_dynamic.name() << std::endl; // Output: Foo
 * \endcode
 *
 * Note that if the type is an IDL alias such as the following:
 *
 * \code
 * typedef Foo Bar;
 * \endcode
 *
 * Then \p rti::topic::dynamic_type<Bar> resolves to \p rti::topic::dynamic_type<Foo>,
 * both returning the same \p StructType. If you want to explicitly access the \p AliasType
 * use the special tag type \p Bar_AliasTag_t:
 *
 * \code
 * const dds::core::xtypes::AliasType& bar_dynamic = rti::topic::dynamic_type<Bar_AliasTag_t>::get();
 * std::cout << bar_dynamic.name() << std::endl; // Output: Bar
 * \endcode
 *
 * @see
 */
template <typename TopicType>
struct dynamic_type {
    // specializations define:
    // static const dds::core::xtypes::DynamicType& get();
};

} }  // namespace rti::topic

#endif // RTI_DDS_TOPIC_TOPICTRAITS_HPP_
