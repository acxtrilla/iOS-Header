//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBWallpaperEffectView.h>

#import <SpringBoard/CSWallpaperView-Protocol.h>

@class NSString, SBUIBackgroundView;

@interface SBDashBoardWallpaperEffectView : SBWallpaperEffectView <CSWallpaperView>
{
    SBUIBackgroundView *_backgroundView;
}

- (void).cxx_destruct;
- (void)setCoverSheetWallpaperStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (id)initWithWallpaperVariant:(long long)arg1 transformOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
