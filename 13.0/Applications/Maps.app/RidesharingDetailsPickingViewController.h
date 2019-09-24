//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ExtensionsStackViewController.h"

#import "BannerContaineeProtocol-Protocol.h"
#import "HeaderViewDelegate-Protocol.h"
#import "RideBookingRequestRideOptionProxyDelegate-Protocol.h"

@class CardView, ContainerHeaderView, ExtensionsActionsFooterView, ExtensionsPayView, ExtensionsPrimaryDetailsView, ExtensionsSecondaryDetailsView, NSArray, NSLayoutConstraint, NSString, ProminentActionButton, RideBookingRequestRideOptionProxy, RideBookingRequestRideStatus, RidesharingCoordinator, RouteFromToView, TopBannerItem, UIViewController;
@protocol BannerContainerProtocol, ContaineeLayoutTransitioningContext, ContaineeProtocol, ContainerProtocol;

__attribute__((visibility("hidden")))
@interface RidesharingDetailsPickingViewController : ExtensionsStackViewController <HeaderViewDelegate, RideBookingRequestRideOptionProxyDelegate, BannerContaineeProtocol>
{
    ContainerHeaderView *_containerHeaderView;
    RouteFromToView *_routeFromToView;
    ExtensionsPrimaryDetailsView *_primaryDetailsView;
    ExtensionsPayView *_payView;
    ExtensionsSecondaryDetailsView *_secondaryDetailsView;
    ExtensionsActionsFooterView *_openAppView;
    ProminentActionButton *_requestButton;
    TopBannerItem *_moveMapPromptItem;
    _Bool _finishedPickingDetails;
    NSArray *_topBannerItems;
    id <BannerContainerProtocol> _bannerContainer;
    RidesharingCoordinator *_coordinator;
    RideBookingRequestRideStatus *_requestRideStatus;
    RideBookingRequestRideOptionProxy *_requestRideOptionProxy;
}

@property(retain, nonatomic) RideBookingRequestRideOptionProxy *requestRideOptionProxy; // @synthesize requestRideOptionProxy=_requestRideOptionProxy;
@property(retain, nonatomic) RideBookingRequestRideStatus *requestRideStatus; // @synthesize requestRideStatus=_requestRideStatus;
@property(nonatomic) __weak RidesharingCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak id <BannerContainerProtocol> bannerContainer; // @synthesize bannerContainer=_bannerContainer;
- (void).cxx_destruct;
- (void)_openApp;
- (void)_requestRide;
- (void)setRequestingRide:(_Bool)arg1;
- (void)_request;
- (void)_selectPaymentType;
- (void)headerViewButtonTapped:(id)arg1;
- (void)_showExpirationAlert;
- (void)requestRideStatusDidChange:(id)arg1;
- (void)_updateFromRequestRideStatus:(id)arg1;
- (_Bool)_isPresented;
- (double)headerHeight;
- (double)heightForLayout:(unsigned long long)arg1;
- (id)stackedViews;
- (_Bool)updateConstraintsForLayout:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool allowsQuickActionMenuInMap;
@property(readonly, nonatomic) _Bool allowsLongPressToMarkLocation;
@property(readonly, nonatomic) NSArray *topBannerItems; // @synthesize topBannerItems=_topBannerItems;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSLayoutConstraint *bottomToBottomContentConstraint;
@property(readonly, nonatomic) CardView *cardView;
@property(nonatomic) __weak UIViewController<ContainerProtocol> *containerViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSLayoutConstraint *heightConstraint;
@property(retain, nonatomic) UIViewController<ContaineeProtocol> *modalPresenter;
@property(nonatomic) _Bool presentedModally;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportDrag;
@property(readonly, nonatomic) _Bool supportOverridenLayout;
@property(nonatomic) _Bool takesAllAvailableHeight;
@property(nonatomic) _Bool takesAvailableHeight;
@property(retain, nonatomic) NSLayoutConstraint *topToTopContentConstraint;
@property(readonly, nonatomic) id <ContaineeLayoutTransitioningContext> transitionController;
@property(readonly, nonatomic) _Bool useDefaultLayout;

@end
