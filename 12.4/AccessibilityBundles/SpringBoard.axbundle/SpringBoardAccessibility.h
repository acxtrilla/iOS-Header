//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SpringBoardAccessibility_super.h"

@interface SpringBoardAccessibility : __SpringBoardAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)__accessibilityUpdateSpeakScreenGestureRecognizer;
- (void)_accessibilityUpdateSpeakScreenGestureRecognizer;
- (_Bool)_accessibilityIsAppReadyToBeProbed;
- (void)_accessibilityHandleSpeakScreenGesture:(id)arg1;
- (void)_accessibilitySetSpeakScreenGestureRecognizer:(id)arg1;
- (id)_accessibilitySpeakScreenGestureRecognizer;
- (unsigned long long)_accessibilityNotificationCount;
- (id)_accessibilityNotificationSummary:(unsigned long long)arg1;
- (void)takeScreenshotAndEdit:(_Bool)arg1;
- (void)_keyboardOrCaseLatchWantsToAttemptUnlock:(int)arg1;
- (_Bool)handleDoubleHeightStatusBarTapWithStyleOverride:(int)arg1;
- (void)_updateRingerState:(int)arg1 withVisuals:(_Bool)arg2 updatePreferenceRegister:(_Bool)arg3;
- (_Bool)accessibilityStartStopToggle;
- (int)_accessibilityCurrentCallState;
- (_Bool)accessibilityPerformAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (id)accessibilityAttributeValue:(long long)arg1;
- (id)_accessibilityPictureInPictureWindow;
- (id)_accessibilitySideAppDividerElement;
- (_Bool)_accessibilityIsBuddyRunning;
- (_Bool)_accessibilityAssistantIsListening;
- (_Bool)_accessibilityHitTestsStatusBar;
- (id)_accessibilityAppSwitcherApps;
- (_Bool)_accessibilityIsAppSwitcherVisible;
- (id)_accessibilityCenterPointOfScreen;
- (id)_accessibilityLaunchableApps;
- (_Bool)_accessibilitySystemWideGestureInProgress;
- (_Bool)_accessibilityIsSystemSleeping;
- (_Bool)_accessibilityIsSystemLocked;
- (_Bool)_accessibilityIsBatteryLow;
- (_Bool)_accessibilityIsVoiceControlRunning;
- (long long)_accessibilityApplicationOrientation;
- (void)_accessibilityDeactivationAnimationWillBegin;
- (void)powerDownRequested:(id)arg1;
- (_Bool)_isDim;
- (void)restartManagerWillReboot:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)_processAccessibilityStatusChange:(id)arg1;
- (void)_accessibilityStatusChanged:(id)arg1;
- (void)_accessibilityLoadPIPInfo;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySetShouldCallAXStatusChangedOnAppLaunchFinish:(_Bool)arg1;
- (_Bool)_accessibilityShouldCallAXStatusChangedOnAppLaunchFinish;
- (void)_accessibilitySetShouldLoadAXInfoOnAppLaunchFinish:(_Bool)arg1;
- (_Bool)_accessibilityShouldLoadAXInfoOnAppLaunchFinish;
- (void)accessibilityDisable;
- (void)accessibilityInitialize;
- (id)_accessibilitySoftwareMimicKeyboard;
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 updateMirroredDisplays:(_Bool)arg3 force:(_Bool)arg4 logMessage:(id)arg5;
- (void)_accessibilityHandleOrientationChange;
- (_Bool)_accessibilitySystemAppServerIsReady;
- (_Bool)_accessibilityIsSystemAppServer;
- (id)_accessibilityStatusBar;

@end
