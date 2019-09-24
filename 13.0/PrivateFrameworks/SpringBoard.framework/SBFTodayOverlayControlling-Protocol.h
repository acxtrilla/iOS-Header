//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SBFTodayOverlayObserving;

@protocol SBFTodayOverlayControlling
@property(readonly, nonatomic, getter=isPresented) _Bool presented;
@property(nonatomic) double presentationProgress;
@property(readonly, nonatomic) double contentWidth;
- (void)removeTodayOverlayObserver:(id <SBFTodayOverlayObserving>)arg1;
- (void)addTodayOverlayObserver:(id <SBFTodayOverlayObserving>)arg1;
- (double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2;
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 completionHandler:(void (^)(_Bool))arg3;
@end
