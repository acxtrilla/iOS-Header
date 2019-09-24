//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Email/EMMailboxScope.h>

#import <Email/EFCacheable-Protocol.h>

@class NSString;

@interface _EMSpecialMailboxScope : EMMailboxScope <EFCacheable>
{
    NSString *_identifier;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)scopeContainsMailboxObjectID:(id)arg1 mailboxTypeResolver:(id)arg2;
- (_Bool)scopeContainsMailbox:(id)arg1;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)arg1 forExclusion:(_Bool *)arg2;
- (id)mailboxScopeByRemovingMailboxes:(id)arg1;
- (id)mailboxScopeByAddingMailboxes:(id)arg1;
- (_Bool)excludeMailboxes;
- (id)mailboxObjectIDs;
- (_Bool)excludeTypes;
- (id)mailboxTypes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ef_publicDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)cachedSelf;

// Remaining properties
@property(readonly) Class superclass;

@end
