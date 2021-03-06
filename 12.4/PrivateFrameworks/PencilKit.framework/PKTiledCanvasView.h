//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PencilKit/PKControllerDelegate-Protocol.h>
#import <PencilKit/PKDrawingGestureTarget-Protocol.h>
#import <PencilKit/UIGestureRecognizerDelegate-Protocol.h>

@class CADisplayLink, NSArray, NSMutableOrderedSet, NSObject, NSString, PKController, PKDrawing, PKDrawingGestureRecognizer, PKDrawingPowerSavingController, PKInk, PKMetalView, PKOpenGLESView, PKSelectionController;
@protocol OS_dispatch_queue, PKRendererControllerProtocol, PKTiledCanvasViewDelegate;

@interface PKTiledCanvasView : UIView <UIGestureRecognizerDelegate, PKDrawingGestureTarget, PKControllerDelegate>
{
    unsigned long long _numSkippedDoubleBufferedFrames;
    _Bool _isDrawing;
    _Bool _allowLiveInteraction;
    _Bool _shouldPause;
    _Bool _isErasingObjects;
    _Bool _isSelecting;
    _Bool __didCancelSelection;
    _Bool _hasValidOnscreenVisibleStrokes;
    PKController *_drawingController;
    id <PKTiledCanvasViewDelegate> _delegate;
    PKDrawing *_drawing;
    PKInk *_ink;
    PKDrawingGestureRecognizer *_drawingGestureRecognizer;
    PKSelectionController *_selectionController;
    id _undoTarget;
    SEL _undoSelector;
    double __fixedDrawingScale;
    PKMetalView *_metalView;
    PKOpenGLESView *_glView;
    CADisplayLink *_displayLink;
    unsigned long long _maxNumPredictionPoints;
    double _drawingStartTimestamp;
    PKDrawingPowerSavingController *_powerSavingController;
    CDUnknownBlockType _purgeResourcesBlock;
    NSMutableOrderedSet *_strokesToErase;
    CDUnknownBlockType _generateOnscreenVisibleStrokesBlock;
    NSObject<OS_dispatch_queue> *_onscreenVisibleStrokesQueue;
    NSArray *_onscreenVisibleStrokes;
    long long _currentGenerationCount;
    struct CGSize __fixedPixelSize;
    struct CGPoint __oldEraseLocation;
    struct CGPoint __drawingBeganLocation;
    struct CGRect _viewScissor;
    struct CGAffineTransform _strokeTransform;
    struct CGAffineTransform _paperTransform;
}

