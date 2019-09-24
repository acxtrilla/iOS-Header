//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGFuture : NSObject
{
    NSObject *_result;
    NSError *_error;
    struct _opaque_pthread_mutex_t _lock;
    NSObject<OS_dispatch_queue> *_callbacks;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    _Bool _alwaysUseCallbacksQueue;
    _Bool _yoDontLeaveMeHangingBro;
    NSObject *_parentObject;
    void *_parentObjectKey;
    _Bool _isComplete;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (void)waitForFuturesToComplete:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)createWithImmediateError:(id)arg1;
+ (id)createWithImmediateResult:(id)arg1;
+ (id)createWithImmediateResult:(id)arg1 error:(id)arg2;
+ (id)createAfter:(id)arg1 onCreate:(CDUnknownBlockType)arg2;
+ (id)futureForObject:(id)arg1 withKey:(void *)arg2 onCreate:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
- (void).cxx_destruct;
- (void)disassociateFromParentObject;
- (id)waitWithTimeout:(double)arg1;
- (void)_clearTimeoutNonThreadSafe;
- (void)clearTimeout;
- (void)setTimeout:(double)arg1;
- (_Bool)_finishWithResult:(id)arg1 orError:(id)arg2;
- (CDUnknownBlockType)completer;
- (_Bool)completeWithResult:(id)arg1 error:(id)arg2;
- (_Bool)fail:(id)arg1;
- (_Bool)succeed:(id)arg1;
- (id)error;
- (id)result;
- (void)_wait:(CDUnknownBlockType)arg1 forSyncAPI:(_Bool)arg2;
- (void)wait:(CDUnknownBlockType)arg1;
- (id)wait;
- (void)setTargetQueue:(id)arg1 useAfterCompletion:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end
