//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (UIAccessibilityElementTraversal)
- (_Bool)_accessibilityShouldUseSupplementaryViews;
- (_Bool)_accessibilityShouldBeProcessed:(id)arg1;
- (_Bool)_accessibilityHasVisibleFrame;
- (long long)_accessibilityCompareGeometryForViewOrDictionary:(id)arg1;
- (id)_accessibilityViewChildrenWithOptions:(id)arg1;
- (_Bool)_accessibilityEnumerateSiblingsWithParent:(id *)arg1 options:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_handleSupplementaryViewIfNeededWithOrderedChildrenContainer:(id *)arg1 childOfOrderedChildrenContainer:(id *)arg2 headerIndex:(unsigned long long *)arg3 footerIndex:(unsigned long long *)arg4;
- (id)_accessibilityParentFromOrderedChildrenContainer:(id)arg1;
- (void)_accessibilityEnumerateSiblingsFromOrderedChildrenContainer:(id)arg1 fromChildAtIndex:(long long)arg2 headerIndex:(long long)arg3 footerIndex:(long long)arg4 isMovingForward:(_Bool)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (_Bool)_accessibilityAppendOrderedChildLeafDescendantsToArray:(id)arg1 count:(unsigned long long)arg2 shouldStopAtRemoteElement:(_Bool)arg3 options:(id)arg4 treeLogger:(id)arg5;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(_Bool)arg2 options:(id)arg3 treeLogger:(id)arg4;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(_Bool)arg2 options:(id)arg3;
- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 options:(id)arg2;
- (id)_accessibilityLeafDescendantsWithOptions:(id)arg1;
- (void)_accessibilityTraverseTreeWithLogger:(id)arg1 shouldStopAtRemoteElement:(_Bool)arg2 options:(id)arg3;
- (void)_accessibilityTraverseTreeWithLogger:(id)arg1 options:(id)arg2;
- (id)_accessibilityTreeAsStringWithOptions:(id)arg1;
- (id)_accessibilityTreeAsString;
- (id)_accessibilityElementsInDirectionWithCount:(unsigned long long)arg1 options:(id)arg2;
@end
