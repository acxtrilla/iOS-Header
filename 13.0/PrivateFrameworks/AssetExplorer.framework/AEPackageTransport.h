//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, NSMutableDictionary;
@protocol AEPackageTransportDelegate;

@interface AEPackageTransport : PXObservable
{
    id <AEPackageTransportDelegate> _delegate;
    NSMutableArray *__stagedIdentifiersInOrder;
    NSMutableDictionary *__stagedPackagesByIdentifier;
}

@property(readonly, nonatomic) NSMutableDictionary *_stagedPackagesByIdentifier; // @synthesize _stagedPackagesByIdentifier=__stagedPackagesByIdentifier;
@property(readonly, nonatomic) NSMutableArray *_stagedIdentifiersInOrder; // @synthesize _stagedIdentifiersInOrder=__stagedIdentifiersInOrder;
@property(nonatomic) __weak id <AEPackageTransportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)stagedPackages;
- (id)stagedPackageForIdentifier:(id)arg1;
- (id)orderedStagedIdentifiers;
- (void)unstagePackagesWithIdentifiers:(id)arg1;
- (void)unstagePackageWithIdentifier:(id)arg1 andNotify:(_Bool)arg2;
- (void)unstagePackageWithIdentifier:(id)arg1;
- (void)stagePackages:(id)arg1 andNotify:(_Bool)arg2;
- (void)stagePackages:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)commitPackage:(id)arg1;
- (void)reportError:(id)arg1;
- (void)_removePackageFromStagingWithIdentifier:(id)arg1;
- (void)_addPackageToStaging:(id)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;
- (id)packagesWithLivePhotoContent;

@end
