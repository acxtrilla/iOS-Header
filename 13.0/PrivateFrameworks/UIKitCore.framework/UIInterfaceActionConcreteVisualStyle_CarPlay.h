//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIInterfaceActionConcreteVisualStyle.h>

#import <UIKitCore/UIInterfaceActionConcreteVisualStyleImpl-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIInterfaceActionConcreteVisualStyle_CarPlay : UIInterfaceActionConcreteVisualStyle <UIInterfaceActionConcreteVisualStyleImpl>
{
}

- (id)_normalActionTitleLabelColorForViewState:(id)arg1;
- (id)_highlightedActionTitleLabelColorForViewState:(id)arg1;
- (id)_preferredActionFont;
- (id)_regularActionFont;
- (id)newActionSeparatorViewForGroupViewState:(id)arg1;
- (id)newGroupBackgroundViewWithGroupViewState:(id)arg1;
- (id)newActionBackgroundViewForViewState:(id)arg1;
- (id)actionTitleLabelColorForViewState:(id)arg1;
- (id)actionTitleLabelFontForViewState:(id)arg1;
- (_Bool)selectByPressGestureRequired;
- (struct CGSize)minimumActionContentSize;
- (double)verticalImageContentSpacing;
- (double)horizontalImageContentSpacing;
- (struct UIEdgeInsets)contentMargin;
- (double)contentCornerRadius;
- (id)defaultScreen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
