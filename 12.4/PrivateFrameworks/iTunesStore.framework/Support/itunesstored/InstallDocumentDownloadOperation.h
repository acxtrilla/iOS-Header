//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FinishDownloadStepOperation.h"

@interface InstallDocumentDownloadOperation : FinishDownloadStepOperation
{
    _Bool _isSharedMDMDownload;
    _Bool _isSharedODRDownload;
}

- (id)_sharedContainerPath:(id)arg1;
- (id)_sharedContainerPath;
- (id)_sharedAssetStagingPath:(id)arg1;
- (_Bool)_moveSharedAssetFromPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (void)run;

@end
