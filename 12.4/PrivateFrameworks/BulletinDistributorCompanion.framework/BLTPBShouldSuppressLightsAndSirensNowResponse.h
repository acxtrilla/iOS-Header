//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BulletinDistributorCompanion/NSCopying-Protocol.h>

@interface BLTPBShouldSuppressLightsAndSirensNowResponse : PBCodable <NSCopying>
{
    _Bool _shouldSuppress;
    struct {
        unsigned int shouldSuppress:1;
    } _has;
}

@property(nonatomic) _Bool shouldSuppress; // @synthesize shouldSuppress=_shouldSuppress;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasShouldSuppress;

@end
