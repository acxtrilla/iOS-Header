//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>
#import <NanoTimeKitCompanion/RERelevanceEngineObserver-Protocol.h>

@class NSLock, NSString, NTKFaceCollection, RERelevanceEngine;

@interface NTKRelevanceEngineCache : NSObject <NTKFaceCollectionObserver, RERelevanceEngineObserver>
{
    NSLock *_coordinatorLock;
    RERelevanceEngine *_coordinator;
    RERelevanceEngine *_staticCoordinator;
    NTKFaceCollection *_libraryCollection;
    _Bool _isEditing;
}

+ (id)_globallyCachedCanonicalRelevanceEngine;
+ (id)sampleConfiguration;
+ (id)_modelFileLocation;
+ (id)_dataSourceLoaderForRelevanceEngineDataSourcesForKey:(id)arg1;
+ (id)sharedCache;
- (void).cxx_destruct;
- (_Bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_unloadCoordinatorIfNeeded;
- (void)_beginLoadingDataForEngine:(id)arg1;
- (void)_loadCoordinatorIfNeeded;
- (_Bool)_faceCollectionContainsFaceNeedingElementCoordinator:(id)arg1;
- (_Bool)_needsLiveElementCoordinator;
- (_Bool)_faceNeedsElementCoordinator:(id)arg1;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceCollection:(id)arg1 didRemoveFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollection:(id)arg1 didAddFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)prewarm;
- (void)_clockViewControllerDidEndEditing;
- (void)_clockViewControllerDidEnterAddable;
- (void)_clockViewControllerDidBeginEditing;
- (id)canonicalRelevanceEngineIgnoringAppInstallations;
- (id)canonicalRelevanceEngine;
- (id)sharedRelevanceEngine;
- (void)setLibraryCollection:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
