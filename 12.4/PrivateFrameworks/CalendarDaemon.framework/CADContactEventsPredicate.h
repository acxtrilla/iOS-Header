//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/EKPredicate.h>

@class NSSet;

@interface CADContactEventsPredicate : EKPredicate
{
    NSSet *_contactEmailAddresses;
    NSSet *_contactNameComponents;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;
@property(retain) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)defaultPropertiesToLoad;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contacts:(id)arg4;
- (_Bool)_isCandidate:(void *)arg1 allowAllDayEvent:(_Bool)arg2;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

@end

