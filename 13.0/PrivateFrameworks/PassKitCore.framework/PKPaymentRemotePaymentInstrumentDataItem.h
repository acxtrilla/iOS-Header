//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class CNContact, PKPaymentApplication, PKRemoteDevice, PKRemotePaymentInstrument;

@interface PKPaymentRemotePaymentInstrumentDataItem : PKPaymentDataItem
{
}

+ (long long)dataType;
- (_Bool)isValidWithError:(id *)arg1;
- (unsigned long long)peerPaymentAccountState;
- (id)peerPaymentAccountBalance;
- (_Bool)hasAssociatedPeerPaymentAccount;
@property(readonly, nonatomic) _Bool requiresBillingAddress;
@property(readonly, nonatomic) CNContact *billingAddress;
@property(readonly, nonatomic) PKPaymentApplication *paymentApplication;
@property(readonly, nonatomic) PKRemotePaymentInstrument *remotePaymentInstrument;
@property(readonly, nonatomic) PKRemoteDevice *remoteDevice;
- (id)errors;

@end
