//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection, SBCClientConfiguration, SBCXPCServiceInterface;
@protocol OS_dispatch_queue;

@interface SBCXPCService : NSObject
{
    _Bool _connectionConfigured;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    SBCClientConfiguration *_clientConfiguration;
    SBCXPCServiceInterface *_XPCServiceInterface;
}

+ (id)newListener;
+ (id)XPCInterfaceDebugDescription;
+ (Class)XPCServiceInterfaceClass;
@property(getter=isConnectionConfigured) _Bool connectionConfigured; // @synthesize connectionConfigured=_connectionConfigured;
@property(readonly) SBCXPCServiceInterface *XPCServiceInterface; // @synthesize XPCServiceInterface=_XPCServiceInterface;
@property(readonly) SBCClientConfiguration *clientConfiguration; // @synthesize clientConfiguration=_clientConfiguration;
@property(retain) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)setClientConfiguration:(id)arg1;
- (void)_serverDidLaunch;
- (void)closeServiceConnection;
- (void)didConnectToService;
- (void)_openServiceConnection;
- (id)newServiceConnection;
- (void)dealloc;
- (id)initWithClientConfiguration:(id)arg1;

@end
