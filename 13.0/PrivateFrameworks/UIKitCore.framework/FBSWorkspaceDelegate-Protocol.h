//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class FBSScene, FBSSceneTransitionContext, FBSWorkspace, NSSet;

@protocol FBSWorkspaceDelegate <NSObject>

@optional
- (void)workspace:(FBSWorkspace *)arg1 didReceiveActions:(NSSet *)arg2;
- (void)workspace:(FBSWorkspace *)arg1 willDestroyScene:(FBSScene *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceDestroySceneResponse *))arg4;
- (void)workspace:(FBSWorkspace *)arg1 didCreateScene:(FBSScene *)arg2 withTransitionContext:(FBSSceneTransitionContext *)arg3 completion:(void (^)(FBSWorkspaceCreateSceneResponse *))arg4;
@end

