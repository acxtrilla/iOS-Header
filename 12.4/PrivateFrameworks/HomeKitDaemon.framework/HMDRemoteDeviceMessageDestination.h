//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination
{
    HMDDevice *_device;
    HMDDeviceHandle *_preferredHandle;
}

+ (id)shortDescription;
@property(copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)remoteDestinationString;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end
