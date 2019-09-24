//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentPass, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowMoreInformationStepContext : PBCodable <NSCopying>
{
    NSMutableArray *_moreInfoItems;
    NPKProtoStandalonePaymentPass *_paymentPass;
}

+ (Class)moreInfoItemsType;
@property(retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) NSMutableArray *moreInfoItems; // @synthesize moreInfoItems=_moreInfoItems;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPaymentPass;
- (id)moreInfoItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)moreInfoItemsCount;
- (void)addMoreInfoItems:(id)arg1;
- (void)clearMoreInfoItems;

@end
