//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MCMUserIdentity;

@protocol MCMUserIdentityCache <NSObject>
- (MCMUserIdentity *)userIdentityForPersonalPersonaWithUID:(unsigned int)arg1 GID:(unsigned int)arg2;
- (MCMUserIdentity *)userIdentityForPersonaUniqueString:(struct NSString *)arg1 UID:(unsigned int)arg2 GID:(unsigned int)arg3;
@end

