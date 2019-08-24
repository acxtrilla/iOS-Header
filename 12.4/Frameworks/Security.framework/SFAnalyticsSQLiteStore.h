//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Security/SFSQLite.h>

@class NSArray, NSDate;

@interface SFAnalyticsSQLiteStore : SFSQLite
{
}

+ (id)storeWithPath:(id)arg1 schema:(id)arg2;
- (void)clearAllData;
@property(retain) NSDate *uploadDate;
- (void)removeAllSamplesForName:(id)arg1;
- (void)addSample:(id)arg1 forName:(id)arg2;
- (void)addEventDict:(id)arg1 toTable:(id)arg2;
@property(readonly) NSArray *samples;
@property(readonly) NSArray *allEvents;
@property(readonly) NSArray *softFailures;
@property(readonly) NSArray *hardFailures;
- (id)deserializedRecords:(id)arg1;
- (id)summaryCounts;
- (void)incrementSoftFailureCountForEventType:(id)arg1;
- (void)incrementHardFailureCountForEventType:(id)arg1;
- (long long)softFailureCountForEventType:(id)arg1;
- (long long)hardFailureCountForEventType:(id)arg1;
- (void)incrementSuccessCountForEventType:(id)arg1;
- (long long)successCountForEventType:(id)arg1;
- (_Bool)tryToOpenDatabase;
- (void)dealloc;

@end
