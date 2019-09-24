//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationStorage-Protocol.h>

@class CALNInMemoryNotificationStorage, NSString;
@protocol OS_dispatch_queue;

@interface CALNPersistentNotificationStorage : NSObject <CALNNotificationStorage>
{
    NSString *_path;
    CALNInMemoryNotificationStorage *_inMemoryStorage;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)notificationRecordsFromPersistentNotificationStorageWithPath:(id)arg1 error:(id *)arg2;
+ (id)persistentNotificationStorageWithPath:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) CALNInMemoryNotificationStorage *inMemoryStorage; // @synthesize inMemoryStorage=_inMemoryStorage;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (_Bool)_saveNotificationsWithError:(id *)arg1;
- (_Bool)_loadNotificationsWithError:(id *)arg1;
- (void)removeNotificationRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)notificationRecords;
- (void)addNotificationRecord:(id)arg1;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
