//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FCNotificationsConfiguration : NSObject
{
    NSArray *_preSubscribedNotificationsChannelIDs;
    NSArray *_recommendedNotificationChannelIDs;
}

@property(readonly, copy, nonatomic) NSArray *recommendedNotificationChannelIDs; // @synthesize recommendedNotificationChannelIDs=_recommendedNotificationChannelIDs;
@property(readonly, copy, nonatomic) NSArray *preSubscribedNotificationsChannelIDs; // @synthesize preSubscribedNotificationsChannelIDs=_preSubscribedNotificationsChannelIDs;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2;

@end
