//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTLocation;

@interface RTLearnedLocation : NSObject
{
    RTLocation *_location;
    unsigned long long _dataPointCount;
    double _confidence;
}

@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) unsigned long long dataPointCount; // @synthesize dataPointCount=_dataPointCount;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 confidence:(double)arg3;
- (id)init;
- (id)initWithLocationOfInterest:(id)arg1;

@end

