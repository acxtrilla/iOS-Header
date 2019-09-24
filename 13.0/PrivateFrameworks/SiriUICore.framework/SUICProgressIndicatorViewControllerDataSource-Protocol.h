//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUICore/NSProgressReporting-Protocol.h>

@class SUICProgressIndicatorViewController, SUICProgressStateMachine;

@protocol SUICProgressIndicatorViewControllerDataSource <NSProgressReporting>
- (SUICProgressStateMachine *)stateMachineForProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg1;

@optional
- (_Bool)shouldAnimateTransitionToState:(unsigned long long)arg1 fromState:(unsigned long long)arg2 forProgressIndicatorViewController:(SUICProgressIndicatorViewController *)arg3;
@end
