//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface GEOCategory : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    long long _geoOntologyId;
    NSString *_alias;
    int _level;
    NSMutableArray *_localizedNames;
    struct {
        unsigned int geoOntologyId:1;
    } _has;
}

+ (Class)localizedNamesType;
@property(retain, nonatomic) NSMutableArray *localizedNames; // @synthesize localizedNames=_localizedNames;
@property(nonatomic) long long geoOntologyId; // @synthesize geoOntologyId=_geoOntologyId;
@property(nonatomic) int level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)localizedNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedNamesCount;
- (void)addLocalizedNames:(id)arg1;
- (void)clearLocalizedNames;
@property(nonatomic) _Bool hasGeoOntologyId;
- (id)initWithPlaceDataCategory:(id)arg1;

@end

