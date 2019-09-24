//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKFrozenReminderObject.h>

@class NSArray, NSString, REMAlarm;

__attribute__((visibility("hidden")))
@interface EKFrozenReminderAlarm : EKFrozenReminderObject
{
    REMAlarm *_timeAlarm;
    REMAlarm *_locationAlarm;
}

+ (id)uniqueIdentifierForREMObject:(id)arg1;
+ (id)triggersFromAbsoluteDate:(id)arg1 relativeOffset:(double)arg2 timeValuesRelevant:(_Bool)arg3 structuredLocation:(id)arg4 proximity:(long long)arg5;
+ (long long)ekAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (long long)remAlarmProximityToEKAlarmProximity:(long long)arg1;
+ (Class)meltedClass;
- (void).cxx_destruct;
- (_Bool)isDefaultAlarm;
- (id)originalAlarm;
- (id)semanticIdentifier;
- (id)UUID;
- (long long)proximity;
- (id)updatedAlarmWithLocation:(id)arg1;
- (_Bool)_applyChangesToSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_applyChanges:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *triggers;
- (id)_remStructuredLocation;
@property(readonly) NSString *externalID;
- (id)modifiedStructuredLocation;
- (id)structuredLocation;
- (id)absoluteDate;
- (double)relativeOffset;
- (id)uniqueIdentifier;
- (id)remObjectID;
@property(readonly) NSArray *alarms;
- (id)_locationAlarm;
- (id)_timeAlarm;
- (id)_setTimeOrLocationAlarm:(id)arg1;
- (void)_setTimeAndLocationAlarms:(id)arg1;
- (id)updatedFrozenObjectWithChanges:(id)arg1 updatedChildren:(id)arg2;
- (id)initWithAlternateUniverseObject:(EKPersistentObject_556b3b22 *)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;
- (id)initWithAlarms:(id)arg1 inStore:(id)arg2;
- (id)initWithREMObject:(id)arg1 inStore:(id)arg2 withChanges:(id)arg3;

@end
