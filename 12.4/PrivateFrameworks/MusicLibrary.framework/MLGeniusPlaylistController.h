//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData;

@interface MLGeniusPlaylistController : NSObject
{
    void *_echo;
    void *_echo_library;
    void *_echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}

+ (id)geniusTracksForSeedTrack:(id)arg1 error:(id *)arg2;
+ (id)playlistControllerWithSeedTracks:(id)arg1 error:(id *)arg2;
+ (void)populateContainer:(id)arg1 withSeedTrack:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (unsigned long long)defaultMinTrackCount;
+ (unsigned long long)defaultTrackCount;
+ (_Bool)hasGeniusDataAvailable;
+ (_Bool)hasGeniusFeatureEnabled;
+ (_Bool)useFakeGeniusData;
+ (void)ignoreUnusedWarnings;
- (void).cxx_destruct;
- (id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)_createClusterPlaylistWithSeedTracks:(id)arg1 error:(id *)arg2;
- (_Bool)_onBackgroundQueue_populateContainer:(id)arg1 seedTrack:(id)arg2 error:(id *)arg3;
- (_Bool)_onBackgroundQueue_fakePopulateContainer:(id)arg1 withSeedTrack:(id)arg2 error:(id *)arg3;
- (id)_debugGetTracksStartingAtTrackWithPersistentID:(unsigned long long)arg1 maxTracks:(unsigned long long)arg2 stride:(int)arg3;
- (_Bool)_canIncludeTrackInGeniusContainer:(id)arg1;
- (id)_sharedBlobMutableData;
- (id)tracksFromClusterForCount:(unsigned long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

