//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMSetupAccessoryDescription, NSError, NSUUID;

@protocol HMSetupRemoteService
- (void)setupInterruptedWithError:(NSError *)arg1;
- (void)setupFailedWithError:(NSError *)arg1;
- (void)setHomeUUID:(NSUUID *)arg1 accessoryDescription:(HMSetupAccessoryDescription *)arg2;
@end

