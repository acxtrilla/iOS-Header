//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "COSFeatureHighlightDataSource.h"

@interface COSCliftonFeatureDataSource : COSFeatureHighlightDataSource
{
    _Bool _hasCinnamon;
    _Bool _hasAntimony;
    _Bool _hasHighBPMDetection;
    _Bool _hasLowBPMDetection;
}

@property(nonatomic) _Bool hasLowBPMDetection; // @synthesize hasLowBPMDetection=_hasLowBPMDetection;
@property(nonatomic) _Bool hasHighBPMDetection; // @synthesize hasHighBPMDetection=_hasHighBPMDetection;
@property(nonatomic) _Bool hasAntimony; // @synthesize hasAntimony=_hasAntimony;
@property(nonatomic) _Bool hasCinnamon; // @synthesize hasCinnamon=_hasCinnamon;
- (id)features;

@end
