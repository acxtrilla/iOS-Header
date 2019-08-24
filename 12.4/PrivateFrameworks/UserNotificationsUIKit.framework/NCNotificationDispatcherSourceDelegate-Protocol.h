//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NSObject-Protocol.h>

@class NCNotificationDispatcher, NSDate, NSSet, NSString;

@protocol NCNotificationDispatcherSourceDelegate <NSObject>
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsCriticalAlerts:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setDeliverQuietly:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 setAllowsNotifications:(_Bool)arg2 forSectionIdentifier:(NSString *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsInSections:(NSSet *)arg2;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequestsFromDate:(NSDate *)arg2 toDate:(NSDate *)arg3 inSections:(NSSet *)arg4;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2 fromDestinations:(NSSet *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestsClearingNotificationRequests:(NSSet *)arg2;
@end
