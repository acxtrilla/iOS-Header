//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSData;

@protocol CDPKeychainCircleProxy <NSObject>
- (_Bool)requiresInitialSync;
- (_Bool)supportsInteractiveAuth;
- (_Bool)isComplete;
- (NSData *)processIncomingPayload:(NSData *)arg1 error:(id *)arg2;
- (NSData *)initiatingPayload:(id *)arg1;
@end
