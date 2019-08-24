//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTColorPreset, AVTCoreModelColor;

@interface AVTCoreModelColorVariation : NSObject
{
    AVTColorPreset *_colorPreset;
    AVTCoreModelColor *_color;
}

@property(readonly, nonatomic) AVTCoreModelColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) AVTColorPreset *colorPreset; // @synthesize colorPreset=_colorPreset;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithColor:(id)arg1 colorPreset:(id)arg2;

@end
