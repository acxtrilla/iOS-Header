//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ThermalLogger : NSObject
{
    int _maxCLTM;
    _Bool _hasMaxCLTM;
    int _appMode;
}

- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)endLogging;
- (void)startLogging;
- (void)dealloc;
- (id)init;

@end

