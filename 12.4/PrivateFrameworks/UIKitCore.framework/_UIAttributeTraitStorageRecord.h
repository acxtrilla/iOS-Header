//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class UITraitCollection;

__attribute__((visibility("hidden")))
@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding>
{
    UITraitCollection *_traitCollection;
    id _value;
}

@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTraitCollection:(id)arg1 value:(id)arg2;

@end
