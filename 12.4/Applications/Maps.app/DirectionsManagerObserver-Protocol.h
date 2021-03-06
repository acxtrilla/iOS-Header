//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DirectionsManager, DirectionsWaypoint, NSError, NSNumber, Route;

@protocol DirectionsManagerObserver <NSObject>

@optional
- (void)directionsManager:(DirectionsManager *)arg1 didChangeChromeTransportType:(long long)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 displayDirectionsToSelectedRouteWithNavigationOfType:(int)arg2 options:(long long)arg3;
- (void)directionsManager:(DirectionsManager *)arg1 displayDirectionsToSelectedRouteWithoutNavigationWithOptions:(long long)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 willStartDirectionsToCurrentRouteWithOptions:(long long)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 needsPromptToSimulateForOptions:(long long)arg2;
- (void)directionsManagerDidUpdateUserLocation:(DirectionsManager *)arg1;
- (void)directionsManagerDidUpdateToStepIndex:(DirectionsManager *)arg1 stepIndex:(NSNumber *)arg2;
- (void)directionsManagerDidSwitchToNewRoute:(DirectionsManager *)arg1 route:(Route *)arg2;
- (void)directionsManagerWillClear:(DirectionsManager *)arg1;
- (void)directionsManagerDidReset:(DirectionsManager *)arg1;
- (void)directionsManagerWillReset:(DirectionsManager *)arg1;
- (void)directionsManagerDidCancelLoad:(DirectionsManager *)arg1;
- (void)directionsManagerDidFailToLoadInitialRoutes:(DirectionsManager *)arg1 withError:(NSError *)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 didLoadRoute:(Route *)arg2;
- (void)directionsManager:(DirectionsManager *)arg1 didLoadWaypointsForStart:(DirectionsWaypoint *)arg2 end:(DirectionsWaypoint *)arg3;
- (void)directionsManagerDidStartLoad:(DirectionsManager *)arg1;
@end

