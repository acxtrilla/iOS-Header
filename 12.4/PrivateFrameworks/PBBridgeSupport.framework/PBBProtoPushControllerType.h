//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@interface PBBProtoPushControllerType : PBCodable <NSCopying>
{
    double _intendedFireDate;
    unsigned int _controllerType;
    CDStruct_88f5f09d _has;
}

@property(nonatomic) double intendedFireDate; // @synthesize intendedFireDate=_intendedFireDate;
@property(nonatomic) unsigned int controllerType; // @synthesize controllerType=_controllerType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasIntendedFireDate;

@end
