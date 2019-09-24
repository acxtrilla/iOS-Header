//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AnnotationKit/PKCanvasViewDelegate-Protocol.h>

@class NSString, PKCanvasView, PKDrawing, PKInk, UIColor;

@interface AKInkSignatureView : UIView <PKCanvasViewDelegate>
{
    _Bool _hasStrokes;
    UIColor *_strokeColor;
    PKCanvasView *_canvasView;
    PKInk *_ink;
    PKDrawing *_latestDrawing;
}

@property(retain) PKDrawing *latestDrawing; // @synthesize latestDrawing=_latestDrawing;
@property(copy) PKInk *ink; // @synthesize ink=_ink;
@property(retain) PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property _Bool hasStrokes; // @synthesize hasStrokes=_hasStrokes;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
- (void).cxx_destruct;
- (void)canvasViewDrawingDidChange:(id)arg1;
- (struct CGPath *)copyPotracedPathAndReturnDrawing:(id *)arg1;
- (void)clear;
- (void)_updateInk;
- (void)layoutSubviews;
- (void)teardown;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
