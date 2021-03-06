//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTAlarmIntentHandler.h>

#import <MobileTimer/MTDisableAlarmIntentHandling-Protocol.h>
#import <MobileTimer/MTEnableAlarmIntentHandling-Protocol.h>

@class NSString;

@interface MTEnableDisableAlarmIntentHandler : MTAlarmIntentHandler <MTEnableAlarmIntentHandling, MTDisableAlarmIntentHandling>
{
}

- (id)_alarmUserActivityWithDisableIntent:(id)arg1;
- (id)_alarmUserActivityWithEnableIntent:(id)arg1;
- (_Bool)_enableDisableAlarm:(_Bool)arg1 alarmIDString:(id)arg2;
- (void)handleMTDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleMTEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTDisableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmMTEnableAlarm:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

