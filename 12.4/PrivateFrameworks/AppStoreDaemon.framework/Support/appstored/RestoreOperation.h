//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

#import "RestoreItemsOperationDelegate-Protocol.h"

@class NSOrderedSet, NSString, RestoreContext;

@interface RestoreOperation : ISOperation <RestoreItemsOperationDelegate>
{
    NSOrderedSet *_jobIDs;
    NSString *_restoreReason;
    RestoreContext *_context;
    _Bool _hadAccountNeededDuringDataMigratorFailure;
    _Bool _hadAutoRetrySoftFailure;
    _Bool _hadCancelRetrySoftFailure;
    _Bool _hadRestoreItemsUnavailableFailure;
}

+ (_Bool)supportsMultipleEntities;
+ (_Bool)shouldSuppressTermsAndConditionsDialogs;
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;
+ (void)resetShouldSuppressTermsAndConditionsDialogs;
@property(readonly) _Bool hadRestoreItemsUnavailableFailure; // @synthesize hadRestoreItemsUnavailableFailure=_hadRestoreItemsUnavailableFailure;
@property(readonly) _Bool hadCancelRetrySoftFailure; // @synthesize hadCancelRetrySoftFailure=_hadCancelRetrySoftFailure;
@property(readonly) _Bool hadAutoRetrySoftFailure; // @synthesize hadAutoRetrySoftFailure=_hadAutoRetrySoftFailure;
@property(readonly) _Bool hadAccountNeededDuringDataMigratorFailure; // @synthesize hadAccountNeededDuringDataMigratorFailure=_hadAccountNeededDuringDataMigratorFailure;
- (void).cxx_destruct;
- (_Bool)_preflightAccountandAddRestoreItems:(id)arg1 operations:(id)arg2 account:(id)arg3 counts:(id)arg4 error:(id *)arg5;
- (void)restoreItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)run;
@property(readonly) NSString *restoreReason;
@property(readonly) NSOrderedSet *jobIDs;
- (void)dealloc;
- (id)initWithJobIDs:(id)arg1 restoreReason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
