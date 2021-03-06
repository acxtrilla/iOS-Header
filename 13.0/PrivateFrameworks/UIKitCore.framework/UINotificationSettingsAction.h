//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction
{
    UNNotification *_notification;
}

@property(readonly, copy, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (long long)UIActionType;
- (id)initWithNotification:(id)arg1;

@end

