//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SRStarkTableViewController.h"

#import "SRStarkItemController-Protocol.h"
#import "SRStarkTableViewControllerDelegate-Protocol.h"

@class AFAnalyticsTurnBasedInstrumentationContext, NSMutableDictionary, NSString, NSTimer, NSUUID, SAUIListItem;
@protocol SRStarkDisambiguationSnippetControllerDelegate;

@interface SRStarkDisambiguationSnippetController : SRStarkTableViewController <SRStarkTableViewControllerDelegate, SRStarkItemController>
{
    unsigned long long _preferredListItemIndex;
    SAUIListItem *_preferredListItem;
    _Bool _isGroup;
    NSMutableDictionary *_groupNameMapping;
    _Bool _isIdle;
    long long _interactionStyle;
    NSUUID *_conversationItemIdentifier;
    id <SRStarkDisambiguationSnippetControllerDelegate> _delegate;
    NSString *_disambiguationKey;
    NSTimer *_idleTimer;
    AFAnalyticsTurnBasedInstrumentationContext *_turnContext;
}

@property(retain, nonatomic) AFAnalyticsTurnBasedInstrumentationContext *turnContext; // @synthesize turnContext=_turnContext;
@property(retain, nonatomic, getter=_idleTimer) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property(nonatomic, getter=_isIdle) _Bool isIdle; // @synthesize isIdle=_isIdle;
@property(copy, nonatomic, getter=_disambiguationKey) NSString *disambiguationKey; // @synthesize disambiguationKey=_disambiguationKey;
@property(nonatomic) __weak id <SRStarkDisambiguationSnippetControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSUUID *conversationItemIdentifier; // @synthesize conversationItemIdentifier=_conversationItemIdentifier;
@property(nonatomic) long long interactionStyle; // @synthesize interactionStyle=_interactionStyle;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)backgroundColorForTableViewCells;
- (id)_disambiguationAttributedString:(id)arg1 boldedRange:(struct _NSRange)arg2;
- (void)didPressShowMore;
- (void)didPressItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)newShowMoreCellWithIdentifier:(id)arg1;
- (Class)showMoreCellClass;
- (void)configureCell:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)newCellWithIdentifier:(id)arg1 forItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)cellIdentifierForItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)tableCellIdentifiersAndClasses;
- (_Bool)isActive;
- (long long)preferredUserInterfaceStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_createNewIdleTimer;
- (void)_resetIdleTimer;
- (void)_clearIdleTimer;
- (void)_idleTimerFired:(id)arg1;
- (void)autodisambiguate;
- (_Bool)shouldAutodisambiguate;
- (id)initWithAceObject:(id)arg1 conversationItemIdentifier:(id)arg2 turnContext:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldProceedToNextCommandAtSpeechSynthesisEnd;
@property(readonly) Class superclass;

@end
