//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@class CPLScopeFilter, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLMinglePulledChangesTask : CPLEngineSyncTask
{
    NSObject<OS_dispatch_queue> *_lock;
    NSString *_clientCacheIdentifier;
    _Bool _hasPreparedForMingling;
    unsigned long long _countOfNotifiedBatchesInPullQueue;
    CPLScopeFilter *_scopeFilter;
}

+ (_Bool)mingleBatch:(id)arg1 forStore:(id)arg2 putBatchesInPullQueue:(_Bool *)arg3 error:(id *)arg4;
@property(retain, nonatomic) CPLScopeFilter *scopeFilter; // @synthesize scopeFilter=_scopeFilter;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)cancel;
- (void)taskDidFinishWithError:(id)arg1;
- (void)launch;
- (void)_launch;
- (void)_processNextBatch;
- (void)_taskDidFinishWithError:(id)arg1;
- (_Bool)_checkContinueMinglingInTransaction:(id)arg1;
- (id)initWithEngineLibrary:(id)arg1;

@end
