//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class SPQueryResponse, SPQueryTask;

@protocol SPQueryTaskDelegate
- (void)resultsDidBecomeInvalid:(SPQueryTask *)arg1;
- (void)didReceiveResponse:(SPQueryResponse *)arg1;
@end
