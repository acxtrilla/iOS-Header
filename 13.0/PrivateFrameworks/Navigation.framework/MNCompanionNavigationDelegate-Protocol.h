//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOCompanionRouteDetails, GEOCompanionRouteStatus, GEOCompanionRouteUpdate;

@protocol MNCompanionNavigationDelegate <NSObject>
- (void)updateNavigationRouteWithUpdate:(GEOCompanionRouteUpdate *)arg1;
- (void)updateNavigationRouteStatus:(GEOCompanionRouteStatus *)arg1;
- (void)updateNavigationRouteDetails:(GEOCompanionRouteDetails *)arg1 routeStatus:(GEOCompanionRouteStatus *)arg2;
@end

