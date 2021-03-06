//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBIconView.h"

@interface SBStarkIconView : SBIconView
{
    _Bool _alwaysAppearsFocused;
}

+ (_Bool)supportsDragInteraction;
+ (double)_labelHeight;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)arg1;
+ (struct CGSize)defaultIconSize;
+ (struct UIEdgeInsets)minimumInterIconSpacing;
+ (struct UIEdgeInsets)iconImagePaddingInsets;
+ (_Bool)canShowLabelAccessoryView;
+ (int)_defaultIconFormat;
+ (Class)_interactionlessIconViewClass;
@property(nonatomic) _Bool alwaysAppearsFocused; // @synthesize alwaysAppearsFocused=_alwaysAppearsFocused;
- (struct CGRect)_frameForLabel;
- (void)prepareForReuse;
- (id)_labelImageParameters;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;

@end

