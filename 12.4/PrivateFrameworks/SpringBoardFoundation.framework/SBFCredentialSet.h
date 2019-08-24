//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/NSSecureCoding-Protocol.h>

@class NSData;

@interface SBFCredentialSet : NSObject <NSSecureCoding>
{
    _Bool _ownsContext;
    NSData *_cachedCredentials;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)serializedCredentialSet;
- (void)dealloc;
- (id)initWithSerializedCredentialSet:(id)arg1;
- (id)init;

@end
