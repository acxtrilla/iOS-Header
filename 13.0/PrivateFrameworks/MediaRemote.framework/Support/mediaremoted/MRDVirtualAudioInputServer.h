//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MRDDiagnosticCollecting-Protocol.h"
#import "MRDXPCMessageHandling-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol MRDVirtualAudioInputServerDelegate, OS_dispatch_queue;

@interface MRDVirtualAudioInputServer : NSObject <MRDXPCMessageHandling, MRDDiagnosticCollecting>
{
    NSMutableArray *_recordingEndpointClients;
    NSMutableArray *_registeredDevices;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MRDVirtualAudioInputServerDelegate> _delegate;
}

@property(nonatomic) __weak id <MRDVirtualAudioInputServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleRecordingEndpointAvailabilityMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleVoiceDataReceivedMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleRecordingStateChangedMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleInputDeviceDisconnectedMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleInputDeviceConnectedMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetDevicesMessage:(id)arg1 fromClient:(id)arg2;
- (void)collectDiagnostic:(id)arg1;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;
- (void)clearRecordingEndpointsForClient:(id)arg1;
- (void)clearRegisteredDevicesForClient:(id)arg1;
- (id)registeredDeviceWithID:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSArray *registeredDevices;
@property(readonly, copy, nonatomic) NSArray *recordingEndpointClients;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
