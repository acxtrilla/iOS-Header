//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TIAutocorrectionList;

@protocol TICandidateHandler
@property(readonly, nonatomic) _Bool asynchronous;
- (void)close;
- (void)pushCandidates:(TIAutocorrectionList *)arg1;
- (void)open;
@end
