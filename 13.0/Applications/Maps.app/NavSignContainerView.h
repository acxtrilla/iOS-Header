//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

#import "NavJunctionViewHeightDelegate-Protocol.h"
#import "NavSignViewAnalyticsDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSTimer, NavJunctionViewController, NavSignQueueItem, NavSignView, UIView;
@protocol NavContainerLayoutDelegate;

__attribute__((visibility("hidden")))
@interface NavSignContainerView : MapsThemeView <NavJunctionViewHeightDelegate, NavSignViewAnalyticsDelegate>
{
    _Bool _runLoopIsWaitingForSecondarySignCall;
    NSLayoutConstraint *_primaryContainerTopToSuperviewTopConstraint;
    NSLayoutConstraint *_primaryContainerHeightConstraint;
    NSLayoutConstraint *_secondaryContainerTopToJunctionViewBottomConstraint;
    _Bool _displaysSecondarySign;
    _Bool _displayingJunctionView;
    id <NavContainerLayoutDelegate> _layoutDelegate;
    unsigned long long _signLayoutType;
    double _maxHeight;
    UIView *_primaryContainerView;
    UIView *_secondaryContainerView;
    NavJunctionViewController *_junctionViewController;
    NSMutableArray *_pendingSignQueue;
    NavSignQueueItem *_currentSignQueueItem;
    NavSignQueueItem *_pendingSignQueueItem;
    NSTimer *_junctionViewDisplayTimer;
}

@property(retain, nonatomic) NSTimer *junctionViewDisplayTimer; // @synthesize junctionViewDisplayTimer=_junctionViewDisplayTimer;
@property(nonatomic, getter=isDisplayingJunctionView) _Bool displayingJunctionView; // @synthesize displayingJunctionView=_displayingJunctionView;
@property(nonatomic) _Bool displaysSecondarySign; // @synthesize displaysSecondarySign=_displaysSecondarySign;
@property(retain, nonatomic) NavSignQueueItem *pendingSignQueueItem; // @synthesize pendingSignQueueItem=_pendingSignQueueItem;
@property(retain, nonatomic) NavSignQueueItem *currentSignQueueItem; // @synthesize currentSignQueueItem=_currentSignQueueItem;
@property(retain, nonatomic) NSMutableArray *pendingSignQueue; // @synthesize pendingSignQueue=_pendingSignQueue;
@property(retain, nonatomic) NavJunctionViewController *junctionViewController; // @synthesize junctionViewController=_junctionViewController;
@property(retain, nonatomic) UIView *secondaryContainerView; // @synthesize secondaryContainerView=_secondaryContainerView;
@property(retain, nonatomic) UIView *primaryContainerView; // @synthesize primaryContainerView=_primaryContainerView;
@property(nonatomic) double maxHeight; // @synthesize maxHeight=_maxHeight;
@property(nonatomic) unsigned long long signLayoutType; // @synthesize signLayoutType=_signLayoutType;
@property(nonatomic) __weak id <NavContainerLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void).cxx_destruct;
- (void)navSignView:(id)arg1 didSelectAlternate:(unsigned long long)arg2 forPrimaryString:(_Bool)arg3 inSign:(id)arg4;
- (_Bool)shouldDisplayJunctionViewDivider;
- (void)removeSignFromContainer:(id)arg1 secondarySignOnly:(_Bool)arg2;
- (void)removeSignFromContainer:(id)arg1;
- (void)addSignToContainer:(id)arg1;
- (void)_presentSecondarySign:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_presentSign:(id)arg1 behindSign:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dismissSign:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_scheduleSignDisplay;
- (void)_handleQueueItem:(id)arg1;
- (void)_setLayoutForSign:(id)arg1 withAnimation:(id)arg2;
- (_Bool)_shouldForceHideSecondarySign;
- (void)_makeSecondarySignToMirrorPrimaryManeuver:(id)arg1;
- (id)_latestQueueItemMatching:(CDUnknownBlockType)arg1;
- (id)_latestQueueItem;
- (void)_updateToShowJunctionViewInfo:(id)arg1;
- (void)_updateToHideJunctionView;
- (void)usePersistentDisplay:(_Bool)arg1;
- (void)showTemporarilyHiddenJunctionViewAnimated:(_Bool)arg1;
- (void)temporarilyHideJunctionViewForSeconds:(double)arg1 animated:(_Bool)arg2;
- (void)hideJunctionView;
- (void)updateJunctionView:(id)arg1;
- (void)showJunctionView:(id)arg1;
- (void)hideLaneGuidance;
- (void)showLaneGuidance:(id)arg1;
- (void)updateLaneGuidance:(id)arg1;
- (void)dismissSecondarySignWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissAllSigns;
- (void)enqueuePrimarySign:(id)arg1 secondarySign:(id)arg2;
- (void)setSignLayoutType:(unsigned long long)arg1 withAnimation:(id)arg2;
- (_Bool)updateSecondarySignWithManeuver:(id)arg1;
- (_Bool)isPointInJunctionView:(struct CGPoint)arg1;
- (_Bool)updateSignWithManeuverInfo:(id)arg1 laneGuidance:(id)arg2 hasArrived:(_Bool)arg3;
- (void)updateSignWithDistanceText:(id)arg1 checkUpcoming:(_Bool)arg2;
- (id)secondarySignMatchingManeuver:(int)arg1 instructions:(id)arg2 checkUpcoming:(_Bool)arg3;
- (id)primarySignMatchingManeuver:(int)arg1 instructions:(id)arg2 shieldInfo:(id)arg3 checkUpcoming:(_Bool)arg4;
- (id)secondarySignMatchingCriteria:(CDUnknownBlockType)arg1 checkUpcoming:(_Bool)arg2;
- (id)primarySignMatchingCriteria:(CDUnknownBlockType)arg1 checkUpcoming:(_Bool)arg2;
@property(readonly, nonatomic) NavSignView *upcomingSecondarySign;
@property(readonly, nonatomic) NavSignView *upcomingPrimarySign;
@property(readonly, nonatomic) NavSignView *displayedSecondarySign;
@property(readonly, nonatomic) NavSignView *displayedPrimarySign;
- (void)updateTheme;
- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)maxAvailableHeightForJunctionView:(double)arg1;
- (id)junctionView;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
