//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TransitionViewController.h"

#import "SBUIPasscodeLockViewDelegate-Protocol.h"

@class LAUIPearlGlyphView, NSDate, NSNumber, NSNumberFormatter, NSString, NSTimer, UIButton, UILabel, UIView;
@protocol SBUIPasscodeLockView;

@interface PasscodeViewController : TransitionViewController <SBUIPasscodeLockViewDelegate>
{
    UIView<SBUIPasscodeLockView> *_passcodeView;
    UIView *_lockoutView;
    UILabel *_lockoutTimerLabel;
    UILabel *_promptLabel;
    UILabel *_deviceLockedLabel;
    UIButton *_cancelButton;
    NSTimer *_updateTimer;
    NSNumberFormatter *_decimalFormatter;
    unsigned long long _failures;
    NSNumber *_failureLimit;
    NSDate *_blockedUntilDate;
    _Bool _isLockoutActive;
    _Bool _firstTime;
    _Bool _isBlocked;
    _Bool _whitePasscodeScreen;
    _Bool _blur;
    _Bool _legacyTransparency;
    _Bool _passcodeEntered;
    _Bool _startedTypingPasscode;
    LAUIPearlGlyphView *_glyphView;
    long long _currentInterfaceStyle;
}

- (void).cxx_destruct;
- (void)mechanismEvent:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_scheduleTimerIfNecessaryAndUpdateSubtitle;
- (void)_clearTimer;
- (void)_switchToBackoffScreen:(id)arg1;
- (id)formattedDecimalStringForNumber:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)_updateCurrentAppearanceIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)passcodeLockViewCancelButtonPressed:(id)arg1;
- (void)_processPasscodeEntryResult:(long long)arg1;
- (void)passcodeLockViewPasscodeEntered:(id)arg1;
- (void)passcodeLockViewPasscodeDidChange:(id)arg1;
- (void)_setupLockoutScreen;
- (void)_setupPasscodeScreen;
- (void)_setupBackgroundOfView:(id)arg1;
- (void)_adjustColors;
- (void)_setupView;
- (_Bool)isFullScreenController;
- (void)didReceiveAuthenticationData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

