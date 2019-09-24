//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPDaemonOperationManager : NSObject
{
    _Bool _started;
    NSMutableSet *_localOperationIDs;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifToken;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_enumerateNewDaemonOperationsWithHandler:(CDUnknownBlockType)arg1;
- (void)_updateDaemonOperations;
- (void)_receiveLongLivedOperation:(id)arg1 info:(id)arg2;
- (id)generateLocalOperationID;
- (void)wakeUp;
- (void)dealloc;
- (id)init;

@end
