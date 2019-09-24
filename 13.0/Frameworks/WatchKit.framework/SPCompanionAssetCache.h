//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SPAssetCacheClientCache;

@interface SPCompanionAssetCache : NSObject
{
    SPAssetCacheClientCache *_permanentCache;
    SPAssetCacheClientCache *_transientCache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) SPAssetCacheClientCache *transientCache; // @synthesize transientCache=_transientCache;
@property(retain, nonatomic) SPAssetCacheClientCache *permanentCache; // @synthesize permanentCache=_permanentCache;
- (void).cxx_destruct;
- (id)keyFromImageData:(id)arg1;
- (id)dataForImageWithName:(id)arg1;
- (id)cachedImages;
- (void)removeAllImagesFromPermanentCache;
- (void)removeImageFromPermanentCacheWithName:(id)arg1;
- (_Bool)addImageToPermanentCache:(id)arg1 withName:(id)arg2;
- (_Bool)imageInPermanentCache:(id)arg1;
- (void)syncCache:(id)arg1;
- (void)clearedCache:(id)arg1;
- (void)deletedAsset:(id)arg1;
- (void)addedAsset:(id)arg1;
- (void)handleCacheMessage:(id)arg1;
- (void)addImageReferenceToTransientCache:(id)arg1 withName:(id)arg2;
- (_Bool)imageInTransientCache:(id)arg1;
- (id)init;

@end
