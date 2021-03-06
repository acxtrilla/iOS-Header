//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class AXMDiagnostics, AXMLanguage, AXMVisionFeature, CIImage, NSArray, NSNumber, NSString;

@interface AXMVisionResult : NSObject <NSSecureCoding>
{
    CIImage *_image;
    NSArray *_features;
    NSNumber *_appliedImageOrientation;
    AXMDiagnostics *_diagnostics;
    NSString *_detectedFeatureDescription;
    NSString *_detectedTextDescription;
}

+ (_Bool)supportsSecureCoding;
+ (id)resultWithFeatures:(id)arg1 orientation:(id)arg2 diagnostics:(id)arg3;
+ (id)resultWithImage:(id)arg1 features:(id)arg2 orientation:(id)arg3 diagnostics:(id)arg4;
@property(retain, nonatomic) NSString *detectedTextDescription; // @synthesize detectedTextDescription=_detectedTextDescription;
@property(retain, nonatomic) NSString *detectedFeatureDescription; // @synthesize detectedFeatureDescription=_detectedFeatureDescription;
@property(retain, nonatomic) AXMDiagnostics *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(retain, nonatomic) NSNumber *appliedImageOrientation; // @synthesize appliedImageOrientation=_appliedImageOrientation;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(retain, nonatomic) CIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (_Bool)speakableDescriptionContainsDiscoveredText;
- (id)speakableDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *localizedDetectedTextHint;
@property(readonly, nonatomic) AXMLanguage *detectedTextLanguage;
- (id)localizedStringFormatterForExpression:(id)arg1;
@property(readonly, nonatomic) AXMVisionFeature *assetMetadataFeature;
@property(readonly, nonatomic) AXMVisionFeature *colorInfoFeature;
- (id)sortedFeatures;
- (id)_init;

@end

