//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSettingSyncing-Protocol.h>

@class NSDate, NSString;

@protocol BLTSettingSyncingClient <BLTSettingSyncing>
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(NSDate *)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(NSString *)arg2 mirror:(_Bool)arg3 fromRemote:(_Bool)arg4;
@end
