//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/_EDWrappedMessage.h>

@class EDMessagePersistence;

@interface _EDLazyWrappedMessage : _EDWrappedMessage
{
    long long _databaseID;
    EDMessagePersistence *_messagePersistence;
}

@property(readonly, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
- (void).cxx_destruct;
- (long long)databaseID;
- (id)initWithMessage:(id)arg1 messagePersistence:(id)arg2;

@end
