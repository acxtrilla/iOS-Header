//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Proximity/NSObject-Protocol.h>

@class NSUUID, PRProximityEstimator;

@protocol PRProximityEstimatorDelegate <NSObject>
- (void)estimator:(PRProximityEstimator *)arg1 didEstimateProximity:(long long)arg2 toPeer:(NSUUID *)arg3;
@end
