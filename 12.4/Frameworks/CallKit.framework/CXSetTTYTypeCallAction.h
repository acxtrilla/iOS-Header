//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@interface CXSetTTYTypeCallAction : CXCallAction
{
    long long _ttyType;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long ttyType; // @synthesize ttyType=_ttyType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;
- (id)initWithCallUUID:(id)arg1 ttyType:(long long)arg2;

@end
