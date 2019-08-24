//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreBluetooth/CBPairingAgentParentDelegate-Protocol.h>
#import <CoreBluetooth/CBXpcConnectionDelegate-Protocol.h>

@class CBPairingAgent, CBXpcConnection, NSData, NSString;

@interface CBManager : NSObject <CBXpcConnectionDelegate, CBPairingAgentParentDelegate>
{
    CBXpcConnection *_connection;
    CBPairingAgent *_pairingAgent;
    long long _state;
    NSData *_advertisingAddress;
}

@property(copy, nonatomic) NSData *advertisingAddress; // @synthesize advertisingAddress=_advertisingAddress;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)peerWithInfo:(id)arg1;
- (void)triggerBTErrorReport:(long long)arg1;
- (void)xpcConnectionDidReceiveMsg:(unsigned short)arg1 args:(id)arg2;
- (void)xpcConnectionIsInvalid;
- (void)xpcConnectionDidReset;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)isMsgAllowedAlways:(unsigned short)arg1;
- (_Bool)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)handlePairingAgentMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handleStateUpdatedMsg:(id)arg1;
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (void)closeL2CAPChannelForPeerUUID:(id)arg1 withPsm:(unsigned short)arg2;
- (_Bool)sendMsg:(unsigned short)arg1 args:(id)arg2;
- (id)sendDebugSyncMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)sendDebugMsg:(unsigned short)arg1 args:(id)arg2;
- (_Bool)sendRawCommand:(unsigned short)arg1 data:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)startWithQueue:(id)arg1 options:(id)arg2 sessionType:(int)arg3;
- (void)setConnectionTargetQueue:(id)arg1;
@property(readonly, retain, nonatomic) CBPairingAgent *sharedPairingAgent; // @dynamic sharedPairingAgent;
- (void)dealloc;
- (id)initInternal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
