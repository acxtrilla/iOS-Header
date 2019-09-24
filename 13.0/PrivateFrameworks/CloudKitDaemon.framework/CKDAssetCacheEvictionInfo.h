//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDClientContext, NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface CKDAssetCacheEvictionInfo : NSObject
{
    _Bool _forced;
    _Bool _evictNow;
    _Bool _clearRegisteredItems;
    CKDClientContext *_clientContext;
    NSMutableOrderedSet *_itemIDsToUnregister;
    NSMutableOrderedSet *_assetHandleItemIDsToDelete;
}

@property(retain, nonatomic) NSMutableOrderedSet *assetHandleItemIDsToDelete; // @synthesize assetHandleItemIDsToDelete=_assetHandleItemIDsToDelete;
@property(retain, nonatomic) NSMutableOrderedSet *itemIDsToUnregister; // @synthesize itemIDsToUnregister=_itemIDsToUnregister;
@property(retain, nonatomic) CKDClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property _Bool clearRegisteredItems; // @synthesize clearRegisteredItems=_clearRegisteredItems;
@property _Bool evictNow; // @synthesize evictNow=_evictNow;
@property _Bool forced; // @synthesize forced=_forced;
- (void).cxx_destruct;
- (id)initWithClientContext:(id)arg1 forced:(_Bool)arg2 evictNow:(_Bool)arg3;

@end
