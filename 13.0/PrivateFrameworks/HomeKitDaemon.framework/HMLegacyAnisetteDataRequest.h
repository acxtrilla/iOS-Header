//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

#import <HomeKitDaemon/HMRemoteLoginMessageProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface HMLegacyAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>
{
    NSString *_dsid;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (_Bool)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDictionary *messagePayload;
@property(readonly, copy, nonatomic) NSString *xpcMessageName;
@property(readonly, copy, nonatomic) NSString *messageName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
