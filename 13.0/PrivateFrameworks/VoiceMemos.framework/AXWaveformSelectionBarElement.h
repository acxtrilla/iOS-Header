//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface AXWaveformSelectionBarElement : UIAccessibilityElement
{
    _Bool _adjustsStartTime;
}

@property(nonatomic) _Bool adjustsStartTime; // @synthesize adjustsStartTime=_adjustsStartTime;
- (_Bool)accessibilityScroll:(long long)arg1;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void)_accessibilityIncreaseValue:(_Bool)arg1 isThreeFingerScroll:(_Bool)arg2;
- (unsigned long long)accessibilityTraits;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (_Bool)isWaveformOverview;

@end
