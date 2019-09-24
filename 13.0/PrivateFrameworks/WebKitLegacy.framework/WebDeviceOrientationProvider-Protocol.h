//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/NSObject-Protocol.h>

@class WebDeviceOrientation;

@protocol WebDeviceOrientationProvider <NSObject>
- (WebDeviceOrientation *)lastOrientation;
- (void)stopUpdating;
- (void)startUpdating;
@end
