//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/CRCarPlayNavigationOwnerClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CARNavigationOwnershipManagerDelegate;

@interface CARNavigationOwnershipManager : NSObject <CRCarPlayNavigationOwnerClient>
{
    _Bool _ownershipRequested;
    NSXPCConnection *_connection;
    NSString *_identifier;
    id <CARNavigationOwnershipManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <CARNavigationOwnershipManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool ownershipRequested; // @synthesize ownershipRequested=_ownershipRequested;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)navigationOwnershipChangedTo:(unsigned long long)arg1;
- (void)_handleConnectionReset;
- (void)_setupConnection;
@property(readonly, nonatomic) NSString *lastNavigatingBundleIdentifier;
@property(readonly, nonatomic) unsigned long long owner;
- (void)releaseNavigationOwnership;
- (void)requestNavigationOwnership;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
