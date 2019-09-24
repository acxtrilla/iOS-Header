//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHPerson.h>

#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSString;

@interface PHPerson (PGPersonResult) <PGPersonResult>
+ (unsigned long long)type;
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) NSDate *birthdayDate;
- (long long)compareToPerson:(id)arg1;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *contactIdentifier;
@property(readonly, nonatomic) NSString *keywordDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly) Class superclass;
@end
