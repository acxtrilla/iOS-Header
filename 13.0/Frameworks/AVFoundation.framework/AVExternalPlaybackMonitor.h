//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVExternalPlaybackMonitorInternal;

@interface AVExternalPlaybackMonitor : NSObject
{
    AVExternalPlaybackMonitorInternal *_ivars;
}

+ (id)longFormVideoExternalPlaybackMonitor;
+ (void)initialize;
@property(readonly, getter=isAirPlayVideoPlaying) _Bool airPlayVideoPlaying;
@property(readonly, getter=isAirPlayVideoActive) _Bool airPlayVideoActive;
- (id)description;
- (void)dealloc;

@end

