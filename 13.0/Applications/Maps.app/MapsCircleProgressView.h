//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface MapsCircleProgressView : UIView
{
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_progressLayer;
    UIImageView *_imageView;
    CAShapeLayer *_indeterminateLayer;
    _Bool _indeterminate;
    double _progress;
}

@property(nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_indeterminate;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_startIndeterminateAnimation;
@property(retain, nonatomic) UIImage *image;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
