//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSUserNotificationStrategy-Protocol.h>

__attribute__((visibility("hidden")))
@interface AMSUNUserNotificationStrategy : NSObject <AMSUserNotificationStrategy>
{
}

+ (id)_centerForBundleId:(id)arg1;
+ (id)_removeNotificationWithIdentifier:(id)arg1 centerBundleId:(id)arg2 logKey:(id)arg3;
+ (id)_removeNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)_postNotification:(id)arg1 centerBundleId:(id)arg2;
+ (id)_activeNotificationsWithCenterBundleId:(id)arg1;

@end
