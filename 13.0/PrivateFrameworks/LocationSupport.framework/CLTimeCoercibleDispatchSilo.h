//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LocationSupport/CLDispatchSilo.h>

@class NSMutableArray;

@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo
{
    NSMutableArray *_timerHolders;
}

@property(readonly, nonatomic) NSMutableArray *timerHolders; // @synthesize timerHolders=_timerHolders;
- (void).cxx_destruct;
- (id)newTimer;
- (void)afterInterval:(double)arg1 async:(CDUnknownBlockType)arg2;
- (void)updateLatchedAbsoluteTimestamp;
- (void)setLatchedAbsoluteTimestamp:(double)arg1;
- (id)initWithUnderlyingQueue:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end
