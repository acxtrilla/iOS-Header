//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _SLSheetMaskLayer : CALayer
{
    double _clipCornerRadius;
    UIColor *_clipBackgroundColor;
}

@property(retain, nonatomic) UIColor *clipBackgroundColor; // @synthesize clipBackgroundColor=_clipBackgroundColor;
@property(nonatomic) double clipCornerRadius; // @synthesize clipCornerRadius=_clipCornerRadius;
- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;

@end
