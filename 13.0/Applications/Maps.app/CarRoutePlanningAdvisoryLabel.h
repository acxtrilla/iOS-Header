//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CarRoutePlanningAdvisoryLabel : UIView
{
    UILabel *_label;
    UIVisualEffectView *_blurView;
    NSString *_text;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end

