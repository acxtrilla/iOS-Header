//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, NSString;

@interface IMDCoreSpotlightChatParticipant : NSObject
{
    _Bool _isSender;
    NSString *_handleID;
    CNContact *_contact;
}

@property(readonly, nonatomic) _Bool isSender; // @synthesize isSender=_isSender;
@property(readonly, retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(readonly, copy, nonatomic) NSString *handleID; // @synthesize handleID=_handleID;
- (void)dealloc;
- (id)initWithHandleID:(id)arg1 contact:(id)arg2 isSender:(_Bool)arg3;

@end
