//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSOptinViewController.h"

@class NPSDomainAccessor, UIImageView;

@interface COSLegacySOSController : COSOptinViewController
{
    NPSDomainAccessor *_gizmoGlobalDomain;
    UIImageView *_arrowImageView;
}

+ (_Bool)controllerNeedsToRun;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) NPSDomainAccessor *gizmoGlobalDomain; // @synthesize gizmoGlobalDomain=_gizmoGlobalDomain;
- (void).cxx_destruct;
- (double)alternateButtonDetailTextPaddingWithImage;
- (void)alternateButtonPressed:(id)arg1;
- (id)alternateButtonTitle;
- (void)suggestedButtonPressed:(id)arg1;
- (_Bool)legacyButtonStyles;
- (id)alternateButtonString;
- (id)detailTitleString;
- (id)suggestedButtonTitle;
- (id)detailString;
- (id)watchLanguages;
- (_Bool)watchTextLayoutIsRightToLeft;
- (id)imageResource;
- (id)titleString;
- (_Bool)wantsLightenBlendedScreen;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end
