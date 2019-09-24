//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKViewController.h>

#import <ChatKit/CKTranscriptCollectionViewControllerDelegate-Protocol.h>

@class CKConversation, CKTranscriptCollectionView, NSString;

__attribute__((visibility("hidden")))
@interface CKTranscriptPreviewController : CKViewController <CKTranscriptCollectionViewControllerDelegate>
{
    CKConversation *_conversation;
    CKTranscriptCollectionView *_collectionView;
    double _transcriptWidth;
    struct UIEdgeInsets _layoutMargins;
}

@property(nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) double transcriptWidth; // @synthesize transcriptWidth=_transcriptWidth;
@property(retain, nonatomic) CKTranscriptCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitSticker:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestStartEditingPayload:(id)arg2 forPlugin:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestCommitPayload:(id)arg2 forPlugin:(id)arg3 allowAllCommits:(_Bool)arg4 error:(id *)arg5;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyle:(unsigned long long)arg2 forChatItem:(id)arg3 allowAllStyles:(_Bool)arg4;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (id)transcriptCollectionViewControllerAdditionalFullscreenEffectViews:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (_Bool)transcriptCollectionViewControllerShouldLayoutFullscreenEffects:(id)arg1;
- (_Bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (_Bool)transcriptCollectionViewControllerPlaybackForOutgoingEffectsIsAllowed:(id)arg1;
- (id)traitCollectionForTranscriptCollectionViewController:(id)arg1;
- (void)transcriptCollectionViewControllerDidInsertAssociatedChatItem:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (_Bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (void)transcriptCollectionViewControllerWillDisplayLastBalloon:(id)arg1;
- (void)transcriptCollectionViewControllerDisplaySMSSpamReporting:(id)arg1;
- (void)transcriptCollectionViewControllerReportSpamButtonTapped:(id)arg1;
- (void)transcriptCollectionViewControllerWillScrollToBottom:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerWillInset:(id)arg1 targetContentInset:(inout struct UIEdgeInsets *)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewTitleTappedForItemWithIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 doubleTappedItemAtIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 longPressedForItemWithIndexPath:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)textInputContextIdentifier;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithConversation:(id)arg1 transcriptWidth:(double)arg2 layoutMargins:(struct UIEdgeInsets)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
