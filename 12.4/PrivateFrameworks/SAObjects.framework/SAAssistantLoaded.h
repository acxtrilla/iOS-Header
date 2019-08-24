//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAAssistantLoaded : SABaseClientBoundCommand
{
}

+ (id)assistantLoadedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)assistantLoaded;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *version;
@property(copy, nonatomic) NSArray *syncAnchors;
@property(copy, nonatomic) NSNumber *requestSync;
@property(copy, nonatomic) NSString *dataAnchor;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
