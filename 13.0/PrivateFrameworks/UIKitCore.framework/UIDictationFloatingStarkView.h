//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDictationView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIDimmingView;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingStarkView : UIDictationView <UIGestureRecognizerDelegate>
{
    UIDimmingView *_dimmingView;
}

- (void)endpointButtonPressed;
- (void)show;
- (struct CGPoint)positionForShow;
- (void)returnToKeyboard;
- (void)dimmingViewWasTapped:(id)arg1;
- (void)setInputViewsHiddenForDictation:(_Bool)arg1;
- (void)setState:(int)arg1;
- (void)prepareForReturnToKeyboard;
- (void)finishReturnToKeyboard;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
