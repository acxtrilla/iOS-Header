//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoardUIServices/SBUIPowerDownViewInterface-Protocol.h>
#import <SpringBoardUIServices/_UIActionSliderDelegate-Protocol.h>

@class NSString, NSTimer, SBUIShapeView, UIButton, UILabel, _UIActionSlider;
@protocol SBUIPowerDownViewDelegate;

@interface SBUIPowerDownView : UIView <_UIActionSliderDelegate, SBUIPowerDownViewInterface>
{
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBUIShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    id <SBUIPowerDownViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SBUIPowerDownViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_updateSliderExclusionPath;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (_Bool)_isLandscapeAspectRatio;
- (void)_powerDownSliderDidCancelSlide;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_powerDownSliderDidBeginSlide;
- (void)_willAnimateOut;
- (void)_willAnimateIn;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)layoutSubviews;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
