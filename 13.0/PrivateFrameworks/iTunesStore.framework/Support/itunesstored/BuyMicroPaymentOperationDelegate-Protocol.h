//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ISOperationDelegate-Protocol.h"

@class BuyMicroPaymentOperation, NSString;

@protocol BuyMicroPaymentOperationDelegate <ISOperationDelegate>
- (_Bool)buyMicroPaymentOperation:(BuyMicroPaymentOperation *)arg1 shouldContinueWithNewStorefront:(NSString *)arg2;
@end
