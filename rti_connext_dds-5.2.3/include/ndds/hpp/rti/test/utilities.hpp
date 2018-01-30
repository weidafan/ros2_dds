/* $Id$

 (c) Copyright, Real-Time Innovations, 2014-2016. 
 All rights reserved.
 No duplications, whole or partial, manual or electronic, may be made
 without express written permission.  Any such copies, or
 revisions thereof, must display this notice unaltered.
 This code contains trade secrets of Real-Time Innovations, Inc.

modification history
-------------------- 
5.0.2,12jun14,eam Created
============================================================================= */

/*i @file
   Defines utilities that can be used in the testers
*/
#ifndef RTI_TEST_UTILITIES_HPP_
#define RTI_TEST_UTILITIES_HPP_

#include <dds/core/QosProvider.hpp>
#include <dds/domain/DomainParticipant.hpp>

namespace rti { namespace test {

// --- AutoEnableCreatedEntitiesGuard: ----------------------------------------

/*
 * A guard which sets the DPF's EntityFactoryQos false on creation and true on 
 * deletion 
 */
class AutoEnableCreatedEntitiesGuard {

public:
    AutoEnableCreatedEntitiesGuard()
    {
        // Create participants disabled 
        dds::domain::qos::DomainParticipantFactoryQos qos = 
            dds::domain::DomainParticipant::participant_factory_qos();
        qos << dds::core::policy::EntityFactory(false);
        dds::domain::DomainParticipant::participant_factory_qos(qos);
    }

    AutoEnableCreatedEntitiesGuard(
        dds::domain::qos::DomainParticipantFactoryQos& qos)
    {
        // Create participants disabled 
        qos << dds::core::policy::EntityFactory(false);
        dds::domain::DomainParticipant::participant_factory_qos(qos);
    }

    ~AutoEnableCreatedEntitiesGuard()
    {
        // Reset the DPF qos to create entities enabled for the next tests 
        dds::domain::qos::DomainParticipantFactoryQos qos  = 
            dds::domain::DomainParticipant::participant_factory_qos();
        qos << dds::core::policy::EntityFactory(true);
        dds::domain::DomainParticipant::participant_factory_qos(qos);
    }
}; 

// --- AutoEnableCreatedEntitiesGuard: ----------------------------------------

/*
 * A guard which resets the default QosProvider in case a unit test changes 
 * the default library or profile, those changes will not affect following tests 
 */
class DefaultQosProviderGuard {

public:
    DefaultQosProviderGuard() { }

    ~DefaultQosProviderGuard()
    {
        // Reset the Default QosProvider 
        dds::core::QosProvider::reset_default();
    }
}; 

} } // namespace rti::test


#endif // RTI_TEST_UTILITIES_HPP_

/* End $Id$ */
