//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLContainerChangeNotification.h>

@class NSDictionary, NSObject;
@protocol PLAlbumContainer, PLAssetContainerList;

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification
{
    NSDictionary *_userInfo;
}

+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;
@property(readonly, retain, nonatomic) NSObject<PLAlbumContainer> *albumList;
@property(readonly, retain, nonatomic) id <PLAssetContainerList> assetContainerList;
- (id)description;
- (id)userInfo;
- (id)name;
- (void)dealloc;
- (id)_contentRelationshipName;

@end
