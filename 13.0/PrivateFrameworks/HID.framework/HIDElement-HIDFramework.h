//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IOKit/HIDElement.h>

@class NSArray, NSData;

@interface HIDElement (HIDFramework)
@property(readonly) unsigned long long timestamp;
@property(readonly) long long physicalMax;
@property(readonly) long long physicalMin;
@property(readonly) long long logicalMax;
@property(readonly) long long logicalMin;
@property(readonly) long long unitExponent;
@property(readonly) long long unit;
@property(readonly) long long reportSize;
@property(readonly) long long reportID;
@property(readonly) long long usage;
@property(readonly) long long usagePage;
@property(readonly) long long type;
@property(readonly) NSArray *children;
@property(readonly) HIDElement *parent;
@property NSData *dataValue;
@property long long integerValue;
- (double)scaleValue:(long long)arg1;
- (unsigned int)cookie;
- (void)setValueRef:(struct __IOHIDValue *)arg1;
- (struct __IOHIDValue *)valueRef;
- (id)description;
@end
