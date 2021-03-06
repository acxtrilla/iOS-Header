//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/NSObject-Protocol.h>

@class RTLearnedLocationEngine;

@protocol RTLearnedLocationEngineProtocol <NSObject>
- (void)learnedLocationEngineDidUpdate:(RTLearnedLocationEngine *)arg1 intervalSinceLastUpdate:(double)arg2;

@optional
- (void)learnedLocationEngineDidFinishTraining:(RTLearnedLocationEngine *)arg1;
- (void)learnedLocationEngineWillBeginTraining:(RTLearnedLocationEngine *)arg1;
@end

