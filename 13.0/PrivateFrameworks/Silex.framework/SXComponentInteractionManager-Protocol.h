//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@class UIViewController;
@protocol SXComponentInteractionPreviewContext;

@protocol SXComponentInteractionManager <NSObject>
- (void)commitViewController:(UIViewController *)arg1;
- (id <SXComponentInteractionPreviewContext>)previewViewControllerForLocation:(struct CGPoint)arg1;
- (_Bool)hasInteractionForLocation:(struct CGPoint)arg1;
@end
