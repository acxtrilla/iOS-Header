//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AXMOutputComponent : NSObject
{
    long long _componentState;
}

+ (_Bool)isSupported;
@property(nonatomic) long long componentState; // @synthesize componentState=_componentState;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (void)transitionToState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)description;
- (id)init;

@end
