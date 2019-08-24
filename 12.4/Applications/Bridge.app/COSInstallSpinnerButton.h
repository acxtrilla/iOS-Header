//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SKUICircleProgressIndicator, UIImageView, UIView;

@interface COSInstallSpinnerButton : UIButton
{
    UIImageView *_spinnerView;
    UIView *_squareView;
    _Bool _showingSpinner;
    SKUICircleProgressIndicator *_progressIndicator;
}

+ (id)applicationSpinnerView;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)stopSpinnerView;
- (void)stopProgressAnimation;
- (void)showProgressAnimation;
- (void)layoutSubviews;
- (void)prepareProgressIndicatorIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

@end
