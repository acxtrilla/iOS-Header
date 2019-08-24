//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class ENGroup, ENGroupContext, ENGroupID, NSData, _ENGroupInfo;
@protocol ENCypher;

@protocol ENGroupContextDataSource <NSObject>
- (void)validateCachedGroup:(ENGroup *)arg1 isParentOfGroup:(ENGroup *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)participantsForCypher:(id <ENCypher>)arg1 completion:(void (^)(NSArray *, _Bool))arg2;
- (void)groupFromPublicDataRepresentation:(NSData *)arg1 inContext:(ENGroupContext *)arg2 completion:(void (^)(ENGroup *, NSError *))arg3;
- (void)publicDataRepresentationForGroup:(ENGroup *)arg1 inContext:(ENGroupContext *)arg2 completion:(void (^)(NSData *, NSError *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 fetchGroupWithID:(ENGroupID *)arg2 completion:(void (^)(ENGroup *, NSError *))arg3;
- (void)groupContext:(ENGroupContext *)arg1 upsertGroupWithInfo:(_ENGroupInfo *)arg2 previousGroup:(ENGroup *)arg3 completion:(void (^)(ENGroup *, NSError *))arg4;
@end
