//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NSObject-Protocol.h>

@class NNMKDeviceSyncRegistry;

@protocol NNMKDeviceRegistryHolder <NSObject>
- (_Bool)pairedDeviceSupportsStandaloneMode;
- (_Bool)pairedDeviceSupportsMultipleMailboxes;
- (NNMKDeviceSyncRegistry *)currentDeviceRegistry;
@end
