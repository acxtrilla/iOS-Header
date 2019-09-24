//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <IdleTimerServices/ITIdleTimerServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSMutableDictionary, NSMutableSet, NSString;
@protocol ITIdleTimerStateServerDelegate, OS_dispatch_queue;

@interface ITIdleTimerStateServer : NSObject <BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface>
{
    struct os_unfair_lock_s _accessLock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableSet *_connections;
    NSMutableDictionary *_clientTargetsByConfigIdentifier;
    id <ITIdleTimerStateServerDelegate> _delegate;
}

@property(nonatomic) __weak id <ITIdleTimerStateServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeConnection:(id)arg1;
- (void)_addConnection:(id)arg1;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id *)arg3;
- (void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id *)arg3;
- (_Bool)isIdleTimerServiceAvailableWithError:(id *)arg1;
- (_Bool)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2;
- (id)initWithCalloutQueue:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
