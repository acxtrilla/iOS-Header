//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAML/XMLWrapperDoc.h>

@class NSDictionary, NSString, SAMLResponseElement;

@interface SAMLResponse : XMLWrapperDoc
{
    SAMLResponseElement *_responseElement;
}

@property(retain, nonatomic) SAMLResponseElement *responseElement; // @synthesize responseElement=_responseElement;
- (void).cxx_destruct;
- (id)authorizationStatusForResource:(id)arg1;
- (long long)expectedAction;
- (id)primaryStatusCode;
- (id)statusCodes;
- (_Bool)isValid:(id *)arg1;
- (_Bool)assertionMeetsConditions:(id *)arg1;
- (id)authenticationSessionId;
- (id)authenticationTTL;
- (_Bool)hasValidAuthentication;
- (id)userName;
- (id)subject;
@property(readonly, nonatomic) NSString *selectedProvider;
- (id)attributeValuesForName:(id)arg1;
@property(readonly, nonatomic) NSDictionary *attributes;
- (id)assertions;
- (id)initWithData:(id)arg1 schema:(id)arg2 error:(id *)arg3;

@end
