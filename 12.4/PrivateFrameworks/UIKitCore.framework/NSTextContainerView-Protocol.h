//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/NSTextLayoutOrientationProvider-Protocol.h>

@class NSDictionary;

@protocol NSTextContainerView <NSObject, NSTextLayoutOrientationProvider>

@optional
- (void)updateInsertionPointStateAndRestartTimer:(_Bool)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(_Bool)arg2;
- (struct CGRect)textContainerFrameForBounds:(struct CGRect)arg1;
- (NSDictionary *)linkTextAttributes;
@end

