//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUWiFiTrafficPeer : NSObject
{
    _Bool _active;
    unsigned int _trafficFlags;
    CDUnion_fab80606 _peerIP;
}

@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property(nonatomic) CDUnion_fab80606 peerIP; // @synthesize peerIP=_peerIP;
- (id)peerMACAddressData;

@end
