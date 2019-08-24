//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HRListItemLabel, UILabel;

@interface HRTitledListItemLabel : UIView
{
    HRListItemLabel *_listItemLabel;
    UILabel *_bodyLabel;
}

@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) HRListItemLabel *listItemLabel; // @synthesize listItemLabel=_listItemLabel;
- (void).cxx_destruct;
- (double)_bodyLabelToBottom;
- (id)_bodyLabelFont;
- (double)_listItemLabelToBody;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)initWithView:(id)arg1 size:(struct CGSize)arg2 title:(id)arg3 body:(id)arg4;

@end
