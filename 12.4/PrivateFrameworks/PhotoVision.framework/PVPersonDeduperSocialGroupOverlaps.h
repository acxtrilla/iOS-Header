//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoVision/PVPersonDeduperStep.h>

@interface PVPersonDeduperSocialGroupOverlaps : PVPersonDeduperStep
{
}

- (void)dedupePersons:(id)arg1 withOtherPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 resultBlock:(CDUnknownBlockType)arg4;
- (void)mergePersons:(id)arg1 otherPersonLocalIdentifiers:(id)arg2 personsFetchResult:(id)arg3 mergeSocialGroupPersonIdentifiers:(id)arg4;
- (_Bool)isPersonSimilar:(id)arg1 withOtherPerson:(id)arg2 withDistance:(float)arg3;
- (id)metricsKey;
- (id)name;

@end

