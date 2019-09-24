//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapItem, MKMuninContainerView, MKMuninView, MKPlacePhotosViewController, NSString;

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional
- (void)cleanMuninContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (MKMuninContainerView *)muninContainerForPlaceCardPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 enterMuninForMapItem:(MKMapItem *)arg2 muninView:(MKMuninView *)arg3;
- (_Bool)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidCloseFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosControllerDidOpenFullscreenPhotos:(MKPlacePhotosViewController *)arg1;
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2;
@end
