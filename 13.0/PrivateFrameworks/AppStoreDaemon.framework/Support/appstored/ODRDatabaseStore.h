//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteDatabaseStore.h"

@interface ODRDatabaseStore : SQLiteDatabaseStore
{
}

+ (_Bool)createOrMigrateStoreUsingSchema:(id)arg1;
+ (id)storeDescriptor;
+ (id)sharedStore;
- (void)modifyUsingTransaction:(CDUnknownBlockType)arg1;

@end
