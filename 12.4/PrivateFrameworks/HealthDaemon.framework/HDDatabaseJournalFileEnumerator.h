//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray, NSString;
@protocol HDDatabaseJournalFileEnumeratorTestsDelegate;

@interface HDDatabaseJournalFileEnumerator : NSObject
{
    long long _currentFileIndex;
    _Bool _hasLoadedFiles;
    long long _maxAllowedOpenFileHandleCount;
    long long _totalFilesCount;
    NSError *_cachedError;
    NSString *_path;
    NSMutableArray *_remainingJournalFileNames;
    NSMutableArray *_openJournalFiles;
    id <HDDatabaseJournalFileEnumeratorTestsDelegate> _unitTestDelegate;
}

@property(nonatomic) __weak id <HDDatabaseJournalFileEnumeratorTestsDelegate> unitTestDelegate; // @synthesize unitTestDelegate=_unitTestDelegate;
@property(retain, nonatomic) NSMutableArray *openJournalFiles; // @synthesize openJournalFiles=_openJournalFiles;
@property(retain, nonatomic) NSMutableArray *remainingJournalFileNames; // @synthesize remainingJournalFileNames=_remainingJournalFileNames;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)setMaxAllowedOpenFileHandleCount:(long long)arg1;
- (long long)maxAllowedOpenFileHandleCount;
- (unsigned long long)_totalOpenFileHandleCount;
- (id)_fileHandleForFileName:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (id)_createFileHandlesForFileNames:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) unsigned long long currentJournalFileIndex;
@property(readonly, nonatomic) unsigned long long totalJournalFileCount;
@property(readonly, nonatomic, getter=hasMoreJournalFiles) _Bool moreJournalFiles;
- (_Bool)_updateRollingBufferIfRequiredWithError:(id *)arg1;
- (id)nextJournalFileWithError:(id *)arg1;
- (_Bool)loadSortedJournalFilesWithError:(id *)arg1;
- (void)closeJournalFiles;
@property(readonly, nonatomic) _Bool hasFiles;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

