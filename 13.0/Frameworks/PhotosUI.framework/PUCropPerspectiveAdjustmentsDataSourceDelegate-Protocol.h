//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PLPhotoEditRenderer, PUCropPerspectiveAdjustmentsDataSource;

@protocol PUCropPerspectiveAdjustmentsDataSourceDelegate <NSObject>
- (void)adjustmentsDataChanged:(PUCropPerspectiveAdjustmentsDataSource *)arg1;

@optional
- (PLPhotoEditRenderer *)adjustmentsRenderer:(PUCropPerspectiveAdjustmentsDataSource *)arg1;
@end
