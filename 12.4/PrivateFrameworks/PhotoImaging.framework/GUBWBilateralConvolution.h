//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

@interface GUBWBilateralConvolution : CIFilter
{
    CIImage *_inputImage;
    NSArray *_inputPoints;
    NSArray *_inputWeights;
    NSNumber *_inputEdgeDetail;
    NSNumber *_inputBorder;
}

+ (id)bilateralLoop11Kernel;
+ (id)bilateralLoop5Kernel;
+ (id)bilateralLoop2Kernel;
+ (id)BWBilateralKernels;
@property(retain) NSNumber *inputBorder; // @synthesize inputBorder=_inputBorder;
@property(retain) NSNumber *inputEdgeDetail; // @synthesize inputEdgeDetail=_inputEdgeDetail;
@property(retain) NSArray *inputWeights; // @synthesize inputWeights=_inputWeights;
@property(retain) NSArray *inputPoints; // @synthesize inputPoints=_inputPoints;
@property(retain) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (id)doBilateralLoop:(id)arg1 points:(id)arg2 weights:(id)arg3 slope:(id)arg4;
- (struct CGRect)bilateralROI:(long long)arg1 destRect:(struct CGRect)arg2 userInfo:(id)arg3;

@end

