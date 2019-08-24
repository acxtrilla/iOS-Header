//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@protocol AVTTransitionModel;

@protocol AVTTransition <NSObject>
@property(copy, nonatomic) CDUnknownBlockType completionHandler;
@property(copy, nonatomic) CDUnknownBlockType setupHandler;
@property(readonly, nonatomic) id <AVTTransitionModel> model;
@property(nonatomic) _Bool animated;
@property(nonatomic) long long state;
- (void)cancel;
- (void)start;
@end
