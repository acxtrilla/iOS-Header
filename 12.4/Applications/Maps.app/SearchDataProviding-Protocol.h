//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOMapServiceTraits, GEORetainedSearchMetadata, GEOSearchCategory, NSString, PersonalizedItemManager, RAPAutoCompleteSearchManager, UserLocationSearchResult;

@protocol SearchDataProviding <NSObject>
@property(retain, nonatomic) PersonalizedItemManager *mapPersonalizedItems;
@property(retain, nonatomic) RAPAutoCompleteSearchManager *autoCompleteSearchRAPManager;
@property(retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property(retain, nonatomic) UserLocationSearchResult *userLocationSearchResult;
@property(retain, nonatomic) GEOSearchCategory *inputCategory;
@property(nonatomic) int searchMode;
- (void)setSearchCompletionFilterType:(long long)arg1;
- (void)clearAutocompleteResults;
- (_Bool)hasResults;
- (void)reset;
- (void)setInputText:(NSString *)arg1 traits:(GEOMapServiceTraits *)arg2 source:(int)arg3;
@end
