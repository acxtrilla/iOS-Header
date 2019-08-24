//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"

@class MNNavigationService, NSString;

__attribute__((visibility("hidden")))
@interface SiriNavStatusUpdater : NSObject <MNNavigationServiceObserver>
{
    MNNavigationService *_navigationService;
}

@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
- (void)_updateSiriNavStatusForNewNavigationServiceState:(unsigned long long)arg1;
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (id)initWithNavigationService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
