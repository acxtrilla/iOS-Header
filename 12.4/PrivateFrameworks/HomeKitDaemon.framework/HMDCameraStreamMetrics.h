//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraMetricsStreamLogEvent, NSError;

@interface HMDCameraStreamMetrics : HMFObject
{
    HMDCameraMetricsStreamLogEvent *_cameraStreamMetricsLogEvent;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) HMDCameraMetricsStreamLogEvent *cameraStreamMetricsLogEvent; // @synthesize cameraStreamMetricsLogEvent=_cameraStreamMetricsLogEvent;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3;

@end
