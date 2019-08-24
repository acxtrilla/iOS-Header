//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXMediaUtilities/AXMEvaluationNode.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AVCaptureMetadataOutput;

@interface AXMBarcodeNode : AXMEvaluationNode <NSSecureCoding>
{
    AVCaptureMetadataOutput *_captureOutput;
}

+ (id)title;
+ (_Bool)isSupported;
+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) AVCaptureMetadataOutput *captureOutput; // @synthesize captureOutput=_captureOutput;
- (void).cxx_destruct;

@end
