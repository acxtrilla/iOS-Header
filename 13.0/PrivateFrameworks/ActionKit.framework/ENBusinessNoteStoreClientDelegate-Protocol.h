//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class ENBusinessNoteStoreClient, NSString;

@protocol ENBusinessNoteStoreClientDelegate <NSObject>
- (NSString *)authenticationTokenForBusinessStoreClient:(ENBusinessNoteStoreClient *)arg1;
- (NSString *)noteStoreUrlForBusinessStoreClient:(ENBusinessNoteStoreClient *)arg1;
@end
