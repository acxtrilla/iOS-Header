//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HKSampleType, NSPredicate, NSString, UIViewController;

@protocol HKDataMetadataSubsampleDelegate
- (UIViewController *)viewControllerForSampleType:(HKSampleType *)arg1 subSamplePredicate:(NSPredicate *)arg2 title:(NSString *)arg3;
- (NSPredicate *)defaultPredicateForSampleType:(HKSampleType *)arg1;
- (void)finishedAggregateQuery;
@end
