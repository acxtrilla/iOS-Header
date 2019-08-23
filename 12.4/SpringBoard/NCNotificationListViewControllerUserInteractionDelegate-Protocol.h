//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIScrollViewDelegate-Protocol.h"

@class NCNotificationListViewController, NCNotificationViewController;

@protocol NCNotificationListViewControllerUserInteractionDelegate <UIScrollViewDelegate>

@optional
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 didEndUserInteractionWithNotificationViewController:(NCNotificationViewController *)arg2;
- (void)notificationListViewController:(NCNotificationListViewController *)arg1 willBeginUserInteractionWithNotificationViewController:(NCNotificationViewController *)arg2;
- (void)notificationListViewControllerDidEndScrolling:(NCNotificationListViewController *)arg1;
- (void)notificationListViewControllerDidScroll:(NCNotificationListViewController *)arg1;
- (void)notificationListViewControllerDidSignificantUserInteraction:(NCNotificationListViewController *)arg1;
@end
