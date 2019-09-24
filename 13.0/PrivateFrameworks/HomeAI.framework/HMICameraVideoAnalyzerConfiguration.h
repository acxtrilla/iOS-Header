//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeAI/NSCopying-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@interface HMICameraVideoAnalyzerConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _transcodeFragment;
    _Bool _useScheduler;
    _Bool _inMediaAnalysis;
    unsigned long long _posterFrameGenerationInterval;
    unsigned long long _posterFrameHeight;
    double _maxFragmentAnalysisDuration;
    double _maxFragmentDuration;
    unsigned long long _serviceType;
    unsigned long long _startingMediaIntegritySequenceNumber;
}

+ (_Bool)supportsSecureCoding;
@property _Bool inMediaAnalysis; // @synthesize inMediaAnalysis=_inMediaAnalysis;
@property _Bool useScheduler; // @synthesize useScheduler=_useScheduler;
@property _Bool transcodeFragment; // @synthesize transcodeFragment=_transcodeFragment;
@property unsigned long long startingMediaIntegritySequenceNumber; // @synthesize startingMediaIntegritySequenceNumber=_startingMediaIntegritySequenceNumber;
@property unsigned long long serviceType; // @synthesize serviceType=_serviceType;
@property(readonly) double maxFragmentDuration; // @synthesize maxFragmentDuration=_maxFragmentDuration;
@property(readonly) double maxFragmentAnalysisDuration; // @synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration;
@property(readonly) unsigned long long posterFrameHeight; // @synthesize posterFrameHeight=_posterFrameHeight;
@property(readonly) unsigned long long posterFrameGenerationInterval; // @synthesize posterFrameGenerationInterval=_posterFrameGenerationInterval;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)getAnalysisServiceTypePreference;
- (id)initWithPosterFrameGenerationInterval:(unsigned long long)arg1 posterFrameHeight:(unsigned long long)arg2 maxFragmentAnalysisDuration:(double)arg3 maxFragmentDuration:(double)arg4;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
