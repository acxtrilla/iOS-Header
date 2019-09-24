//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSAttributedString, UITextView;

__attribute__((visibility("hidden")))
@interface SKUIPinnedFooterView : UITableViewHeaderFooterView
{
    NSAttributedString *_attributedText;
    double _horizontalPadding;
    UITextView *_textView;
}

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property(retain, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)_initializeTextView;
- (void)_configureTextViewTextStyling;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
