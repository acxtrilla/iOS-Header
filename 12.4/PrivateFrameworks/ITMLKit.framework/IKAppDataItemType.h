//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface IKAppDataItemType : NSObject <NSCopying>
{
    NSString *_type;
    NSString *_selector;
}

+ (id)appDataItemTypeForPrototype:(id)arg1;
@property(readonly, copy, nonatomic) NSString *selector; // @synthesize selector=_selector;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(id)arg1 selector:(id)arg2;

@end
