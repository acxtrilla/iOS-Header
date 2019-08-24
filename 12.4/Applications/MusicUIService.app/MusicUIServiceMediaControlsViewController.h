//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "MPMediaControlsRemoteViewControllerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MTMaterialView, MediaControlsEndpointsViewController, NSString, NSXPCConnection, UITapGestureRecognizer;

@interface MusicUIServiceMediaControlsViewController : SBUIRemoteAlertServiceViewController <MPMediaControlsRemoteViewControllerProtocol, UIGestureRecognizerDelegate>
{
    MTMaterialView *_materialView;
    MediaControlsEndpointsViewController *_endpointViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSXPCConnection *_connection;
}

+ (_Bool)_isSecureForRemoteViewService;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) MediaControlsEndpointsViewController *endpointViewController; // @synthesize endpointViewController=_endpointViewController;
@property(retain, nonatomic) MTMaterialView *materialView; // @synthesize materialView=_materialView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)updateMediaControlsWithConfiguration:(id)arg1;
- (void)handleButtonActions:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldRemoveViewFromHierarchyOnDisappear;
- (id)connectionWithEndpoint:(id)arg1;
- (void)_createAnimationForPresenting:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismiss;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
