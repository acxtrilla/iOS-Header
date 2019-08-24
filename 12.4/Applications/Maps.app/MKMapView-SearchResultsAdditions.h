//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMapView.h>

@interface MKMapView (SearchResultsAdditions)
- (struct CLLocationCoordinate2D)pinDroppingCoordinate;
- (_Bool)_pinPositionAvailableAtPoint:(struct CGPoint)arg1;
- (void)setSelectedSearchResult:(id)arg1;
- (id)selectedSearchResult;
- (CDStruct_02837cd9)clampRect:(CDStruct_02837cd9)arg1 toMinZoom:(id)arg2 maxZoom:(id)arg3 withFixedPoint:(CDStruct_c3b9c2ee)arg4;
- (CDStruct_02837cd9)clampRect:(CDStruct_02837cd9)arg1 toMinZoom:(id)arg2 maxZoom:(id)arg3;
- (CDStruct_02837cd9)displayMapRegionForSearchResult:(id)arg1;
- (CDStruct_02837cd9)regionForSearchResults:(id)arg1 suggestedRegion:(CDStruct_02837cd9)arg2 splitViewInsets:(_Bool)arg3 minZoom:(id)arg4 maxZoom:(id)arg5;
- (_Bool)rectIsEmpty:(CDStruct_02837cd9)arg1;
- (void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(_Bool)arg3 animation:(long long)arg4 splitViewInsets:(_Bool)arg5 minZoom:(id)arg6 maxZoom:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (void)goToSearchResults:(id)arg1 mapRegion:(id)arg2 requireMapMovement:(_Bool)arg3 minZoom:(id)arg4 maxZoom:(id)arg5;
- (_Bool)isCoordinateVisible:(struct CLLocationCoordinate2D)arg1;
- (CDStruct_02837cd9)mapRectContainingSearchResults:(id)arg1;
- (struct UIEdgeInsets)splitViewInsetsForPinAnnotations;
- (struct UIEdgeInsets)defaultInsetsForBalloonCallout;
- (struct UIEdgeInsets)defaultInsetsForPinAnnotations;
- (CDStruct_02837cd9)mapRectThatFits:(CDStruct_02837cd9)arg1 minMetersPerPoint:(double)arg2;
@end
