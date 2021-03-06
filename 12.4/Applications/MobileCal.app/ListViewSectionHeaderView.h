//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSLayoutConstraint, UILabel, UIStackView, UIView;

@interface ListViewSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_separatorView;
    UIStackView *_labelStackView;
    UILabel *_primaryLabel;
    UILabel *_overlayLabel;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

+ (double)estimatedHeight;
+ (id)_overlayFont;
+ (id)_primaryFont;
+ (double)_bottomPadding;
+ (double)_topPadding;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(readonly, nonatomic) UILabel *overlayLabel; // @synthesize overlayLabel=_overlayLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)_updateLayoutForContentSizeCategory;
- (id)initWithReuseIdentifier:(id)arg1;

@end

