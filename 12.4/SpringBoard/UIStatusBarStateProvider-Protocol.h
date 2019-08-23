//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol UIStatusBarStateObserver;

@protocol UIStatusBarStateProvider <NSObject>
- (void)getStatusBarData:(CDStruct_1916f467 *)arg1;
- (void)removeStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;
- (void)addStatusBarStateObserver:(id <UIStatusBarStateObserver>)arg1;

@optional
- (NSString *)doubleHeightStatusStringForStyle:(long long)arg1;
@end
