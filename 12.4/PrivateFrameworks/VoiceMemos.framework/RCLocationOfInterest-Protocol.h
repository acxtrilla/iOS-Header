//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class CLLocation, NSString;
@protocol GEOMapItem;

@protocol RCLocationOfInterest <NSObject>
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) id <GEOMapItem> geoMapItem;
@property(readonly, nonatomic) NSString *preferredName;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double uncertainty;
@end

