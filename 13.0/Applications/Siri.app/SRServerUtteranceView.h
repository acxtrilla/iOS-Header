//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIContentLabel, UIFont;

@interface SRServerUtteranceView : UIView
{
    struct NSDirectionalEdgeInsets _edgeInsets;
    SiriUIContentLabel *_label;
    _Bool _chevronHasBeenShown;
    _Bool _blendEffectEnabled;
}

+ (double)insertionAnimatedZPosition;
- (void).cxx_destruct;
- (double)_scaledSiriCorrectionViewLeading;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic, getter=isBlendEffectEnabled) _Bool blendEffectEnabled;
@property(retain, nonatomic) UIFont *font;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (double)baselineOffsetFromBottom;
- (double)firstLineBaselineOffsetFromTop;
- (_Bool)chevronHasBeenShown;
- (void)setChevronHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
