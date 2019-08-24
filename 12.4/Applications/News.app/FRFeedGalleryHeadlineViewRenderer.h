//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedHeadlineViewRendererType-Protocol.h"

@class NSString, TSImageCache;
@protocol FRFeedHeadlineViewRendererType, FRGalleryDataProviderType;

@interface FRFeedGalleryHeadlineViewRenderer : NSObject <FRFeedHeadlineViewRendererType>
{
    id <FRFeedHeadlineViewRendererType> _parentRenderer;
    id <FRGalleryDataProviderType> _galleryDataProvider;
    TSImageCache *_thumbnailImageCache;
}

@property(readonly, nonatomic) TSImageCache *thumbnailImageCache; // @synthesize thumbnailImageCache=_thumbnailImageCache;
@property(readonly, nonatomic) id <FRGalleryDataProviderType> galleryDataProvider; // @synthesize galleryDataProvider=_galleryDataProvider;
@property(readonly, nonatomic) id <FRFeedHeadlineViewRendererType> parentRenderer; // @synthesize parentRenderer=_parentRenderer;
- (void).cxx_destruct;
- (void)resetView:(id)arg1;
- (void)renderView:(id)arg1 withTileInfo:(id)arg2 layoutAttributes:(id)arg3 userInterfaceStyle:(long long)arg4;
- (id)initWithParentRenderer:(id)arg1 galleryDataProvider:(id)arg2 thumbnailImageCache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
