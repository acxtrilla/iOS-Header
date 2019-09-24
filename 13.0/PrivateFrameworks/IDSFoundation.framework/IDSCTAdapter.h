//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CoreTelephonyClientCarrierBundleDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientPNRDelegate-Protocol.h>
#import <IDSFoundation/CoreTelephonyClientSubscriberDelegate-Protocol.h>
#import <IDSFoundation/IMSystemMonitorListener-Protocol.h>

@class CoreTelephonyClient, IDSCTAdapterCache, IMSystemMonitor, NSHashTable, NSMutableDictionary, NSString;

@interface IDSCTAdapter : NSObject <CoreTelephonyClientDelegate, CoreTelephonyClientSubscriberDelegate, CoreTelephonyClientPNRDelegate, CoreTelephonyClientCarrierBundleDelegate, IMSystemMonitorListener>
{
    NSHashTable *_listeners;
    id _coreTelephonyClient;
    id _cache;
    NSMutableDictionary *_registrationStateByLabelID;
    struct os_unfair_lock_s _lock;
    IMSystemMonitor *_systemMonitor;
}

+ (_Bool)isPhoneNumber:(id)arg1 equivalentToExistingPhoneNumber:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
@property(retain, nonatomic) NSMutableDictionary *registrationStateByLabelID; // @synthesize registrationStateByLabelID=_registrationStateByLabelID;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) IDSCTAdapterCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;
- (void).cxx_destruct;
- (void)systemApplicationDidBecomeActive;
- (void)operatorBundleChange:(id)arg1;
- (void)carrierBundleChange:(id)arg1;
- (void)pnrReadyStateNotification:(id)arg1 regState:(_Bool)arg2;
- (void)context:(id)arg1 pnrSupportChanged:(_Bool)arg2;
- (void)phoneNumberChanged:(id)arg1;
- (void)subscriptionInfoDidChange;
- (void)SIMStatusDidChange:(id)arg1 status:(id)arg2;
- (void)dualSimCapabilityDidChange;
- (void)_locked_accessCache:(CDUnknownBlockType)arg1;
- (void)_checkRegistrationStateForContext:(id)arg1;
- (void)_iterateListenersForSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)_unlocked_iterateListenersForSelector:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)CTPNRForSIM:(id)arg1;
- (_Bool)isPhoneNumberEmergencyNumber:(id)arg1;
- (id)SIMForIdentifier:(id)arg1;
- (id)currentSIMsWithError:(id *)arg1;
- (id)_unlocked_currentSIMsWithError:(id *)arg1;
- (id)carrierBundleValueFromSIM:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 withFallback:(id)arg4;
- (id)carrierBundleValueFromAllSIMsForKey:(id)arg1 ofType:(Class)arg2 withFallback:(id)arg3;
- (_Bool)_legacy_supportsSMSIdentification;
@property(readonly, nonatomic) _Bool supportsIdentification;
@property(readonly, nonatomic) _Bool isAnySIMInserted;
@property(readonly, nonatomic) _Bool isAnySIMUsable;
@property(readonly, nonatomic) _Bool dualSIMCapabilityEnabled;
- (void)dealloc;
- (id)initWithCoreTelephonyClient:(id)arg1 systemMonitor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
