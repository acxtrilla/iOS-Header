//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImportDeviceAsset.h>

#import <Photos/PHImportSidecarAsset-Protocol.h>

@interface PHImportDeviceSidecarAsset : PHImportDeviceAsset <PHImportSidecarAsset>
{
    unsigned long long _sidecarType;
}

@property(readonly, nonatomic) unsigned long long sidecarType; // @synthesize sidecarType=_sidecarType;
@property(readonly, nonatomic) _Bool isValid;
- (id)getMetadataForImportRecord:(id)arg1 fileData:(id)arg2;
- (id)thumbnailForSize:(unsigned long long)arg1 atEnd:(CDUnknownBlockType)arg2;
- (void)loadMetadataSync;
- (id)initWithSidecarFile:(id)arg1;

@end
