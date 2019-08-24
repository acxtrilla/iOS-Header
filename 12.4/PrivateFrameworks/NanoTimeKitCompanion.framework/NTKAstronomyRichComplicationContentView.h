//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKAstronomyVistaViewObserver-Protocol.h>

@class NSDate, NTKAstronomyVistaView, NTKDelayedBlock;

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver>
{
    NTKAstronomyVistaView *_astronomyVistaView;
    NSDate *_date;
    unsigned int _isPaused:1;
    unsigned int _isAnimating:1;
    unsigned int _isRenderOneFrame:1;
    NTKDelayedBlock *_stopAnimationDelayedBlock;
}

- (void).cxx_destruct;
- (void)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1;
- (void)handleWristRaiseScreenWake;
- (void)handleOrdinaryScreenWake;
- (void)prepareWristRaiseAnimation;
- (_Bool)_shouldAnimateWithTemplateUpdateReason:(long long)arg1;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (void)astronomyVistaViewContentsAnimationFinished:(id)arg1;
- (void)handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)applyPausedUpdate:(_Bool)arg1;
- (id)initForDevice:(id)arg1 diameter:(double)arg2;

@end
