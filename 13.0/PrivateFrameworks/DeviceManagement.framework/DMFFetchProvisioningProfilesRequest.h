//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFFetchProvisioningProfilesRequest : DMFTaskRequest
{
    _Bool _managedOnly;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)isPermittedOnUserConnection;
+ (_Bool)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (Class)whitelistedClassForResultObject;
@property(nonatomic) _Bool managedOnly; // @synthesize managedOnly=_managedOnly;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
