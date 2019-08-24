//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCameraCalibrationData, NSData;

__attribute__((visibility("hidden")))
@interface AVDepthDataInternal : NSObject
{
    struct __CVBuffer *pixelBuffer;
    int version;
    long long quality;
    _Bool filtered;
    long long accuracy;
    AVCameraCalibrationData *calibrationData;
    float depthBlurEffectSimulatedAperture;
    NSData *depthBlurEffectRenderingParameters;
    _Bool portraitScoreIsHigh;
    float portraitScore;
}

@end
