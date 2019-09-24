//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBShareFileIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBShareFileIntentResponse : PBCodable <_INPBShareFileIntentResponse, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int confirm:1;
        unsigned int shareMode:1;
        unsigned int success:1;
    } _has;
    _Bool _confirm;
    _Bool _success;
    _Bool __encodeLegacyGloryData;
    int _shareMode;
    NSArray *_recipients;
}

+ (_Bool)supportsSecureCoding;
+ (Class)recipientsType;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) int shareMode; // @synthesize shareMode=_shareMode;
@property(copy, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(nonatomic) _Bool confirm; // @synthesize confirm=_confirm;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
@property(nonatomic) _Bool hasSuccess;
- (int)StringAsShareMode:(id)arg1;
- (id)shareModeAsString:(int)arg1;
@property(nonatomic) _Bool hasShareMode;
- (id)recipientsAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long recipientsCount;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
@property(nonatomic) _Bool hasConfirm;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
