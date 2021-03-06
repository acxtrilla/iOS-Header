//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIImage;

@interface TSASingleTouchButton : UIButton
{
    UIImage *_touchImage;
    _Bool _showsTouchOnTopWhenHighlighted;
}

@property(retain, nonatomic) UIImage *touchImage; // @synthesize touchImage=_touchImage;
@property(nonatomic) _Bool showsTouchOnTopWhenHighlighted; // @synthesize showsTouchOnTopWhenHighlighted=_showsTouchOnTopWhenHighlighted;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)_pressFeedbackImage;
- (struct CGPoint)_pressFeedbackPosition;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end

