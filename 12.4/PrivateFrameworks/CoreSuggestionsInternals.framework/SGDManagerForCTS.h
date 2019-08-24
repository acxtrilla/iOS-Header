//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGServiceContext, SGSqlEntityStore;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, SGXPCActivityManagerProtocol;

@interface SGDManagerForCTS : NSObject
{
    SGSqlEntityStore *_harvestStore;
    SGServiceContext *_context;
    NSObject<OS_dispatch_queue> *_harvestQueue;
    NSObject<OS_dispatch_queue> *_frontfillQueue;
    NSObject<OS_dispatch_source> *_frontfillSource;
    NSObject<OS_dispatch_semaphore> *_frontfillSemaphoreForTesting;
    struct SGDSuggestManagerCTSCriteriaState _ctsCriteriaState;
    struct _opaque_pthread_mutex_t _geocodeLock;
    double _lastFrontfillFinishTime;
    id <SGXPCActivityManagerProtocol> _xpcActivityManager;
    NSObject<OS_dispatch_source> *_adjustActivitySource;
}

+ (id)defaultInstance;
+ (id)sharedSingletonInstance;
- (void).cxx_destruct;
- (void)waitUntilFrontfillFinishedForTesting;
- (void)resumeFrontfillForTesting;
- (void)suspendFrontfillForTesting;
- (void)resetLastFrontfillFinishTimeForTesting;
- (void)waitForXpcActivityQueue;
- (void)dealloc;
- (void)_doFrontfillHarvestOnFrontfillQueue;
- (void)triggerFrontfillHarvest;
- (_Bool)_attemptToProcessSearchableItemWithoutDissection:(id)arg1;
- (_Bool)hasAlreadyHarvestedSearchableItem:(id)arg1;
- (_Bool)processSearchableItemForTesting:(id)arg1;
- (_Bool)processSearchableItem:(id)arg1 pipeline:(id)arg2 context:(id)arg3;
- (void)drainDefaultQueueCompletely;
- (_Bool)drainHarvestQueue:(id)arg1 highPriorityOnly:(_Bool)arg2 continuingWhile:(CDUnknownBlockType)arg3;
- (void)_doAdjustCriteriaForCTS;
- (void)adjustCriteriaForCTS;
- (void)_performProcessPendingGeocodesActivity:(id)arg1;
- (void)_registerProcessPendingGeocodesActivity;
- (void)_performContactDetailCacheRebuildActivity:(id)arg1;
- (void)_registerForContactDetailCacheRebuildActivity;
- (void)_performPMLTrainingActivity:(id)arg1;
- (void)_registerForPMLTrainingActivity;
- (void)_performSendRTCActivity;
- (void)_registerForCTSSendRTCActivity;
- (void)_performIdentityAnalysisActivity:(id)arg1;
- (void)_registerForCTSIdentityAnalysisActivity;
- (void)_performVacuumActivity;
- (void)_registerForCTSVacuumActivity;
- (void)_performTrimActivity:(id)arg1;
- (void)_registerForCTSTrimActivity;
- (void)_performHarvestActivity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)_registerForCTSHarvestActivity;
- (void)_performCollectWeeklyStats:(id)arg1;
- (struct SGMEventICSSourceType_)icsTypeForBundle:(id)arg1;
- (id)accountTypeForBundle:(id)arg1;
- (struct SGMEventICSSourceType_)accountTypeFor:(id)arg1;
- (void)_registerForCollectWeeklyStats;
- (void)registerForCTS;
- (id)initWithHarvestStore:(id)arg1 xpcActivityManager:(id)arg2;

@end
