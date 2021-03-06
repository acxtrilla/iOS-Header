//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h>
#import <AVFoundation/AVCaptureDepthDataOutputDelegate-Protocol.h>
#import <AVFoundation/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>
#import <AVFoundation/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>
#import <AVFoundation/AVCaptureVisionDataOutputDelegate-Protocol.h>

@class AVCaptureDataOutputSynchronizerInternal, NSArray, NSString;
@protocol AVCaptureDataOutputSynchronizerDelegate, OS_dispatch_queue;

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureVisionDataOutputDelegate>
{
    AVCaptureDataOutputSynchronizerInternal *_internal;
}

+ (void)initialize;
- (void)_dispatchSynchronizedDataWithTimestamp:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_earliestSlaveSynchronizedDataQueueTimestamp;
- (_Bool)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)_adjustSynchronizedDataTimestamps;
- (void)_dispatchRipenedSynchronizedData;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)visionDataOutput:(id)arg1 didDropVisionDataPixelBufferForTimestamp:(CDStruct_1b6d18a9)arg2 connection:(id)arg3 reason:(long long)arg4;
- (void)visionDataOutput:(id)arg1 didOutputVisionDataPixelBuffer:(struct __CVBuffer *)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(CDStruct_1b6d18a9)arg3 connection:(id)arg4;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureDataOutputSynchronizerDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, retain) NSArray *dataOutputs;
- (void)dealloc;
- (id)initWithDataOutputs:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

