//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSProcessAssertion, NSString;
@protocol OS_dispatch_source;

@interface MSVTaskAssertion : NSObject
{
    NSString *_uuid;
    NSString *_bundleID;
    int _pid;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    _Bool _acquired;
    BKSProcessAssertion *_processAssertion;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (unsigned int)_BSKReasonForMSVReason:(unsigned long long)arg1;
- (unsigned int)_BSKFlagsForMSVFlags:(unsigned long long)arg1;
- (void)_cancelInvalidationTimerWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) int pid;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (void)invalidateOnDate:(id)arg1;
- (void)invalidate;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5;
- (id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6;

@end
