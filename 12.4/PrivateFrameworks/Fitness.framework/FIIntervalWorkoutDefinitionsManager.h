//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSDomainAccessor, NPSManager, NSMutableDictionary;

@interface FIIntervalWorkoutDefinitionsManager : NSObject
{
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
    NSMutableDictionary *_rootIntervalWorkoutDefinitions;
}

- (void).cxx_destruct;
- (id)_mockVariedSpeed;
- (id)_mockQuarterMileSprints;
- (id)_mockHIIT3010;
- (id)_defaultUserIntervalWorkouts;
- (void)_saveDefaultIntervalWorkouts;
- (id)intervalWorkoutDefinitionsForActivityTypeIdentifier:(id)arg1;
- (void)_trimRootIntervalWorkoutDefinitions:(id)arg1;
- (void)removeIntervalWorkoutDefinitionAtIndex:(long long)arg1 activityTypeIdentifier:(id)arg2;
- (void)saveIntervalWorkoutDefinition:(id)arg1 activityTypeIdentifier:(id)arg2;
- (void)_updateIntervalWorkoutDefinition:(id)arg1 activityTypeIdentifier:(id)arg2;
- (void)_serializeAndSaveRootIntervalWorkoutDefinitions:(id)arg1;
- (void)_saveRootIntervalWorkoutDefinitions:(id)arg1;
- (id)_serializeRootIntervalWorkoutDefinitions:(id)arg1;
- (id)_deserializeIntervalWorkoutDefinitions:(id)arg1;
- (void)loadIntervalWorkoutDefinitions;
- (void)_checkVersion;
- (id)init;

@end
