//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSString;

@interface ISClient : NSObject
{
    NSString *_appleClientVersions;
    NSString *_appleClientApplication;
    NSString *_identifier;
    NSString *_partnerHeader;
    NSString *_userAgent;
    NSDictionary *_clientProvidedHeaders;
    NSLock *_lock;
}

+ (id)currentClient;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;
- (id)_appleClientVersions;
- (void)_softwareMapInvalidatedNotification:(id)arg1;
- (id)localStoreFrontID;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(copy) NSString *partnerHeader; // @synthesize partnerHeader=_partnerHeader;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSDictionary *clientProvidedHeaders; // @synthesize clientProvidedHeaders=_clientProvidedHeaders;
@property(copy) NSString *appleClientApplication; // @synthesize appleClientApplication=_appleClientApplication;
@property(readonly) NSString *appleClientVersions; // @synthesize appleClientVersions=_appleClientVersions;
- (void)dealloc;
- (id)init;

@end
