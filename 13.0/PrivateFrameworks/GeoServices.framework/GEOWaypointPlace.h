//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOWaypointPlace : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_158f0f88 _readerMark;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_roadAccessPoints;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapRegion:1;
        unsigned int read_roadAccessPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_roadAccessPoints:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)roadAccessPointType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) _Bool hasMapRegion;
- (void)_readMapRegion;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)_addNoFlagsRoadAccessPoint:(id)arg1;
- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
@property(retain, nonatomic) NSMutableArray *roadAccessPoints;
- (void)_readRoadAccessPoints;
@property(retain, nonatomic) GEOLatLng *center;
@property(readonly, nonatomic) _Bool hasCenter;
- (void)_readCenter;

@end
