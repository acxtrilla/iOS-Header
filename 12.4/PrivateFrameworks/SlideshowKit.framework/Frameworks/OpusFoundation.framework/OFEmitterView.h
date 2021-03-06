//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusFoundation/OFUIView.h>

@class NSArray, NSString;

@interface OFEmitterView : OFUIView
{
}

+ (Class)layerClass;
@property(nonatomic) double velocity;
@property(nonatomic) double spin;
@property(nonatomic) unsigned int seed;
@property(nonatomic) double scale;
@property(nonatomic) NSString *renderMode;
@property(nonatomic) double lifetime;
@property(nonatomic) double emitterZPosition;
@property(nonatomic) struct CGSize emitterSize;
@property(nonatomic) NSString *emitterShape;
@property(nonatomic) struct CGPoint emitterPosition;
@property(nonatomic) NSString *emitterMode;
@property(nonatomic) double emitterDepth;
@property(nonatomic) NSArray *emitterCells;
@property(nonatomic) double birthRate;
- (id)emitterLayer;
- (void)dealloc;

@end

