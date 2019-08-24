//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/NSObject-Protocol.h>

@class CLLocation;
@protocol MapsSuggestionsSource;

@protocol MapsSuggestionsSourceDelegate <NSObject>
- (_Bool)detachSource:(id <MapsSuggestionsSource>)arg1;
- (_Bool)attachSource:(id <MapsSuggestionsSource>)arg1;
- (CLLocation *)currentBestLocation;
- (unsigned long long)deleteEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2;
- (unsigned long long)addOrUpdateSuggestionEntries:(struct NSArray *)arg1 source:(struct NSString *)arg2 deleteMissing:(_Bool)arg3;
@end
