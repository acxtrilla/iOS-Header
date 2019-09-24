//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARPresentation, SCNRenderer;

@interface ARSinglePassRenderer : NSObject
{
    SCNRenderer *_renderer;
    ARPresentation *_presentation;
}

@property(nonatomic) __weak ARPresentation *presentation; // @synthesize presentation=_presentation;
- (void).cxx_destruct;
- (void)renderFrame:(id)arg1;
@property(readonly, nonatomic) SCNRenderer *sceneRenderer;
- (id)initWithSCNRenderer:(id)arg1;

@end
