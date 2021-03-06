//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/NSObject-Protocol.h>

@class MCDeviceUploadCredentials, MCDeviceUploadOrganization, MCDeviceUploadSubmitDeviceRequestPayload, NSString;

@protocol MCCloudConfigurationDaemonServiceInterface <NSObject>
- (void)submitDeviceUploadRequest:(MCDeviceUploadSubmitDeviceRequestPayload *)arg1 credentials:(MCDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadSoldToIdsForOrganization:(MCDeviceUploadOrganization *)arg1 credentials:(MCDeviceUploadCredentials *)arg2 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)retrieveDeviceUploadRequestTypesWithCredentials:(MCDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)retrieveDeviceUploadOrganizationsWithCredentials:(MCDeviceUploadCredentials *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
- (void)unenrollWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)fetchConfigurationWithCompletionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (void)provisionallyEnrollWithNonce:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSDictionary *, NSError *))arg2;
@end

