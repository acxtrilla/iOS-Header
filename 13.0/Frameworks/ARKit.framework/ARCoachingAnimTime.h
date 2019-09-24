//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARCoachingAnimTime : NSObject
{
    double _absoluteTime;
    double _startTime;
    double _oscillatingTime;
    double _delta;
    double _deltaPercentage;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
- (id)init;
@property(readonly, nonatomic) double deltaPercentage;
@property(readonly, nonatomic) double delta;
@property(readonly, nonatomic) double oscillatingTime;
@property(nonatomic) double startTime;
@property(nonatomic) double absoluteTime;

@end
