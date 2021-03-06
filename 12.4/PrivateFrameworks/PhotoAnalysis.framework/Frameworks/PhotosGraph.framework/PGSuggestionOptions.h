//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSIndexSet;

@interface PGSuggestionOptions : NSObject
{
    _Bool _allowNotification;
    _Bool _shouldPerformChanges;
    _Bool _ignoreCollisionsWithExistingSuggestions;
    _Bool _ignoreCollisionsWithSameBatchSuggestions;
    NSDate *_localToday;
    NSDate *_universalStartDate;
    NSDate *_universalEndDate;
    NSDate *_universalEndDateForWholeLibrarySuggestions;
    unsigned long long _maximumNumberOfSuggestions;
    NSIndexSet *_suggestionTypeWhitelist;
    NSIndexSet *_suggestionSubtypeWhitelist;
    NSIndexSet *_suggestionTypeBlacklist;
    NSIndexSet *_suggestionSubtypeBlacklist;
}

@property(retain, nonatomic) NSIndexSet *suggestionSubtypeBlacklist; // @synthesize suggestionSubtypeBlacklist=_suggestionSubtypeBlacklist;
@property(retain, nonatomic) NSIndexSet *suggestionTypeBlacklist; // @synthesize suggestionTypeBlacklist=_suggestionTypeBlacklist;
@property(retain, nonatomic) NSIndexSet *suggestionSubtypeWhitelist; // @synthesize suggestionSubtypeWhitelist=_suggestionSubtypeWhitelist;
@property(retain, nonatomic) NSIndexSet *suggestionTypeWhitelist; // @synthesize suggestionTypeWhitelist=_suggestionTypeWhitelist;
@property(nonatomic) _Bool ignoreCollisionsWithSameBatchSuggestions; // @synthesize ignoreCollisionsWithSameBatchSuggestions=_ignoreCollisionsWithSameBatchSuggestions;
@property(nonatomic) _Bool ignoreCollisionsWithExistingSuggestions; // @synthesize ignoreCollisionsWithExistingSuggestions=_ignoreCollisionsWithExistingSuggestions;
@property(nonatomic) _Bool shouldPerformChanges; // @synthesize shouldPerformChanges=_shouldPerformChanges;
@property(nonatomic) _Bool allowNotification; // @synthesize allowNotification=_allowNotification;
@property(nonatomic) unsigned long long maximumNumberOfSuggestions; // @synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions;
@property(retain, nonatomic) NSDate *universalEndDateForWholeLibrarySuggestions; // @synthesize universalEndDateForWholeLibrarySuggestions=_universalEndDateForWholeLibrarySuggestions;
@property(retain, nonatomic) NSDate *universalEndDate; // @synthesize universalEndDate=_universalEndDate;
@property(retain, nonatomic) NSDate *universalStartDate; // @synthesize universalStartDate=_universalStartDate;
@property(retain, nonatomic) NSDate *localToday; // @synthesize localToday=_localToday;
- (void).cxx_destruct;
- (id)init;

@end

