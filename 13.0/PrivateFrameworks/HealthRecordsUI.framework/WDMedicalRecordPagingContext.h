//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordPagingContext : NSObject
{
    _Bool _shouldClearDisplayItemGroups;
    _Bool _hasMoreData;
    _Bool _fetchingCurrentPage;
    _Bool _pagingContextReady;
    NSMutableSet *_computingDaySummaries;
    NSMutableArray *_unprocessedRecords;
    NSMutableArray *_contextDependentBlockQueue;
}

+ (id)sortDateComponentsOfDateComponents:(id)arg1 withDayOffset:(long long)arg2;
+ (id)sortDateComponentsOfDate:(id)arg1;
@property(retain, nonatomic) NSMutableArray *contextDependentBlockQueue; // @synthesize contextDependentBlockQueue=_contextDependentBlockQueue;
@property(retain, nonatomic) NSMutableArray *unprocessedRecords; // @synthesize unprocessedRecords=_unprocessedRecords;
@property(retain, nonatomic) NSMutableSet *computingDaySummaries; // @synthesize computingDaySummaries=_computingDaySummaries;
@property(nonatomic) _Bool pagingContextReady; // @synthesize pagingContextReady=_pagingContextReady;
@property(nonatomic) _Bool fetchingCurrentPage; // @synthesize fetchingCurrentPage=_fetchingCurrentPage;
@property(nonatomic) _Bool hasMoreData; // @synthesize hasMoreData=_hasMoreData;
@property(nonatomic) _Bool shouldClearDisplayItemGroups; // @synthesize shouldClearDisplayItemGroups=_shouldClearDisplayItemGroups;
- (void).cxx_destruct;
- (void)resetPagingContext;
- (_Bool)shouldQueryForNextBatch;
- (id)init;

@end

