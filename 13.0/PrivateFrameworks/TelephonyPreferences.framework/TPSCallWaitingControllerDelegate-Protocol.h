//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/NSObject-Protocol.h>

@class NSError, TPSCallWaitingController;

@protocol TPSCallWaitingControllerDelegate <NSObject>
- (void)callWaitingController:(TPSCallWaitingController *)arg1 didChangeState:(long long)arg2 error:(NSError *)arg3;
@end

