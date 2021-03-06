//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDateComponents.h>

@interface NSDateComponents (HealthKit)
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;
+ (id)hk_componentsWithDays:(long long)arg1;
+ (id)hk_oneWeek;
+ (id)hk_oneDay;
- (long long)hk_ageWithCurrentDate:(id)arg1;
- (id)hk_negativeComponents;
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;
- (id)hk_populatedCalendarGregorianCalendarDefault;
- (long long)hk_maxComponentValue;
- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;
- (double)hk_approximateDuration;
@end

