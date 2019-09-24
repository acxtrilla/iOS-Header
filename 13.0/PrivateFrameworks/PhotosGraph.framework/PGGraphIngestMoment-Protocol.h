//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol PGGraphIngestMoment <NSObject>
@property(readonly, nonatomic) double behavioralScore;
@property(readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property(readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property(readonly, nonatomic) _Bool containsNonJunkAssets;
@property(readonly, nonatomic) _Bool containsBetterScoringAsset;
@property(readonly, nonatomic) _Bool hasAssetsWithInterestingScenes;
@property(readonly, nonatomic) _Bool hasHigherThanImprovedAssets;
@property(readonly, nonatomic) double inhabitationScore;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) unsigned long long totalNumberOfPersons;
@property(readonly, nonatomic) unsigned long long numberOfItemsWithPersons;
@property(readonly, nonatomic) unsigned long long numberOfItems;
@property(readonly, nonatomic) double contentScore;
@property(readonly, nonatomic) _Bool isInteresting;
@property(readonly, nonatomic) _Bool isSmartInteresting;
@property(readonly, nonatomic) NSDate *universalEndDate;
@property(readonly, nonatomic) NSDate *universalStartDate;
@property(readonly, nonatomic) NSDate *localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate;
@end
