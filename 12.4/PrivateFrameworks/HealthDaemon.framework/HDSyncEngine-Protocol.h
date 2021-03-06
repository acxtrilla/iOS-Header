//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSyncSession, NSArray, NSDictionary;
@protocol HDSyncAnchorMap, HDSyncChange, HDSyncStore;

@protocol HDSyncEngine <NSObject>
@property(copy, nonatomic) CDUnknownBlockType unitTest_didCompleteReadTransaction;
@property(readonly, copy, nonatomic) NSDictionary *allSyncEntitiesByIdentifier;
@property(readonly, copy, nonatomic) NSArray *allOrderedSyncEntities;
- (void)resetStore:(id <HDSyncStore>)arg1;
- (_Bool)applyAcknowledgedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 resetNext:(_Bool)arg3 resetInvalid:(_Bool)arg4 error:(id *)arg5;
- (_Bool)getReceivedAnchorMap:(id <HDSyncAnchorMap>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id *)arg3;
- (_Bool)applySyncChange:(id <HDSyncChange>)arg1 forStore:(id <HDSyncStore>)arg2 error:(id *)arg3;
- (void)resetAnchorsWithFailedChanges:(NSArray *)arg1 store:(id <HDSyncStore>)arg2;
- (_Bool)performSyncSession:(HDSyncSession *)arg1 error:(id *)arg2;
@end

