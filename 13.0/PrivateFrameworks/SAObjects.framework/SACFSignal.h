//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSArray, NSString, SACFAbstractClientCommand;

@interface SACFSignal : SADomainCommand
{
}

+ (id)signalWithDictionary:(id)arg1 context:(id)arg2;
+ (id)signal;
- (_Bool)mutatingCommand;
- (_Bool)requiresResponse;
@property(retain, nonatomic) SACFAbstractClientCommand *signalPayload;
@property(copy, nonatomic) NSArray *scriptIdentifiers;
@property(copy, nonatomic) NSString *flowScriptHint;
@property(copy, nonatomic) NSString *domain;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
