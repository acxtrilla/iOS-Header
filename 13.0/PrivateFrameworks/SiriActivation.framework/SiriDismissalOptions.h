//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriActivation/NSCopying-Protocol.h>
#import <SiriActivation/NSSecureCoding-Protocol.h>

@interface SiriDismissalOptions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _animated;
    unsigned long long _deactivationOptions;
    long long _reason;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(readonly, nonatomic) unsigned long long deactivationOptions; // @synthesize deactivationOptions=_deactivationOptions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(_Bool)arg2 requestCancellationReason:(long long)arg3;
- (id)initWithDeactivationOptions:(unsigned long long)arg1 animated:(_Bool)arg2;
- (id)initWithDeactivationOptions:(unsigned long long)arg1;

@end
