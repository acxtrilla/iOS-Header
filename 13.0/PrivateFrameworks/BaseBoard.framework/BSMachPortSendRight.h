//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSMachPortRight.h>

#import <BaseBoard/NSCopying-Protocol.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
{
}

+ (void)_unsafe_destroyPort:(unsigned int)arg1;
+ (_Bool)_unsafe_isUsablePort:(unsigned int)arg1;
+ (unsigned int)_unsafe_decodePort:(id)arg1;
+ (struct _xpc_type_s *)_decodeType;
+ (id)_rightDescription;
+ (id)bootstrapLookUpWithName:(id)arg1;
+ (id)wrapSendRight:(unsigned int)arg1;
+ (id)bootstrapLookUpPortWithName:(id)arg1;
+ (id)taskNamePortForPID:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_lock_encodePort:(unsigned int)arg1;
- (id)initWithNonRetainingPort:(unsigned int)arg1;
- (id)initFromReceiveRight:(id)arg1;
- (id)initWithCopyOfRight:(id)arg1;
- (id)initWithCopyOfPort:(unsigned int)arg1;
- (id)initWithPort:(unsigned int)arg1;
- (unsigned int)sendRight;
- (id)initWithSendRight:(unsigned int)arg1;
- (id)initWithSendRight:(unsigned int)arg1 assumeOwnership:(_Bool)arg2;

@end
