//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSAppListController.h>

#import "ACXDeviceConnectionDelegate-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"

@class NSString;

@interface COSSockPuppetAppListController : PSAppListController <ACXDeviceConnectionDelegate, MCProfileConnectionObserver>
{
}

- (id)bundle;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)updateInstallStateForApplication:(id)arg1 installState:(long long)arg2;
- (void)restrictShowOnWatchSpecifierIfNecessary:(id)arg1;
- (void)launchTestFlight:(id)arg1;
- (id)puppetAppShows:(id)arg1;
- (void)setPuppetAppShows:(id)arg1 specifier:(id)arg2;
- (id)device;
- (void)_resetAfterAppDeletionResponse:(long long)arg1;
- (void)_resetAfterSockPuppetResponseWithState:(long long)arg1;
- (id)systemPolicy;
- (void)deleteAppOnGizmo:(id)arg1;
- (void)deleteAppAlert:(id)arg1;
- (id)deleteAppOnGizmoSpecifier;
- (id)showOnWatchSpecifier;
- (id)specifiers;
- (_Bool)showsOnGizmoEnabled;
- (id)customSpecifiers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
