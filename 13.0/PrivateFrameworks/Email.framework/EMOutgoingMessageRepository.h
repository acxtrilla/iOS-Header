//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSString;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

+ (id)remoteInterface;
+ (id)signpostLog;
+ (id)log;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (unsigned long long)numberOfPendingMessages;
- (_Bool)isProcessing;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (void)suspendDeliveryQueue;
- (_Bool)outboxContainsMessageFromAccount:(id)arg1;
- (id)deliverMessage:(id)arg1 usingMailDrop:(_Bool)arg2;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)initWithRemoteConnection:(id)arg1;
- (unsigned long long)signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
