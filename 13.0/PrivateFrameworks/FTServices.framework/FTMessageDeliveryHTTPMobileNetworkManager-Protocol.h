//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FTServices/NSObject-Protocol.h>

@class NSString;

@protocol FTMessageDeliveryHTTPMobileNetworkManager <NSObject>
@property(readonly, nonatomic) _Bool isWiFiUsable;
@property(readonly, nonatomic) _Bool isAirplaneModeEnabled;
- (void)removeWiFiAutoAssociationClientToken:(NSString *)arg1;
- (void)addWiFiAutoAssociationClientToken:(NSString *)arg1;
@end

