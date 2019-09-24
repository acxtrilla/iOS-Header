//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CRCarPlayAppService-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class CRCarPlayCapabilitiesManager, NSString;
@protocol OS_dispatch_queue;

@interface CRCarPlayAppServiceAgent : NSObject <NSXPCListenerDelegate, CRCarPlayAppService>
{
    _Bool _assetQueryInProgress;
    NSObject<OS_dispatch_queue> *_assetQueue;
    CRCarPlayCapabilitiesManager *_carCapabilitiesManager;
}

@property(retain, nonatomic) CRCarPlayCapabilitiesManager *carCapabilitiesManager; // @synthesize carCapabilitiesManager=_carCapabilitiesManager;
@property(nonatomic) _Bool assetQueryInProgress; // @synthesize assetQueryInProgress=_assetQueryInProgress;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetQueue; // @synthesize assetQueue=_assetQueue;
- (void).cxx_destruct;
- (id)_parseBlacklistContent:(id)arg1 error:(id *)arg2;
- (void)_reloadWithAsset:(id)arg1;
- (id)_mostRecentAssetForAssets:(id)arg1;
- (id)_sortAssets:(id)arg1;
- (void)_queryForUpdatedAsset;
- (void)_requestAssetCatalogDownload;
- (void)_setBlacklistPreference:(id)arg1;
- (id)_blacklistPreference;
- (void)dealloc;
- (void)requestCarCapabilitiesUpdate;
- (void)requestBlacklistUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
