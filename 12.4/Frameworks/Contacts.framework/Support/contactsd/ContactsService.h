//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNXPCDataMapperService-Protocol.h"

@class CNContactStore, CNContactsEnvironment, CNiOSAddressBookDataMapper, NSString, NSXPCConnection;
@protocol CNContactsLogger, CNScheduler;

@interface ContactsService : NSObject <CNXPCDataMapperService>
{
    CNContactStore *_contactStore;
    CNiOSAddressBookDataMapper *_dataMapper;
    NSXPCConnection *_connection;
    id <CNScheduler> _workQueue;
    id <CNContactsLogger> _logger;
    CNContactsEnvironment *_environment;
}

@property(readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <CNScheduler> workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) __weak NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) CNiOSAddressBookDataMapper *dataMapper; // @synthesize dataMapper=_dataMapper;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (void).cxx_destruct;
- (void)bestSenderIdentityForHandle:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)geminiResultForContact:(id)arg1 substituteDefaultForDangling:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)verifyIndexWithReply:(CDUnknownBlockType)arg1;
- (void)reindexSearchableItemsWithIdentifiers:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)favoritesEntryDictionariesAtPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (_Bool)shouldNotReportFavoritesError:(id)arg1;
- (void)reportFavoritesIssue:(id)arg1;
- (void)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)changeHistoryWithFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)unregisterChangeHistoryClientIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)registerChangeHistoryClientIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)userActivityForContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 withReply:(CDUnknownBlockType)arg4;
- (void)setMeContact:(id)arg1 forContainer:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)setMeContact:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)defaultContainerIdentifierWithReply:(CDUnknownBlockType)arg1;
- (void)subgroupsOfGroupWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)groupsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)accountsMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)policyForContainerWithIdentifier:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)serverSearchContainersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)containersMatchingPredicate:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)executeSaveRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)meContactIdentifiersWithReply:(CDUnknownBlockType)arg1;
- (void)identifierWithReply:(CDUnknownBlockType)arg1;
- (void)progressiveContactsForFetchRequest:(id)arg1 progressHandler:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)encodedContactsAndCursorForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)contactsForFetchRequest:(id)arg1 withMatchInfoReply:(CDUnknownBlockType)arg2;
- (void)contactCountForFetchRequest:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (void)unifiedContactCountWithReply:(CDUnknownBlockType)arg1;
- (void)performWorkServicingSPI:(CDUnknownBlockType)arg1 authenticationFailureHandler:(CDUnknownBlockType)arg2;
- (void)performServicingRequestWork:(CDUnknownBlockType)arg1;
- (void)performWorkWithContactStore:(CDUnknownBlockType)arg1;
- (void)performAsyncWorkWithDataMapper:(CDUnknownBlockType)arg1;
- (void)performWorkWithDataMapper:(CDUnknownBlockType)arg1;
- (_Bool)clientAllowedToUseSPI:(id *)arg1;
- (void)configureServiceWithOptions:(id)arg1;
- (id)initWithDataMapper:(id)arg1 workQueue:(id)arg2 environment:(id)arg3 connection:(id)arg4;
- (id)initWithWorkQueue:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
