//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBPasscodeEntryAlertView;

@protocol SBPasscodeEntryAlertViewDelegate <NSObject>

@optional
- (void)passcodeAlertViewIsReadyToBeRemoved:(SBPasscodeEntryAlertView *)arg1;
- (_Bool)passcodeAlertViewShouldAnimatePresentation:(SBPasscodeEntryAlertView *)arg1;
- (_Bool)passcodeAlertViewShouldShowAutomaticallyWhenVisible:(SBPasscodeEntryAlertView *)arg1;
@end
