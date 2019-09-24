//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSArray, NSString, PKPass;

@protocol PKPassLibraryDataProvider <NSObject>
@property(readonly, nonatomic) _Bool canAddPaymentPass;
- (NSString *)peerPaymentPassUniqueID;
- (PKPass *)passWithPassTypeIdentifier:(NSString *)arg1 serialNumber:(NSString *)arg2;
- (PKPass *)passWithUniqueID:(NSString *)arg1;
- (NSArray *)paymentPasses;
- (void)removePass:(PKPass *)arg1;
@end
