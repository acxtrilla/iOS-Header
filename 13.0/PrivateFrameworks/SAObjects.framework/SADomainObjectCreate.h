//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

#import <SAObjects/SADomainObjectCommand-Protocol.h>

@class NSString, SADomainObject;

@interface SADomainObjectCreate : SADomainCommand <SADomainObjectCommand>
{
}

+ (id)domainObjectCreateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCreate;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SADomainObject *object;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
