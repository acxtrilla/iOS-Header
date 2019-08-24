//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@interface CNContainerPermissions : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _canCreateContacts;
    _Bool _canDeleteContacts;
    _Bool _canCreateGroups;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool canCreateGroups; // @synthesize canCreateGroups=_canCreateGroups;
@property(readonly, nonatomic) _Bool canDeleteContacts; // @synthesize canDeleteContacts=_canDeleteContacts;
@property(readonly, nonatomic) _Bool canCreateContacts; // @synthesize canCreateContacts=_canCreateContacts;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCanCreateContacts:(_Bool)arg1 canDeleteContacts:(_Bool)arg2 canCreateGroups:(_Bool)arg3;
- (id)init;

@end
