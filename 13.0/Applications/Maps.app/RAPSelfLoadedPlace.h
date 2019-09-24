//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RAPPlace-Protocol.h"

@class GEORPPlaceInfo, MKMapItem, NSString;

__attribute__((visibility("hidden")))
@interface RAPSelfLoadedPlace : NSObject <RAPPlace>
{
    MKMapItem *_mapItem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sourceApplication;
@property(readonly, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) GEORPPlaceInfo *placeInfo;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, nonatomic) long long source;
@property(readonly, nonatomic) NSString *userVisibleTitle;
- (id)initWithMapItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
