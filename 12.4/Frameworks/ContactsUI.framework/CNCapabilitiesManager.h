//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/IDSIDQueryControllerDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface CNCapabilitiesManager : NSObject <IDSIDQueryControllerDelegate>
{
    _Bool _isListeningToIDSServiceAvailability;
    _Bool _isListeningToIDSQueryController;
    NSMutableDictionary *_destinationStatus;
}

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;
- (void).cxx_destruct;
- (_Bool)_isAppAvailable:(id)arg1;
- (_Bool)isFaceTimeAppAvailable;
- (_Bool)isMessagesAppAvailable;
- (_Bool)isMailAppAvailable;
- (_Bool)isPhoneAppAvailable;
- (_Bool)isFaceTimeAudioAvailable;
- (_Bool)isWeiboServiceAvailable;
- (_Bool)hasAdditionalTextTones;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)removeIDSServiceAvailabilityListener:(id)arg1;
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;
- (id)conferenceURLForDestinationID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (_Bool)hasPreviouslyConferencedWithID:(id)arg1;
- (_Bool)isConferencingEverGonnaBeAvailable;
- (_Bool)isConferencingAvailable;
- (_Bool)isMadridConfigured;
- (_Bool)isMMSConfigured;
- (_Bool)isEmailConfigured;
- (_Bool)hasCameraCapability;
- (_Bool)hasSiriCapability;
- (_Bool)hasForceTouchCapability;
- (_Bool)hasVibratorCapability;
- (_Bool)hasSMSCapability;
- (_Bool)hasCellularDataCapability;
- (_Bool)hasCellularTelephonyHardwareCapability;
- (_Bool)hasCellularTelephonyCapability;
- (_Bool)hasTelephonyCapability;
- (_Bool)isSensitiveUIAllowed;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

