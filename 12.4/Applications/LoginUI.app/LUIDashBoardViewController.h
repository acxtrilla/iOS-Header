//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "LUIAuthenticationControllerDelegate-Protocol.h"
#import "LUIDashBoardViewDelegate-Protocol.h"
#import "LUINavigationViewControllerProtocol-Protocol.h"
#import "LUIPasscodeViewControllerDelegate-Protocol.h"
#import "LUISwipeUpAnimationControllerDelegate-Protocol.h"

@class LKUser, LUIDashBoardView, LUISwipeUpAnimationController, NSString, UIView;
@protocol LUIProgressAnimationProtocol;

@interface LUIDashBoardViewController : UIViewController <LUIPasscodeViewControllerDelegate, LUIDashBoardViewDelegate, LUIAuthenticationControllerDelegate, LUISwipeUpAnimationControllerDelegate, LUINavigationViewControllerProtocol>
{
    _Bool _isFetchingAuthMode;
    LKUser *_userInfo;
    LUIDashBoardView *_dashBoardView;
    long long _currentIdleTimerMode;
    LUISwipeUpAnimationController *_swipeUpAnimationController;
}

@property(retain, nonatomic) LUISwipeUpAnimationController *swipeUpAnimationController; // @synthesize swipeUpAnimationController=_swipeUpAnimationController;
@property(nonatomic) _Bool isFetchingAuthMode; // @synthesize isFetchingAuthMode=_isFetchingAuthMode;
@property(nonatomic) long long currentIdleTimerMode; // @synthesize currentIdleTimerMode=_currentIdleTimerMode;
@property(retain, nonatomic) LUIDashBoardView *dashBoardView; // @synthesize dashBoardView=_dashBoardView;
@property(retain, nonatomic) LKUser *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (void)_startUnlockingDevice;
- (void)swipeUpAnimationControllerSwipeGestureDidEnd:(id)arg1;
- (void)swipeUpAnimationControllerSwipeGestureDidBegin:(id)arg1;
- (void)swipeUpAnimationControllerSwipeGestureDidPassThreshold:(id)arg1;
- (void)presentCustomUIInteractionForNativeAuthModeForUser:(id)arg1;
@property(readonly, nonatomic) UIView<LUIProgressAnimationProtocol> *progressView;
- (void)homeButtonSingleTapped;
- (_Bool)shouldAllowUIUpdate;
- (id)userForStatusBarDisplay;
- (void)notYouButtonPressed:(id)arg1;
- (void)_fetchAuthMode;
- (void)_setupGesture;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

