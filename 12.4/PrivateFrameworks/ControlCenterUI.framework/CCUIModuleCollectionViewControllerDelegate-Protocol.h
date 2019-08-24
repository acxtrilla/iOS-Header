//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIContentModuleContainerViewController, CCUIModuleCollectionViewController, UIView;
@protocol CCUIContentModule;

@protocol CCUIModuleCollectionViewControllerDelegate <NSObject>
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didUpdateHomeGestureDismissalAllowed:(_Bool)arg2;
- (UIView *)obscuringBackgroundViewForModuleCollectionViewController:(CCUIModuleCollectionViewController *)arg1;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willRemoveModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didAddModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didFinishInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (long long)interfaceOrientationForModuleCollectionViewController:(CCUIModuleCollectionViewController *)arg1;
@end
