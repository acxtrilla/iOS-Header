//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMZoomControl;

@protocol CAMZoomControlDelegate <NSObject>

@optional
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeSelectedButtonIndex:(unsigned long long)arg2 displayZoomFactor:(double)arg3;
- (void)toggleBetweenZoomFactorsForZoomControl:(CAMZoomControl *)arg1;
- (_Bool)canToggleBetweenZoomFactorsForZoomControl:(CAMZoomControl *)arg1;
- (void)zoomControl:(CAMZoomControl *)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3;
@end

