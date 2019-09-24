//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDTLVProtocol-Protocol.h>
#import <HomeKitDaemon/NSCopying-Protocol.h>

@class HMDNetworkRouterCredential, HMDNetworkRouterLANFirewallConfiguration, HMDNetworkRouterWANFirewallConfiguration, HMDTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterClientConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    HMDTLVUnsignedNumberValue *_clientIdentifier;
    HMDTLVUnsignedNumberValue *_interfaceIdentifier;
    HMDTLVUnsignedNumberValue *_lanIdentifier;
    HMDNetworkRouterCredential *_credential;
    HMDNetworkRouterWANFirewallConfiguration *_wanFirewallConfiguration;
    HMDNetworkRouterLANFirewallConfiguration *_lanFirewallConfiguration;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) HMDNetworkRouterLANFirewallConfiguration *lanFirewallConfiguration; // @synthesize lanFirewallConfiguration=_lanFirewallConfiguration;
@property(retain, nonatomic) HMDNetworkRouterWANFirewallConfiguration *wanFirewallConfiguration; // @synthesize wanFirewallConfiguration=_wanFirewallConfiguration;
@property(retain, nonatomic) HMDNetworkRouterCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *lanIdentifier; // @synthesize lanIdentifier=_lanIdentifier;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *interfaceIdentifier; // @synthesize interfaceIdentifier=_interfaceIdentifier;
@property(retain, nonatomic) HMDTLVUnsignedNumberValue *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithClientIdentifier:(id)arg1 interfaceIdentifier:(id)arg2 lanIdentifier:(id)arg3 credential:(id)arg4 wanFirewallConfiguration:(id)arg5 lanFirewallConfiguration:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
