//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBForcePressToFullScreenAppLayoutSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _startingEnvironmentMode;
}

- (void).cxx_destruct;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;
- (_Bool)isContainerStatusBarVisible;
- (long long)backdropBlurType;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (_Bool)asynchronouslyRendersUntilDelay:(inout double *)arg1;
- (id)initWithTransitionID:(id)arg1 fromAppLayout:(id)arg2 toAppLayout:(id)arg3 effectiveStartingEnvironmentMode:(long long)arg4;

@end
