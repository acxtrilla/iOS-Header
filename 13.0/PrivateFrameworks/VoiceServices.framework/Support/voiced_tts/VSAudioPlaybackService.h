//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <voiced_tts/AFAudioPowerProviding-Protocol.h>

@class NSDate, NSString;

@interface VSAudioPlaybackService : NSObject <AFAudioPowerProviding>
{
    unsigned int _sessionID;
    struct OpaqueAudioQueue *_audioQueue;
    NSString *_outputRoute;
    long long _state;
    double _enqueuedSampleCount;
    NSDate *_audioQueueStartDate;
    NSDate *_audioQueueFutureEndDate;
    struct AudioStreamBasicDescription _asbd;
    struct _opaque_pthread_cond_t _stateChangeCondition;
    struct _opaque_pthread_mutex_t _waitForStateChangeMutex;
}

+ (unsigned long long)bytesOfDuration:(double)arg1 withAudioDescription:(struct AudioStreamBasicDescription)arg2;
+ (double)durationOfAudioDataLength:(unsigned long long)arg1 withAudioDescription:(struct AudioStreamBasicDescription)arg2;
@property(retain, nonatomic) NSDate *audioQueueFutureEndDate; // @synthesize audioQueueFutureEndDate=_audioQueueFutureEndDate;
@property(retain, nonatomic) NSDate *audioQueueStartDate; // @synthesize audioQueueStartDate=_audioQueueStartDate;
@property(nonatomic) double enqueuedSampleCount; // @synthesize enqueuedSampleCount=_enqueuedSampleCount;
@property(nonatomic) struct _opaque_pthread_cond_t stateChangeCondition; // @synthesize stateChangeCondition=_stateChangeCondition;
@property(nonatomic) struct _opaque_pthread_mutex_t waitForStateChangeMutex; // @synthesize waitForStateChangeMutex=_waitForStateChangeMutex;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSString *outputRoute; // @synthesize outputRoute=_outputRoute;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
- (void).cxx_destruct;
- (_Bool)getAveragePower:(float *)arg1 andPeakPower:(float *)arg2;
- (void)didEndAccessPower;
- (void)willBeginAccessPower;
- (id)audioPowerProvider;
- (_Bool)isAudioQueueRunning;
- (_Bool)isAudioQueueStalled;
- (void)waitForAudioQueueStop;
- (void)reset;
- (void)pause;
- (void)stop;
- (void)flushAndStop;
- (id)enqueue:(id)arg1 packetCount:(long long)arg2 packetDescriptions:(id)arg3;
- (id)start;
- (void)signalQueueRunningStateChange;
- (void)handleMediaServerReset;
- (void)dealloc;
- (id)initWithAudioSessionID:(unsigned int)arg1 asbd:(struct AudioStreamBasicDescription)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
