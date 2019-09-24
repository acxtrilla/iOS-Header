//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTransformOp-Protocol.h>

@class MDLAnimatedVector3, NSString;

@interface MDLTransformRotateOp : NSObject <MDLTransformOp>
{
    _Bool _inverse;
    NSString *_name;
    MDLAnimatedVector3 *_animatedValue;
    unsigned long long _order;
}

@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(nonatomic) _Bool inverse; // @synthesize inverse=_inverse;
@property(readonly, nonatomic) MDLAnimatedVector3 *animatedValue; // @synthesize animatedValue=_animatedValue;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (_Bool)IsInverseOp;
- (id)initWithName:(id)arg1 inverse:(_Bool)arg2 order:(unsigned long long)arg3 data:(id)arg4;

@end
