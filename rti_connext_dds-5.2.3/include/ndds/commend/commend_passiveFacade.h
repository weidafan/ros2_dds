/* (c) Copyright 2003-2015, Real-Time Innovations, Inc. All rights reserved. */
/*
 * @(#)commend_passiveFacade.h    generated by: makeheader    Mon Apr 25 07:50:08 2016
 *
 *		built from:	passiveFacade.ifc
 */

#ifndef commend_passiveFacade_h
#define commend_passiveFacade_h


  #ifndef mig_generator_h
    #include "mig/mig_generator.h"
  #endif
  #ifndef commend_dll_h
    #include "commend/commend_dll.h"
  #endif
  #ifndef commend_facade_h
    #include "commend/commend_facade.h"
  #endif

#ifdef __cplusplus
    extern "C" {
#endif

struct RTINetioConfigurator;

struct COMMENDPassiveFacade;

extern COMMENDDllExport void
COMMENDPassiveFacade_delete(struct COMMENDFacade *me,
			    struct REDAWorker *worker);

extern COMMENDDllExport struct COMMENDFacade *
COMMENDPassiveFacade_new(struct REDAWorkerFactory *workerFactory,
			 struct REDADatabase *database,
			 struct REDAExclusiveArea *tableEa,
			 struct RTIClock *clock,
			 struct RTIClock *timestampClock,
			 const struct COMMENDFacadeProperty *property,
                         struct RTINetioConfigurator* configuratorIn,                       
			 struct REDAWorker *worker);

extern COMMENDDllExport RTIBool
COMMENDPassiveFacade_processMessage(struct COMMENDPassiveFacade *me,
				    struct REDABuffer *buffer,
				    struct REDAWorker *worker);

extern COMMENDDllExport RTIBool
COMMENDPassiveFacade_fireEvent(struct COMMENDPassiveFacade *me,
			       struct REDAWorker *worker);


#ifdef __cplusplus
    }	/* extern "C" */
#endif

#endif /* commend_passiveFacade_h */
