//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface ImportJobsForDemotedAppsOperation : ISOperation
{
    NSArray *_bundleIDs;
    _Bool _userInitiated;
}

+ (void)_enumeratePlaceholdersUsingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;
- (void).cxx_destruct;
- (void)_queueSystemAppRequestForBundleID:(id)arg1;
- (void)_presentDialogForError:(id)arg1 accountID:(id)arg2 accountName:(id)arg3 proxy:(id)arg4;
- (void)_enumerateDemotedApplicationProxiesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_appleIDForApp:(id)arg1 error:(id *)arg2;
- (void)run;
- (id)initWithBundleIDs:(id)arg1;
- (id)init;

@end

