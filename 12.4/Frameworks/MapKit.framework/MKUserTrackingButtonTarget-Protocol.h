//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class UIImage;

@protocol MKUserTrackingButtonTarget <NSObject>
+ (Class)_activityIndicatorClass;
- (long long)_activityIndicatorStyle;
- (UIImage *)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2;
- (void)_repositionViews;
- (_Bool)_isHighlightedForState:(long long)arg1;
- (void)_updateForState:(long long)arg1;
- (void)_setInternallyEnabled:(_Bool)arg1;
@end
