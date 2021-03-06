//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PHAssetCreationRequestPlaceholderSupportNotificationManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_assetAvailabilityHandlers;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)unregisterAssetAvailabilityHandlerForAssetUUID:(id)arg1;
- (void)registerAssetAvailabilityHandler:(CDUnknownBlockType)arg1 forAssetUUID:(id)arg2;
- (void)callCompletionHandlerForAssetUUID:(id)arg1 success:(_Bool)arg2 error:(id)arg3;
- (void)assetAvailableNotification:(id)arg1;
- (void)_onQueueSync:(CDUnknownBlockType)arg1;
- (id)init;

@end

