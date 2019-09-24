//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIFont, UIInterfaceActionGroupView, UIMenu;
@protocol _UIContextMenuActionsListViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsListView : UIView
{
    UIFont *_labelFont;
    _Bool _surfacesActionRadius;
    _Bool _showsTitle;
    _Bool _reversesActionOrder;
    id <_UIContextMenuActionsListViewDelegate> _delegate;
    UIMenu *_displayedMenu;
    UIInterfaceActionGroupView *_currentActionGroupView;
}

@property(retain, nonatomic) UIInterfaceActionGroupView *currentActionGroupView; // @synthesize currentActionGroupView=_currentActionGroupView;
@property(copy, nonatomic) UIMenu *displayedMenu; // @synthesize displayedMenu=_displayedMenu;
@property(nonatomic) _Bool reversesActionOrder; // @synthesize reversesActionOrder=_reversesActionOrder;
@property(nonatomic) _Bool showsTitle; // @synthesize showsTitle=_showsTitle;
@property(nonatomic) _Bool surfacesActionRadius; // @synthesize surfacesActionRadius=_surfacesActionRadius;
@property(nonatomic) __weak id <_UIContextMenuActionsListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_testing_tapAnAction;
- (id)_imageSizedToFitWithinRow:(id)arg1;
- (void)_performActionForPreviewAction:(id)arg1;
- (id)_reversedActionGroupForActionGroup:(id)arg1;
- (id)_interfaceActionGroupForActions:(id)arg1;
- (void)setDisplayedMenu:(id)arg1 animated:(_Bool)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)maxImageSize;
- (id)_labelFont;
- (void)kickstartActionScrubbingWithGesture:(id)arg1;
- (id)initWithMenu:(id)arg1;

@end
