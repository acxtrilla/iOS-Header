//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLModelWeights, PMLSessionDescriptor, PMLTrainingStore;
@protocol PMLEvaluationTrackerProtocol;

@interface PMLLogRegEvaluationPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    id <PMLEvaluationTrackerProtocol> _tracker;
    PMLSessionDescriptor *_sessionDescriptor;
    unsigned long long _maxSessionsLimit;
    unsigned long long _sessionsInBatch;
    PMLModelWeights *_currentModelWeights;
    _Bool _intercept;
    double _skew;
    _Bool _isMultiLabel;
    unsigned long long _positiveLabel;
    double _threshold;
    unsigned long long _evaluationLevel;
    struct NSString *_planId;
}

@property(readonly, nonatomic) PMLModelWeights *currentModelWeights; // @synthesize currentModelWeights=_currentModelWeights;
@property(readonly, nonatomic) unsigned long long maxSessionsLimit; // @synthesize maxSessionsLimit=_maxSessionsLimit;
@property(readonly, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
@property(readonly, nonatomic) id <PMLEvaluationTrackerProtocol> tracker; // @synthesize tracker=_tracker;
@property(readonly, nonatomic) PMLTrainingStore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
- (void).cxx_destruct;
- (void)runUntilDoneForTesting;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)runWhile:(CDUnknownBlockType)arg1 didFinish:(_Bool *)arg2;
@property(readonly, copy) NSString *description;
- (id)normalizeRegressor:(id)arg1;
- (void)loadSessionsWithBlock:(CDUnknownBlockType)arg1;
- (id)run;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString *)arg3 sessionDescriptor:(id)arg4 maxSessionsLimit:(unsigned long long)arg5 sessionsInBatch:(unsigned long long)arg6 currentModelWeights:(id)arg7 intercept:(_Bool)arg8 skew:(double)arg9 threshold:(double)arg10 isMultiLabel:(_Bool)arg11 positiveLabel:(unsigned long long)arg12 evaluationLevel:(unsigned long long)arg13;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
