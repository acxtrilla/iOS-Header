//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPDevice, RPLegacyDeviceDiscovery, RPLegacySession;

__attribute__((visibility("hidden")))
@interface RPDeviceContext : NSObject
{
    _Bool _reported;
    int _state;
    RPDevice *_device;
    RPLegacyDeviceDiscovery *_discovery;
    RPLegacySession *_session;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) RPLegacySession *session; // @synthesize session=_session;
@property(nonatomic) _Bool reported; // @synthesize reported=_reported;
@property(retain, nonatomic) RPLegacyDeviceDiscovery *discovery; // @synthesize discovery=_discovery;
@property(retain, nonatomic) RPDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;
- (void)pairVerify;
- (void)invalidate;

@end
