//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HFServiceNameComponents, NSString, UIColor, UIFont;

@interface HUGridServiceCellTextView : UIView
{
    _Bool _textColorFollowsTintColor;
    _Bool _shouldShowRoomName;
    double _lineHeight;
    HFServiceNameComponents *_serviceNameComponents;
    NSString *_descriptionText;
    UIColor *_textColor;
    double _descriptionTextColorDimmingFactor;
    UIFont *_font;
    unsigned long long _mode;
}

+ (double)minimumDescriptionScaleFactor;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool shouldShowRoomName; // @synthesize shouldShowRoomName=_shouldShowRoomName;
@property(nonatomic) double descriptionTextColorDimmingFactor; // @synthesize descriptionTextColorDimmingFactor=_descriptionTextColorDimmingFactor;
@property(nonatomic) _Bool textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) HFServiceNameComponents *serviceNameComponents; // @synthesize serviceNameComponents=_serviceNameComponents;
- (void).cxx_destruct;
- (id)_effectiveTextColor;
- (void)_drawDescriptionLabel;
- (void)_drawSeperateLabels;
- (void)_drawCombinedLabel;
- (id)_combinedAttributedString;
- (id)_commonTextAttributesWithLineBreakMode:(long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)_updateMode;
- (void)layoutSubviews;
@property(readonly, nonatomic) double lastBaselineToBottomDistance;
@property(readonly, nonatomic) double topToFirstBaselineDistance;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

