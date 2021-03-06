//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensionsDaemon/DEDSecureArchiving-Protocol.h>
#import <DiagnosticExtensionsDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface DEDNotifierConfiguration : NSObject <DEDSecureArchiving, NSSecureCoding>
{
    _Bool _userNotificationShouldPlaySound;
    _Bool _followupUseSpringboardNotification;
    NSString *_hostAppIdentifier;
    NSString *_localizedNotificationTitle;
    NSString *_localizedNotificationBody;
    NSString *_reviewActionLabel;
    NSString *_sendActionLabel;
    NSString *_followupUniqueIdentifier;
    double _followupFrequency;
    NSURL *_followupReviewActionURL;
    NSURL *_followupSendActionURL;
    NSDictionary *_followupReviewActionUserInfo;
    NSDictionary *_followupSendActionUserInfo;
    NSString *_followupLocalizedTitle;
    NSString *_followupLocalizedInformativeText;
    NSString *_followupExtensionIdentifier;
    NSURL *_followupNotificationActionURL;
    NSString *_followupNotificationActionTitle;
}

+ (_Bool)supportsSecureCoding;
+ (id)archivedClasses;
@property(retain) NSString *followupNotificationActionTitle; // @synthesize followupNotificationActionTitle=_followupNotificationActionTitle;
@property(retain) NSURL *followupNotificationActionURL; // @synthesize followupNotificationActionURL=_followupNotificationActionURL;
@property _Bool followupUseSpringboardNotification; // @synthesize followupUseSpringboardNotification=_followupUseSpringboardNotification;
@property(retain) NSString *followupExtensionIdentifier; // @synthesize followupExtensionIdentifier=_followupExtensionIdentifier;
@property(retain) NSString *followupLocalizedInformativeText; // @synthesize followupLocalizedInformativeText=_followupLocalizedInformativeText;
@property(retain) NSString *followupLocalizedTitle; // @synthesize followupLocalizedTitle=_followupLocalizedTitle;
@property(retain) NSDictionary *followupSendActionUserInfo; // @synthesize followupSendActionUserInfo=_followupSendActionUserInfo;
@property(retain) NSDictionary *followupReviewActionUserInfo; // @synthesize followupReviewActionUserInfo=_followupReviewActionUserInfo;
@property(retain) NSURL *followupSendActionURL; // @synthesize followupSendActionURL=_followupSendActionURL;
@property(retain) NSURL *followupReviewActionURL; // @synthesize followupReviewActionURL=_followupReviewActionURL;
@property double followupFrequency; // @synthesize followupFrequency=_followupFrequency;
@property(retain) NSString *followupUniqueIdentifier; // @synthesize followupUniqueIdentifier=_followupUniqueIdentifier;
@property _Bool userNotificationShouldPlaySound; // @synthesize userNotificationShouldPlaySound=_userNotificationShouldPlaySound;
@property(retain) NSString *sendActionLabel; // @synthesize sendActionLabel=_sendActionLabel;
@property(retain) NSString *reviewActionLabel; // @synthesize reviewActionLabel=_reviewActionLabel;
@property(retain) NSString *localizedNotificationBody; // @synthesize localizedNotificationBody=_localizedNotificationBody;
@property(retain) NSString *localizedNotificationTitle; // @synthesize localizedNotificationTitle=_localizedNotificationTitle;
@property(retain) NSString *hostAppIdentifier; // @synthesize hostAppIdentifier=_hostAppIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHostAppIdentifier:(id)arg1 localizedNotificationTitle:(id)arg2 localizedNotificationBody:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