+ (void)setupDefaults;
+ (void)initialize;
@property(nonatomic) long long currentGenerationCount; // @synthesize currentGenerationCount=_currentGenerationCount;
@property(retain, nonatomic) NSArray *onscreenVisibleStrokes; // @synthesize onscreenVisibleStrokes=_onscreenVisibleStrokes;
@property(nonatomic) _Bool hasValidOnscreenVisibleStrokes; // @synthesize hasValidOnscreenVisibleStrokes=_hasValidOnscreenVisibleStrokes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *onscreenVisibleStrokesQueue; // @synthesize onscreenVisibleStrokesQueue=_onscreenVisibleStrokesQueue;
@property(copy, nonatomic) CDUnknownBlockType generateOnscreenVisibleStrokesBlock; // @synthesize generateOnscreenVisibleStrokesBlock=_generateOnscreenVisibleStrokesBlock;
@property(nonatomic) struct CGPoint _drawingBeganLocation; // @synthesize _drawingBeganLocation=__drawingBeganLocation;
@property(retain, nonatomic) NSMutableOrderedSet *strokesToErase; // @synthesize strokesToErase=_strokesToErase;
@property(nonatomic) _Bool _didCancelSelection; // @synthesize _didCancelSelection=__didCancelSelection;
@property(nonatomic) struct CGPoint _oldEraseLocation; // @synthesize _oldEraseLocation=__oldEraseLocation;
@property(nonatomic) _Bool isSelecting; // @synthesize isSelecting=_isSelecting;
@property(nonatomic) _Bool isErasingObjects; // @synthesize isErasingObjects=_isErasingObjects;
@property(copy, nonatomic) CDUnknownBlockType purgeResourcesBlock; // @synthesize purgeResourcesBlock=_purgeResourcesBlock;
@property(retain, nonatomic) PKDrawingPowerSavingController *powerSavingController; // @synthesize powerSavingController=_powerSavingController;
@property double drawingStartTimestamp; // @synthesize drawingStartTimestamp=_drawingStartTimestamp;
@property(nonatomic) unsigned long long maxNumPredictionPoints; // @synthesize maxNumPredictionPoints=_maxNumPredictionPoints;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) PKOpenGLESView *glView; // @synthesize glView=_glView;
@property(retain, nonatomic) PKMetalView *metalView; // @synthesize metalView=_metalView;
@property(nonatomic) double _fixedDrawingScale; // @synthesize _fixedDrawingScale=__fixedDrawingScale;
@property(nonatomic) struct CGSize _fixedPixelSize; // @synthesize _fixedPixelSize=__fixedPixelSize;
@property(nonatomic) SEL undoSelector; // @synthesize undoSelector=_undoSelector;
@property(nonatomic) __weak id undoTarget; // @synthesize undoTarget=_undoTarget;
@property _Bool allowLiveInteraction; // @synthesize allowLiveInteraction=_allowLiveInteraction;
@property(nonatomic) struct CGRect viewScissor; // @synthesize viewScissor=_viewScissor;
@property(nonatomic) struct CGAffineTransform paperTransform; // @synthesize paperTransform=_paperTransform;
@property(nonatomic) struct CGAffineTransform strokeTransform; // @synthesize strokeTransform=_strokeTransform;
@property(nonatomic) __weak PKSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(nonatomic) _Bool isDrawing; // @synthesize isDrawing=_isDrawing;
@property(retain, nonatomic) PKDrawingGestureRecognizer *drawingGestureRecognizer; // @synthesize drawingGestureRecognizer=_drawingGestureRecognizer;
@property(retain, nonatomic) PKInk *ink; // @synthesize ink=_ink;
@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) __weak id <PKTiledCanvasViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PKController *_drawingController; // @synthesize _drawingController;
- (void).cxx_destruct;
- (void)_addSpaceBelowDrawingForStroke:(id)arg1 touch:(id)arg2;
- (_Bool)_isLassoAddingSpace:(id)arg1;
- (void)lassoEnded:(id)arg1;
- (void)_closeLassoForTouch:(id)arg1;
- (_Bool)lassoShouldClearSelectionOrToggleMenu:(id)arg1;
- (void)selectionBegan:(id)arg1;
- (struct CGPoint)clampInputPointForSelection:(struct CGPoint)arg1;
- (void)toggleEditMenuAtLocation:(struct CGPoint)arg1;
- (void)dismissEditMenuIfNecessary;
- (void)cancelGenerateVisibleStrokesBlockIfNecessary;
- (void)clearOnscreenVisibleStrokeCacheAndCancelBlockIfNecessary;
- (void)findOnscreenVisibleStrokesForFrame:(struct CGRect)arg1 inDrawing:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateStrokesOnCanvasForVisibleFrame:(struct CGRect)arg1 inDrawing:(id)arg2;
- (void)generateOnscreenVisibleStrokesForCanvas;
- (void)eraserCancelled;
- (void)eraserEnded:(id)arg1;
- (void)eraserMoved:(id)arg1;
- (_Bool)eraserBegan:(id)arg1;
- (void)_didFinishErasingStrokes:(_Bool)arg1;
- (void)eraseStrokesForPoint:(struct CGPoint)arg1 prevPoint:(struct CGPoint)arg2;
- (struct CGPoint)applyTransformToTouchLocation:(struct CGPoint)arg1;
- (void)registerUndoForStroke:(id)arg1;
- (void)drawingCancelled;
- (void)drawingEnded:(id)arg1;
- (void)drawingEstimatedPropertiesUpdated:(id)arg1;
- (void)drawingMoved:(id)arg1 withEvent:(id)arg2;
- (CDStruct_f17e9403)drawingInputPoint:(struct CGPoint)arg1 forTouch:(id)arg2 predicted:(_Bool)arg3;
- (void)drawingBegan:(id)arg1;
- (void)_gestureRecognizerFailed:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)drawingChanged:(id)arg1;
- (void)_setDrawing:(id)arg1 tiles:(id)arg2 tileTransform:(struct CGAffineTransform)arg3 setupComplete:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)delayCompletionBlockUntilPresentation:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)_drawingDisplay:(double)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)handleDrawingShouldPause:(_Bool)arg1;
- (void)setNeedsDrawingDisplay;
@property(readonly, nonatomic) id <PKRendererControllerProtocol> _rendererController;
- (void)setupDisplayLink;
- (void)resizeBackingBuffersForPixelSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)_setFixedPointSize:(struct CGSize)arg1 drawingScale:(double)arg2;
- (void)setupMetalViewForWideGamut:(_Bool)arg1 withPixelSize:(struct CGSize)arg2;
- (void)setupOpenGLViewForWideGamut:(_Bool)arg1 withPixelSize:(struct CGSize)arg2;
- (void)setupViewWithPixelSize:(struct CGSize)arg1 drawingSize:(struct CGSize)arg2;
- (void)adjustedPixelSize:(struct CGSize *)arg1 drawingSize:(struct CGSize *)arg2;
- (double)layerContentScale;
- (void)setupGestures;
- (void)setupDrawing;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

