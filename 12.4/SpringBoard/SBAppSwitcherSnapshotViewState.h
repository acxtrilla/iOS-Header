//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBAppSwitcherSnapshotCacheEntry, SBApplication;

@interface SBAppSwitcherSnapshotViewState : NSObject
{
    _Bool _animatingTransition;
    SBApplication *_application;
    SBAppSwitcherSnapshotCacheEntry *_cacheEntry;
}

@property(nonatomic, getter=isAnimatingTransition) _Bool animatingTransition; // @synthesize animatingTransition=_animatingTransition;
@property(retain, nonatomic) SBAppSwitcherSnapshotCacheEntry *cacheEntry; // @synthesize cacheEntry=_cacheEntry;
@property(retain, nonatomic) SBApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;

@end
