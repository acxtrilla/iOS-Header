//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUI/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver>
{
    CDUnknownBlockType _launchSOSCompletion;
}

+ (id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1;
+ (id)sharedInCallUILauncher;
@property(copy, nonatomic) CDUnknownBlockType launchSOSCompletion; // @synthesize launchSOSCompletion=_launchSOSCompletion;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
