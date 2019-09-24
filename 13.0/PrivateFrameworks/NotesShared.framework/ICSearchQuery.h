//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSSearchQuery, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_semaphore;

@interface ICSearchQuery : NSObject
{
    _Bool _wasForceStopped;
    _Bool _modernResultsOnly;
    NSDictionary *_queryResults;
    NSString *_highlightString;
    unsigned long long _rankingInterpretation;
    NSString *_queryString;
    NSArray *_rankingQueries;
    CSSearchQuery *_searchQuery;
    NSObject<OS_dispatch_semaphore> *_synchronousSemaphore;
}

+ (id)defaultAttributesToReturnFromCoreSpotlight;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *synchronousSemaphore; // @synthesize synchronousSemaphore=_synchronousSemaphore;
@property(retain, nonatomic) CSSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) NSArray *rankingQueries; // @synthesize rankingQueries=_rankingQueries;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property(nonatomic) _Bool modernResultsOnly; // @synthesize modernResultsOnly=_modernResultsOnly;
@property(nonatomic) _Bool wasForceStopped; // @synthesize wasForceStopped=_wasForceStopped;
@property(nonatomic) unsigned long long rankingInterpretation; // @synthesize rankingInterpretation=_rankingInterpretation;
@property(retain, nonatomic) NSString *highlightString; // @synthesize highlightString=_highlightString;
@property(retain, nonatomic) NSDictionary *queryResults; // @synthesize queryResults=_queryResults;
- (void).cxx_destruct;
- (id)description;
- (void)cancel;
- (void)forceStop;
- (_Bool)run:(id *)arg1;
- (void)setup;
- (id)initWithQueryString:(id)arg1 rankingQueries:(id)arg2 rankingInterpretation:(unsigned long long)arg3 highlightString:(id)arg4 modernResultsOnly:(_Bool)arg5;

@end
