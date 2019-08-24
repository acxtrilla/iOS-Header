//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/NSCopying-Protocol.h>

@interface MapsSuggestionsETARequirements : NSObject <NSCopying>
{
    double _maxAge;
    double _maxDistance;
    double _minAccuracy;
}

@property(readonly, nonatomic) double minAccuracy; // @synthesize minAccuracy=_minAccuracy;
@property(readonly, nonatomic) double maxDistance; // @synthesize maxDistance=_maxDistance;
@property(readonly, nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaxAge:(double)arg1 maxDistance:(double)arg2 minAccuracy:(double)arg3;

@end
