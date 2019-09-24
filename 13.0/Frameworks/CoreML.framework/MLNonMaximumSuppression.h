//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLModel.h>

#import <CoreML/MLModelSpecificationLoader-Protocol.h>

@class MLNonMaximumSuppressionParameters, NSString;

@interface MLNonMaximumSuppression : MLModel <MLModelSpecificationLoader>
{
    MLNonMaximumSuppressionParameters *_parameters;
}

+ (id)loadModelFromSpecification:(struct _MLModelSpecification *)arg1 configuration:(id)arg2 error:(id *)arg3;
@property(readonly) MLNonMaximumSuppressionParameters *parameters; // @synthesize parameters=_parameters;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithParameters:(id)arg1 modelDescription:(id)arg2 configuration:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
