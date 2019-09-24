//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKPaymentServiceDelegate-Protocol.h"

@class NSString, PKPassLibrary, PKPaymentService;
@protocol OS_dispatch_queue, TransitPassManagerDelegate;

__attribute__((visibility("hidden")))
@interface TransitPassManager : NSObject <PKPaymentServiceDelegate>
{
    NSObject<OS_dispatch_queue> *_libraryQueue;
    PKPassLibrary *_libraryToNotUseDirectly;
    id <TransitPassManagerDelegate> _delegate;
    PKPaymentService *_paymentService;
}

@property(readonly, nonatomic) PKPaymentService *paymentService; // @synthesize paymentService=_paymentService;
@property(nonatomic) __weak id <TransitPassManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (id)currencyAmountForRoute:(id)arg1;
- (id)transitSystemsForRoute:(id)arg1;
- (void)_passKitLibraryMayHaveChanged;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_passKitLibraryDidChange:(id)arg1;
- (void)_registerDisplayedTransitMessage:(id)arg1;
- (void)_transitMessageForRouteInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerDisplayedTransitMessage:(id)arg1;
- (void)fetchTransitMessageForRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLibrary:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
