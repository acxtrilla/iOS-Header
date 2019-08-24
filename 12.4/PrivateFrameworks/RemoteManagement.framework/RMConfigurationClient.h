//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteManagement/RMConfigurationXPCInterface-Protocol.h>

@class NSXPCConnection;

@interface RMConfigurationClient : NSObject <RMConfigurationXPCInterface>
{
    NSXPCConnection *_connection;
}

+ (id)v2MDMServiceClient;
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)uprootMDMConfiguration:(CDUnknownBlockType)arg1;
- (void)notifyConfigurationChanged:(CDUnknownBlockType)arg1;
- (void)confirmProfileServiceInstall:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)processProfileService:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithServiceName:(id)arg1;

@end
