//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/NSObject-Protocol.h>

@class EKCalendar, EKEventEditViewController;

@protocol EKEventEditViewDelegate <NSObject>
- (void)eventEditViewController:(EKEventEditViewController *)arg1 didCompleteWithAction:(long long)arg2;

@optional
- (EKCalendar *)eventEditViewControllerDefaultCalendarForNewEvents:(EKEventEditViewController *)arg1;
@end

