//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHAwardingScheduler-Protocol.h>
#import <ActivityAchievements/ACHDataStoreObserving-Protocol.h>
#import <ActivityAchievements/HDDatabaseProtectedDataObserver-Protocol.h>
#import <ActivityAchievements/HDDiagnosticObject-Protocol.h>
#import <ActivityAchievements/HDHealthDaemonReadyObserver-Protocol.h>

@class ACHDataStore, ACHEarnedInstanceAwardingEngine, HDProfile, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ACHGizmoAwardingScheduler : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, ACHAwardingScheduler, ACHDataStoreObserving>
{
    HDProfile *_profile;
    ACHDataStore *_dataStore;
    ACHEarnedInstanceAwardingEngine *_awardingEngine;
    NSSet *_blocksWaitingOnFirstEvaluation;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_retryTimer;
    _Bool _needsRetry;
    _Bool _firstEvaluationComplete;
    _Bool _dataStoreHasPopulated;
    double _retryInterval;
    double _retryLeeway;
    CDUnknownBlockType _scheduledEvaluationCompleteBlock;
}

@property(copy, nonatomic) CDUnknownBlockType scheduledEvaluationCompleteBlock; // @synthesize scheduledEvaluationCompleteBlock=_scheduledEvaluationCompleteBlock;
@property(nonatomic) double retryLeeway; // @synthesize retryLeeway=_retryLeeway;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
- (void).cxx_destruct;
- (void)performAfterFirstEvaluation:(CDUnknownBlockType)arg1;
- (void)_queue_cancelRetryAwardingEvaluationTimer;
- (void)_queue_scheduleRetryAwardingEvaluation;
- (void)_queue_requestRetryingAwardingEvaluationWithCompletion:(CDUnknownBlockType)arg1;
- (void)dataStoreDidPopulate:(id)arg1;
- (void)requestAwardingEvaluationWithCompletion:(CDUnknownBlockType)arg1;
- (id)diagnosticDescription;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1 dataStore:(id)arg2 awardingEngine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
