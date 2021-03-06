//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSDisplayMonitor.h>

@class FBSDisplayConfiguration;

@interface FBDisplayManager : FBSDisplayMonitor
{
    _Bool _mainConnected;
}

+ (id)mainDisplay;
+ (id)mainConfiguration;
+ (id)mainIdentity;
+ (id)sharedInstance;
@property(readonly, copy, nonatomic) FBSDisplayConfiguration *mainDisplay;
- (void)postMainDisplayConnection;
- (void)dealloc;
- (void)invalidate;
- (id)init;

@end

