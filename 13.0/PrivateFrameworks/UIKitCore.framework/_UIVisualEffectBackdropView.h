//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectSubview.h>

@class CABackdropLayer, _UIVisualEffectViewBackdropCaptureGroup;

@interface _UIVisualEffectBackdropView : _UIVisualEffectSubview
{
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)applyIdentityFilterEffects;
- (void)applyRequestedFilterEffects;
- (void)_applyScaleHintAsRequested:(_Bool)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)removeFromCurrentCaptureGroup;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup;
@property(nonatomic) long long renderMode;
@property(readonly, nonatomic) CABackdropLayer *backdropLayer;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;

@end
