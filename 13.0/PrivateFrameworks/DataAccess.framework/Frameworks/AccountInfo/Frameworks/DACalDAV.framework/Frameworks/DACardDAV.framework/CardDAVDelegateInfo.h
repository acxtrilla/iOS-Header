//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface CardDAVDelegateInfo : NSObject
{
    NSString *_principalPath;
    NSNumber *_dsid;
    NSString *_altDSID;
    NSString *_appleID;
}

+ (id)hardCodedPrincipalPathForDSID:(id)arg1;
+ (id)appleIDForAccount:(id)arg1;
+ (id)altDSIDForAccount:(id)arg1;
+ (id)dsidForAccount:(id)arg1;
@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(retain, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property(retain, nonatomic) NSString *principalPath; // @synthesize principalPath=_principalPath;
- (void).cxx_destruct;
- (id)_hardCodedPrincipalPathForFamilyMember:(id)arg1;
- (void)setPropertiesOnAccount:(id)arg1;
- (id)initWithFamilyMember:(id)arg1;

@end
