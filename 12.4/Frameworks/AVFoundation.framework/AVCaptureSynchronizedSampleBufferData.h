//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVCaptureSynchronizedData.h>

@class AVCaptureSynchronizedSampleBufferDataInternal;

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData
{
    AVCaptureSynchronizedSampleBufferDataInternal *_internal;
}

- (_Bool)hasCorrespondingVisionData;
- (_Bool)hasCorrespondingDepthData;
@property(readonly) long long droppedReason;
@property(readonly) _Bool sampleBufferWasDropped;
@property(readonly) struct opaqueCMSampleBuffer *sampleBuffer;
- (void)dealloc;
- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 sampleBufferWasDropped:(_Bool)arg2;

@end
