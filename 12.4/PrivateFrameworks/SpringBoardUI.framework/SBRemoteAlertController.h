//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBRemoteAlertDelegate-Protocol.h>

@class NSMutableArray, NSString, SBSRemoteAlertDefinition;
@protocol OS_dispatch_queue, SBRemoteAlert, SBRemoteAlertControllerDelegate;

@interface SBRemoteAlertController : NSObject <SBRemoteAlertDelegate>
{
    SBSRemoteAlertDefinition *_definition;
    unsigned int _tokenPort;
    NSObject<OS_dispatch_queue> *_queue;
    id <SBRemoteAlertControllerDelegate> _delegate;
    id <SBRemoteAlert> _alert;
    NSMutableArray *_pendedActivations;
    _Bool _active;
}

+ (Class)remoteAlertClass;
+ (_Bool)isDefinition:(id)arg1 equalToDefinition:(id)arg2;
+ (_Bool)isDefinition:(id)arg1 allowedForAuditToken:(id)arg2;
- (void).cxx_destruct;
- (void)remoteAlert:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteAlertDidRequestInvalidation:(id)arg1;
- (void)remoteAlertDidRequestDismissal:(id)arg1;
- (void)remoteAlertDidDeactivate:(id)arg1;
- (void)remoteAlertDidActivate:(id)arg1;
- (void)_queue_setActive:(_Bool)arg1;
- (_Bool)_queue_isValid;
- (void)queue_invalidate;
- (_Bool)queue_isActive;
- (void)queue_activateWithContext:(id)arg1;
- (unsigned int)queue_tokenPort;
- (_Bool)queue_matchesDefinition:(id)arg1;
- (void)didInvalidate;
- (void)activateWithContext:(id)arg1;
@property(readonly, nonatomic) id <SBRemoteAlert> alert;
- (void)dealloc;
- (id)initWithDefinition:(id)arg1 tokenPort:(unsigned int)arg2 context:(id)arg3 queue:(id)arg4 delegate:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
