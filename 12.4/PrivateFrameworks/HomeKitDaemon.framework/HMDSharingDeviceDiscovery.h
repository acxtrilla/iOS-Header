//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSharingDeviceDiscovery-Protocol.h>

@class NSString, SFDeviceDiscovery;

@interface HMDSharingDeviceDiscovery : HMFObject <HMDSharingDeviceDiscovery>
{
    SFDeviceDiscovery *_deviceDiscovery;
}

@property(retain, nonatomic) SFDeviceDiscovery *deviceDiscovery; // @synthesize deviceDiscovery=_deviceDiscovery;
- (void).cxx_destruct;
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)stop;
- (void)start;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler;
@property(nonatomic) unsigned long long discoveryFlags;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

