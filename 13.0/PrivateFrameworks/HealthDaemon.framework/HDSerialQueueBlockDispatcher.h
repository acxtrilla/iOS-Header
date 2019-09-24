//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDBlockDispatcher-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface HDSerialQueueBlockDispatcher : NSObject <HDBlockDispatcher>
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)dispatchBlock:(CDUnknownBlockType)arg1 name:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
