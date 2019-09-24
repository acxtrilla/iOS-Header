//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HIDAnalytics/HIDAnalyticsEvent.h>

@class HIDAnalyticsHistogramEventField;

@interface HIDAnalyticsHistogramEvent : HIDAnalyticsEvent
{
    HIDAnalyticsHistogramEventField *_field;
    _Bool _isUpdated;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)value;
- (void)setIntegerValue:(unsigned long long)arg1 forField:(id)arg2;
- (void)addField:(id)arg1;
- (void)addHistogramFieldWithSegments:(id)arg1 segments:(struct _HIDAnalyticsHistogramSegmentConfig *)arg2 count:(long long)arg3;
- (void)setIntegerValue:(unsigned long long)arg1;
- (id)initWithAttributes:(id)arg1 description:(id)arg2;

@end
