//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDAnimateBehavior.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PDAnimateEffectBehavior : PDAnimateBehavior
{
    _Bool mHasTransition;
    int mTransition;
    NSMutableDictionary *mPropertyMap;
}

@property(retain, nonatomic) NSMutableDictionary *propertyMap; // @synthesize propertyMap=mPropertyMap;
- (_Bool)hasProperties;
- (void)setTransition:(int)arg1;
- (int)transition;
- (_Bool)hasTransition;
- (void)dealloc;
- (id)init;

@end
