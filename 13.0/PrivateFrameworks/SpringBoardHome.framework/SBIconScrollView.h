//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoardUI/BSUIScrollView.h>

@protocol SBIconScrollViewDelegate;

@interface SBIconScrollView : BSUIScrollView
{
}

- (struct CGPoint)_roundedProposedContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_autoScrollAssistantUpdateContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (_Bool)_scrollsToMakeFirstResponderVisible;
- (_Bool)cancelTouchTracking;

// Remaining properties
@property(nonatomic) __weak id <SBIconScrollViewDelegate> delegate; // @dynamic delegate;

@end
