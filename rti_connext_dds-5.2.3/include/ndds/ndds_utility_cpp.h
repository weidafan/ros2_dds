/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)ndds_utility_cpp.h    generated by: makeheader    Mon Apr 25 07:51:13 2016
 *
 *		built from:	ndds_utility_cpp.ifcxx
 */

#ifndef ndds_utility_cpp_h
#define ndds_utility_cpp_h


#ifndef dds_cpp_dll_h
  #include "dds_cpp/dds_cpp_dll.h"
#endif
#ifndef dds_cpp_infrastructure_h
  #include "dds_cpp/dds_cpp_infrastructure.h"
#endif
#ifndef ndds_utility_c_h
  #include "ndds/ndds_utility_c.h"
#endif

class DDSCPPDllExport NDDSUtility {
  public:
    /*e \dref_Utility_sleep */
    static void sleep(const struct DDS_Duration_t& durationIn);
    
    /*e \dref_Utility_spin */
    static void spin(DDS_UnsignedLongLong spinCount);
    
    /*e \dref_Utility_get_spin_per_microsecond */
    static DDS_UnsignedLongLong get_spin_per_microsecond();
};

class NDDSStackManagedThread_impl;

class DDSCPPDllExport NDDSStackManagedThread {
    
public:
    /*i \dref_StackManagedThread_get_name
     */
    virtual const char * get_name() = 0;
    
    /*i \dref_StackManagedThread_get_stack_size
     */
    virtual DDS_Long get_stack_size() = 0;
    
    /*i \dref_StackManagedThread_get_stack_usage_max
     */
    virtual DDS_Long get_stack_usage_max() = 0;        
    
protected:

    virtual ~NDDSStackManagedThread() {};
    
};

class DDSCPPDllExport NDDSThreadStackAllocator {

public:
        
    /*i \dref_ThreadStackAllocator_create_stack
     */
    virtual void * create_stack(DDS_Long * stack_size_in_bytes) = 0;
    
    virtual ~NDDSThreadStackAllocator() {};
};

class NDDSStackManagedThreadFactory_impl;

class DDSCPPDllExport NDDSStackManagedThreadFactory : public DDSThreadFactory {    

    void* create_thread(
            const char * thread_name,
            const DDS_ThreadSettings_t & settings,
            DDSThreadFactory_OnSpawnedFunction on_spawned,
            void * thread_param);

    void delete_thread(void * thread);
    
        
public:
        
    /*i \dref_StackManagedThreadFactory_get_thread_count
    */
    DDS_Long get_thread_count();
   
    /*i \dref_StackManagedThreadFactory_get_thread_at
    */
    NDDSStackManagedThread * get_thread_at(DDS_Long index);
    
    /*i \dref_StackManagedThreadFactory_print_threads_stack_summary
    */
    void print_threads_stack_summary();
        
    /*i \dref_StackManagedThreadFactory_new
    */
    NDDSStackManagedThreadFactory(
            NDDSThreadStackAllocator * thread_stack_allocator);

    NDDSStackManagedThreadFactory();
           
    ~NDDSStackManagedThreadFactory();
    
private:
    
    NDDSStackManagedThreadFactory_impl * _impl;
};

#endif /* ndds_utility_cpp_h */
