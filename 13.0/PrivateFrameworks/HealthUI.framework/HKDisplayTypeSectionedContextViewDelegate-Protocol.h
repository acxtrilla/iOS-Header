//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/NSObject-Protocol.h>

@class HKDisplayTypeSectionedContextView, NSIndexPath;

@protocol HKDisplayTypeSectionedContextViewDelegate <NSObject>
- (void)contextView:(HKDisplayTypeSectionedContextView *)arg1 didDeselectItemAtIndexPath:(NSIndexPath *)arg2;
- (void)contextView:(HKDisplayTypeSectionedContextView *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end
