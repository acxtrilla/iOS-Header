//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "FRWebViewExcerpt-Protocol.h"

@class NSString, UIScrollView;
@protocol UIScrollViewDelegate;

@interface FRWebView : WKWebView <FRWebViewExcerpt>
{
    id <UIScrollViewDelegate> _scrollViewDelegate;
}

+ (id)actionsForElement:(id)arg1 inWebView:(id)arg2;
+ (id)dividerColor;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)pauseMediaElements;
- (void)loadURL:(id)arg1;
- (void)setExcerptDelegate:(id)arg1;
@property(readonly, nonatomic) UIScrollView *fre_scrollView;
- (void)fre_loadExcerpt:(id)arg1 articleURL:(id)arg2;
- (void)resetExcerpt;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

