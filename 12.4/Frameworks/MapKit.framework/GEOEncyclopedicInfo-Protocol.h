//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapItemAttribution, NSArray, NSString;

@protocol GEOEncyclopedicInfo <NSObject>
@property(readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic) NSArray *factoids;
@property(readonly, nonatomic) _Bool hasPairOfFactoids;
@property(readonly, nonatomic) NSString *textBlockText;
@property(readonly, nonatomic) NSString *textBlockTitle;
@property(readonly, nonatomic) _Bool hasTextBlock;
@end
