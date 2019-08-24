//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, TLAttentionAwarenessEffectCoordinator, TLAttentionAwarenessEffectProcessor;

@interface TLAttentionAwarenessEffectAudioTapContext : NSObject
{
    TLAttentionAwarenessEffectCoordinator *_effectCoordinator;
    TLAttentionAwarenessEffectProcessor *_effectProcessor;
    NSUUID *_identifier;
}

@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) TLAttentionAwarenessEffectProcessor *effectProcessor; // @synthesize effectProcessor=_effectProcessor;
@property(nonatomic) __weak TLAttentionAwarenessEffectCoordinator *effectCoordinator; // @synthesize effectCoordinator=_effectCoordinator;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;

@end
