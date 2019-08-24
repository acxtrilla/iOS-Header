//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputMetadataAdaptor, AVAssetWriterInputPixelBufferAdaptor, AVCaptureConnection, NSURL;
@protocol ICDocCamDebugMovieControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ICDocCamDebugMovieController : NSObject
{
    _Bool _recording;
    _Bool _readyToRecordVideo;
    _Bool _readyToRecordMetadata;
    _Bool _recordingWillBeStarted;
    _Bool _recordingWillBeStopped;
    _Bool _canRecordFrames;
    long long _referenceOrientation;
    AVCaptureConnection *_videoConnection;
    id <ICDocCamDebugMovieControllerDelegate> _delegate;
    NSURL *_movieURL;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterVideoIn;
    AVAssetWriterInput *_assetWriterMetadataIn;
    AVAssetWriterInputMetadataAdaptor *_assetWriterMetadataAdaptor;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_movieWritingQueue;
    long long _videoOrientation;
    unsigned long long _backgroundRecordingID;
}

@property(nonatomic) unsigned long long backgroundRecordingID; // @synthesize backgroundRecordingID=_backgroundRecordingID;
@property long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(nonatomic) _Bool canRecordFrames; // @synthesize canRecordFrames=_canRecordFrames;
@property(nonatomic) _Bool recordingWillBeStopped; // @synthesize recordingWillBeStopped=_recordingWillBeStopped;
@property(nonatomic) _Bool recordingWillBeStarted; // @synthesize recordingWillBeStarted=_recordingWillBeStarted;
@property(nonatomic) _Bool readyToRecordMetadata; // @synthesize readyToRecordMetadata=_readyToRecordMetadata;
@property(nonatomic) _Bool readyToRecordVideo; // @synthesize readyToRecordVideo=_readyToRecordVideo;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *movieWritingQueue; // @synthesize movieWritingQueue=_movieWritingQueue;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *pixelBufferAdaptor; // @synthesize pixelBufferAdaptor=_pixelBufferAdaptor;
@property(retain, nonatomic) AVAssetWriterInputMetadataAdaptor *assetWriterMetadataAdaptor; // @synthesize assetWriterMetadataAdaptor=_assetWriterMetadataAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterMetadataIn; // @synthesize assetWriterMetadataIn=_assetWriterMetadataIn;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterVideoIn; // @synthesize assetWriterVideoIn=_assetWriterVideoIn;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(retain, nonatomic) NSURL *movieURL; // @synthesize movieURL=_movieURL;
@property(nonatomic) __weak id <ICDocCamDebugMovieControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak AVCaptureConnection *videoConnection; // @synthesize videoConnection=_videoConnection;
@property(nonatomic) long long referenceOrientation; // @synthesize referenceOrientation=_referenceOrientation;
@property(getter=isRecording) _Bool recording; // @synthesize recording=_recording;
- (void).cxx_destruct;
- (struct CGAffineTransform)transformFromCurrentVideoOrientationToOrientation:(long long)arg1;
- (double)angleOffsetFromPortraitOrientationToOrientation:(long long)arg1;
- (void)removeFile:(id)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveMovieToCameraRoll;
- (void)resumeCaptureSessionForMovieRecording;
- (void)pauseCaptureSessionForMovieRecording;
- (_Bool)inputsReadyToRecord;
- (void)stopRecording;
- (void)startRecording;
- (_Bool)setupAssetWriterMetadataInputAndMetadataAdaptor;
- (_Bool)setupAssetWriterVideoInput:(struct opaqueCMFormatDescription *)arg1;
- (_Bool)writeMetaDataAtFrame:(long long)arg1 intrinsicMatrix:(CDStruct_d80e62f2)arg2;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ofType:(id)arg2 atFrame:(long long)arg3;
- (void)recordingDidStop;
- (void)recordingWillStop;
- (void)recordingDidStart;
- (void)recordingWillStart;
- (void)recordFrame:(struct opaqueCMSampleBuffer *)arg1 fromConnection:(id)arg2;
- (id)initWithDelegate:(id)arg1 videoConnection:(id)arg2 referenceOrientation:(long long)arg3;

@end
