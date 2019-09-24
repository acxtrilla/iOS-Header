//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedSubscriptionManager, NSSet;
@protocol FCTagProviding;

@protocol FRFeedSubscriptionManagerDelegate <NSObject>
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 showHudForTag:(id <FCTagProviding>)arg2 style:(long long)arg3 dismissalBlock:(void (^)(_Bool))arg4;
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 showNotificationPromptForTag:(id <FCTagProviding>)arg2 completion:(void (^)(void))arg3;
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 updateLikeButtonsForTags:(NSSet *)arg2 isDislikeButton:(_Bool)arg3 withState:(_Bool)arg4 animationStyle:(long long)arg5 animationCompletionBlock:(void (^)(_Bool))arg6;

@optional
- (void)feedSubscriptionManager:(FRFeedSubscriptionManager *)arg1 deleteSectionForTags:(NSSet *)arg2;
@end
