//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/_UIFocusDebugQuickLookImageDrawing-Protocol.h>

@class NSMutableArray, NSString;

@interface _UIFocusRegion : NSObject <_UIFocusDebugQuickLookImageDrawing, NSCopying>
{
    NSMutableArray *_mutableOccludingRegions;
    _UIFocusRegion *_originalRegion;
    struct CGRect _frame;
}

+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(_Bool)arg3;
+ (id)_regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2;
+ (id)_regionsByEvaluatingOcclusionsForRegions:(id)arg1;
@property(retain, nonatomic, getter=_originalRegion, setter=_setOriginRegion:) _UIFocusRegion *originalRegion; // @synthesize originalRegion=_originalRegion;
@property(nonatomic, setter=_setFrame:) struct CGRect frame; // @synthesize frame=_frame;
@property(retain, nonatomic, getter=_mutableOccludingRegions, setter=_setMutableOccludingRegions:) NSMutableArray *mutableOccludingRegions; // @synthesize mutableOccludingRegions=_mutableOccludingRegions;
- (void).cxx_destruct;
- (void)_drawDebugQuickLookImageWithInfo:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_shouldDrawDebugQuickLookImageWithInfo:(id)arg1;
@property(readonly, nonatomic, getter=_debugAssociatedObject) __weak id debugAssociatedObject;
- (void)_didParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (void)_willParticipateAsDestinationRegionInFocusUpdate:(id)arg1;
- (id)_visibleSubregionsWhenOccludedByRegion:(id)arg1;
- (void)_addOccludingRegion:(id)arg1;
- (id)_occludingRegions;
- (id)_subregionWithFrame:(struct CGRect)arg1;
- (id)_resizeToRect:(struct CGRect)arg1;
- (unsigned long long)_effectiveBoundariesBlockingFocusMovementRequest:(id)arg1;
- (unsigned long long)_effectiveFocusableBoundariesForHeading:(unsigned long long)arg1;
- (long long)_preferredDistanceComparisonType;
- (unsigned long long)_boundariesBlockingFocusMovementRequest:(id)arg1;
- (unsigned long long)_focusableBoundaries;
- (id)_nextFocusedItemForFocusMovementRequest:(id)arg1 inMap:(id)arg2;
- (id)_defaultFocusItem;
- (_Bool)_shouldCropRegionToSearchArea;
- (_Bool)_canBeOccludedByRegionsAbove;
- (_Bool)_canOccludeRegionsBelow;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
