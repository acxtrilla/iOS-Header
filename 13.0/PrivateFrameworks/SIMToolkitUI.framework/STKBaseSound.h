//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/STKSound-Protocol.h>

@class NSString, NSTimer;

@interface STKBaseSound : NSObject <STKSound>
{
    NSTimer *_timer;
    double _duration;
    _Bool _playsOnce;
    _Bool _isPlaying;
}

@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(readonly, nonatomic) _Bool playsOnce; // @synthesize playsOnce=_playsOnce;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)stopSound;
- (void)playSound;
- (void)dealloc;
- (id)initWithDuration:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
