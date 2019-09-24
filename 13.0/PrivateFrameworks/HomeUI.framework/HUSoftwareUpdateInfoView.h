//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUInlineWebContainerViewDelegate-Protocol.h>
#import <HomeUI/UIScrollViewDelegate-Protocol.h>

@class HFItem, HUInlineWebContainerView, HUSoftwareUpdateAnimatedIcon, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIStackView;
@protocol HUResizableCellDelegate, HUSoftwareUpdateInternalResizingDelegate;

@interface HUSoftwareUpdateInfoView : UIView <UIScrollViewDelegate, HUInlineWebContainerViewDelegate, HUCellProtocol>
{
    HFItem *_item;
    id <HUSoftwareUpdateInternalResizingDelegate> _internalViewResizingDelegate;
    HUSoftwareUpdateAnimatedIcon *_animatedGearView;
    UIImage *_gearBackgroundImage;
    UIImageView *_gearBackgroundImageView;
    UIStackView *_labelStackView;
    UILabel *_updateNameLabel;
    UILabel *_publisherNameLabel;
    UILabel *_sizeLabel;
    HUInlineWebContainerView *_releaseNotesSummaryView;
    NSLayoutConstraint *_releaseNotesSummaryHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *releaseNotesSummaryHeightConstraint; // @synthesize releaseNotesSummaryHeightConstraint=_releaseNotesSummaryHeightConstraint;
@property(retain, nonatomic) HUInlineWebContainerView *releaseNotesSummaryView; // @synthesize releaseNotesSummaryView=_releaseNotesSummaryView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *publisherNameLabel; // @synthesize publisherNameLabel=_publisherNameLabel;
@property(retain, nonatomic) UILabel *updateNameLabel; // @synthesize updateNameLabel=_updateNameLabel;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(retain, nonatomic) UIImageView *gearBackgroundImageView; // @synthesize gearBackgroundImageView=_gearBackgroundImageView;
@property(retain, nonatomic) UIImage *gearBackgroundImage; // @synthesize gearBackgroundImage=_gearBackgroundImage;
@property(retain, nonatomic) HUSoftwareUpdateAnimatedIcon *animatedGearView; // @synthesize animatedGearView=_animatedGearView;
@property(nonatomic) __weak id <HUSoftwareUpdateInternalResizingDelegate> internalViewResizingDelegate; // @synthesize internalViewResizingDelegate=_internalViewResizingDelegate;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)inlineWebContainerViewDidFinishLoadingContent:(id)arg1;
- (void)layoutSubviews;
- (void)_updateReleaseNotesHeightIfNeeded;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
