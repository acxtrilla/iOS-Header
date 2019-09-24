//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCopying-Protocol.h>

@class NSArray;

@interface GKRequestIdentifier : NSObject <NSCopying>
{
    unsigned long long _savedHash;
    SEL _selector;
    NSArray *_arguments;
}

+ (id)requestIdentifierForInvocation:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithInvocation:(id)arg1;
- (id)_argumentsForInvocation:(id)arg1;
- (void)dealloc;

@end
