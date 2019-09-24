//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSTableCell.h>

@class NSLayoutConstraint, PSWebContainerView, SUSSoftwareUpdateAnimatedIcon, UIImage, UIImageView, UILabel, UIProgressView;

@interface SUSSoftwareUpdateTitleCell : PSTableCell
{
    int _progressStyle;
    SUSSoftwareUpdateAnimatedIcon *_animatedGearView;
    _Bool _animatingGearView;
    UIImageView *_gearBackgroundImageView;
    UIProgressView *_progressBar;
    UILabel *_updateStatusLabel;
    PSWebContainerView *_releaseNotesSummaryView;
    NSLayoutConstraint *_updateStatusLabelVerticalConstraint;
}

+ (long long)cellStyle;
@property(retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint; // @synthesize updateStatusLabelVerticalConstraint=_updateStatusLabelVerticalConstraint;
@property(readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView; // @synthesize releaseNotesSummaryView=_releaseNotesSummaryView;
@property(readonly, nonatomic) UILabel *updateStatusLabel; // @synthesize updateStatusLabel=_updateStatusLabel;
@property(readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIImageView *gearBackgroundImageView; // @synthesize gearBackgroundImageView=_gearBackgroundImageView;
- (void).cxx_destruct;
- (id)newUpdateStatusLabel;
- (id)newProgressBar;
- (id)newGearBackgroundImageView;
@property(readonly, nonatomic) UIImage *gearBackgroundImage;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setAnimatingGearView:(_Bool)arg1;
- (void)setStatusMessage:(id)arg1;
- (void)setPublisherText:(id)arg1;
- (void)setUpdateName:(id)arg1;
- (void)setReleaseNotesSummary:(id)arg1;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect)arg1;
- (void)setProgress:(float)arg1;
@property(nonatomic) int progressDisplayStyle;
- (void)updateProgressTintColor;
- (void)configureProgressBar:(_Bool)arg1;
- (void)configureReleaseNotesSummaryView:(_Bool)arg1;
- (void)configureUpdateStatusLabel:(_Bool)arg1;
- (void)configurePublisherLabel:(_Bool)arg1;
- (void)configureUpdateNameLabel:(_Bool)arg1;
- (void)createGearIconConstraints;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize)arg1;
- (void)configureImageView;
- (void)setupViews;
- (void)layoutSubviews;
- (double)preferredHeightWithTable:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end
