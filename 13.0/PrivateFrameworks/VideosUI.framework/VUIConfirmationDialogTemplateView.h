//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface VUIConfirmationDialogTemplateView : UIView
{
    UIVisualEffectView *_backdropView;
    UIView *_cardView;
}

@property(readonly, nonatomic) UIVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
- (void).cxx_destruct;
- (void)_configureSubviews;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

