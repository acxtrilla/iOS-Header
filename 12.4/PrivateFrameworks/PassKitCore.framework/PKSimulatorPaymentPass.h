//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentPass.h>

@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)localizedDescription;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;

@end

