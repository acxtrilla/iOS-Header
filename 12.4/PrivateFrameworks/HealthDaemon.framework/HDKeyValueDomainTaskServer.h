//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStandardTaskServer.h>

#import <HealthDaemon/HKKeyValueDomainServerInterface-Protocol.h>
#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class HDKeyValueDomain;

@interface HDKeyValueDomainTaskServer : HDStandardTaskServer <HKKeyValueDomainServerInterface, HKUnitTestingTaskServerInterface>
{
    HDKeyValueDomain *_keyValueDomain;
}

+ (_Bool)validateConfiguration:(id)arg1 error:(out id *)arg2;
+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
- (void).cxx_destruct;
- (void)remote_allValuesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_stringForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_dateForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_numberForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_removeValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setValuesWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_setDate:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)remote_setNumber:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)_unitTest_overrideKeyValueDomainCategory:(long long)arg1;
- (Class)_keyValueEntityClass;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;

@end
