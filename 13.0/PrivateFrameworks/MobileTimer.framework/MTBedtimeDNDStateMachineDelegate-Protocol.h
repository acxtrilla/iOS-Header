//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineDelegate-Protocol.h>

@class MTBedtimeDNDStateMachine, NSDate;

@protocol MTBedtimeDNDStateMachineDelegate <MTStateMachineDelegate>
- (void)stateMachine:(MTBedtimeDNDStateMachine *)arg1 scheduleUpdateForSecondsFromNow:(double)arg2;
- (void)stateMachineClearKeepBedtimeDNDOff:(MTBedtimeDNDStateMachine *)arg1;
- (void)stateMachine:(MTBedtimeDNDStateMachine *)arg1 keepBedtimeDNDOffUntilDate:(NSDate *)arg2;
- (_Bool)stateMachine:(MTBedtimeDNDStateMachine *)arg1 disengageBedtimeDNDUserRequested:(_Bool)arg2;
- (_Bool)stateMachine:(MTBedtimeDNDStateMachine *)arg1 engageBedtimeDNDUntilDate:(NSDate *)arg2 userEngaged:(_Bool)arg3;
@end
