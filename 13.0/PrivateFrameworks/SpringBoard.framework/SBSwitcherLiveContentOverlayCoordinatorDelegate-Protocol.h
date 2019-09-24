//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAppLayout, UIViewController;
@protocol SBSwitcherLiveContentOverlay;

@protocol SBSwitcherLiveContentOverlayCoordinatorDelegate <NSObject>
- (UIViewController *)parentViewControllerForContentOverlay;
- (void)removeLiveContentOverlayForAppLayout:(SBAppLayout *)arg1 animated:(_Bool)arg2;
- (void)addLiveContentOverlay:(id <SBSwitcherLiveContentOverlay>)arg1 forAppLayout:(SBAppLayout *)arg2 animated:(_Bool)arg3;
@end
