//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString, NSURL;

@interface SAMicroblogTwitterPostAuthor : SADomainObject
{
}

+ (id)twitterPostAuthorWithDictionary:(id)arg1 context:(id)arg2;
+ (id)twitterPostAuthor;
@property(nonatomic) _Bool verified;
@property(copy, nonatomic) NSNumber *userId;
@property(copy, nonatomic) NSString *screenName;
@property(copy, nonatomic) NSURL *profileImageUrl;
@property(copy, nonatomic) NSString *fullName;
@property(nonatomic) long long followersCount;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
