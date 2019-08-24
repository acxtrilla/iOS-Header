//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMapTable;

__attribute__((visibility("hidden")))
@interface VUIAppDocumentUpdateEventMonitor : NSObject
{
    _Bool _appIsInForeground;
    _Bool _pendingPlayactivity;
    _Bool _ignoreWLKPlaybackReportNotification;
    int _playbackReportToken;
    NSMapTable *_observerMapTable;
    NSDate *_lastProcesssedPlayActivity;
}

+ (id)sharedMonitor;
@property(retain, nonatomic) NSDate *lastProcesssedPlayActivity; // @synthesize lastProcesssedPlayActivity=_lastProcesssedPlayActivity;
@property(nonatomic) int playbackReportToken; // @synthesize playbackReportToken=_playbackReportToken;
@property(retain, nonatomic) NSMapTable *observerMapTable; // @synthesize observerMapTable=_observerMapTable;
- (void).cxx_destruct;
- (void)_notifyObserversOfEvent:(id)arg1;
- (void)_notifyObserver:(id)arg1 ofRefreshEvent:(id)arg2;
- (void)_handleLocationAuthorizationDidChangeNotification:(id)arg1;
- (void)_handleClearPlayHistoryNotification:(id)arg1;
- (void)_handlePreferredVideoFormatDidChangeNotification:(id)arg1;
- (void)_handleRestrictionsDidChangeNotification:(id)arg1;
- (void)_handleAccountDidChangeNotification:(id)arg1;
- (void)_handleNowPlayingDidEndNotification:(id)arg1;
- (void)_handleNowPlayingWillStartNotification:(id)arg1;
- (void)_handlePlaybackReportNotification;
- (void)_handleClearFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleRemoveFromPlayHistoryRequestDidFinishNotification:(id)arg1;
- (void)_handleFavoritesRequestDidFinishNotification:(id)arg1;
- (void)_handlePlayHistoryUpdatedNotification:(id)arg1;
- (void)_handleUpNextRequestDidFinishNotification:(id)arg1;
- (void)_handleUTSKDidChangeNotification:(id)arg1;
- (void)_handleEntitlementsDidChangeNotification:(id)arg1;
- (void)_handleSubscriptionDidChangeNotification:(id)arg1;
- (void)_handlePurchaseFlowDidFinishNotification:(id)arg1;
- (void)_handleAppLibraryDidChangeNotification:(id)arg1;
- (void)_handleSettingsDidChangeNotification:(id)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (void)_handleAppDidEnterBackgroundNotification:(id)arg1;
- (void)_handleAppWillEnterForegroundNotification:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1 forEventDescriptors:(id)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

@end
