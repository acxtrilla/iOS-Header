//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXImportStatusManager-Protocol.h>

@class NSHashTable, NSMutableDictionary, NSString;

@interface PXCMMPhotoKitImportStatusManager : NSObject <PXImportStatusManager>
{
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
    _Bool _supportsStateSimulation;
}

@property(readonly, nonatomic) _Bool supportsStateSimulation; // @synthesize supportsStateSimulation=_supportsStateSimulation;
- (void).cxx_destruct;
- (void)removeImportStatusObserver:(id)arg1;
- (void)addImportStatusObserver:(id)arg1;
- (long long)_simulatedStateForAsset:(id)arg1;
- (void)completeSimulatedImportForAssetReference:(id)arg1 withSuccess:(_Bool)arg2;
- (void)beginSimulatedImportForAssetReference:(id)arg1;
- (void)_notifySimulationObserversForAssetReference:(id)arg1;
- (long long)importStateForAsset:(id)arg1;
- (id)init;
- (id)initAllowingSimulation:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
