//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLDataDensityClustering.h>

@class NSProgress;

@interface PLOPTICSClustering : PLDataDensityClustering
{
    NSProgress *_progress;
}

- (void).cxx_destruct;
- (long long)updateReachibilityDistance:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)updateNeighbors:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)prepareOrderedDatasetIndexRange:(struct _NSRange)arg1 inDataset:(id)arg2;
- (id)orderedDatasetByReachabilityDistance:(id)arg1;
- (id)preprocessData:(id)arg1;
- (id)extractSubClusters:(id)arg1 inDataset:(id)arg2 parentIndex:(long long)arg3 inProgressBlock:(CDUnknownBlockType)arg4;
- (id)extractRootClusters:(id)arg1 inOriginalDataset:(id)arg2 inProgressBlock:(CDUnknownBlockType)arg3;
- (id)performWithDataset:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;

@end
