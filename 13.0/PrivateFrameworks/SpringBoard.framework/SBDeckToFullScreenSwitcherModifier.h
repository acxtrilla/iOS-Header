//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherToFullScreenSwitcherModifier.h>

@class SBAppLayout, SBDeckSwitcherModifier;

@interface SBDeckToFullScreenSwitcherModifier : SBSwitcherToFullScreenSwitcherModifier
{
    SBAppLayout *_fullScreenAppLayout;
    SBDeckSwitcherModifier *_deckLayoutModifier;
}

- (void).cxx_destruct;
- (id)layoutSettings;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (id)appLayoutToScrollToDuringTransition;
- (id)initWithTransitionID:(id)arg1 direction:(long long)arg2 fullScreenAppLayout:(id)arg3 multitaskingModifier:(id)arg4;

@end
