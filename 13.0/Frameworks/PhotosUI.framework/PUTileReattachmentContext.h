//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface PUTileReattachmentContext : NSObject
{
    _Bool _isZoomingIn;
    _Bool _isTransitioningOverOneUp;
    NSMapTable *__tileControllerVelocities;
}

@property(readonly, nonatomic) NSMapTable *_tileControllerVelocities; // @synthesize _tileControllerVelocities=__tileControllerVelocities;
@property(nonatomic, setter=setTransitioningOverOneUp:) _Bool isTransitioningOverOneUp; // @synthesize isTransitioningOverOneUp=_isTransitioningOverOneUp;
@property(nonatomic, setter=setZoomingIn:) _Bool isZoomingIn; // @synthesize isZoomingIn=_isZoomingIn;
- (void).cxx_destruct;
- (void)setVelocity:(struct PUDisplayVelocity)arg1 forTileController:(id)arg2;
- (struct PUDisplayVelocity)velocityForTileController:(id)arg1;

@end
