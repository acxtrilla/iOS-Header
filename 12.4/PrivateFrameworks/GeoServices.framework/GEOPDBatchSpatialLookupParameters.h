//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBatchSpatialLookupParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_spatialEventLookups;
    NSMutableArray *_spatialPlaceLookups;
}

+ (Class)spatialEventLookupType;
+ (Class)spatialPlaceLookupType;
@property(retain, nonatomic) NSMutableArray *spatialEventLookups; // @synthesize spatialEventLookups=_spatialEventLookups;
@property(retain, nonatomic) NSMutableArray *spatialPlaceLookups; // @synthesize spatialPlaceLookups=_spatialPlaceLookups;
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
- (id)spatialEventLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialEventLookupsCount;
- (void)addSpatialEventLookup:(id)arg1;
- (void)clearSpatialEventLookups;
- (id)spatialPlaceLookupAtIndex:(unsigned long long)arg1;
- (unsigned long long)spatialPlaceLookupsCount;
- (void)addSpatialPlaceLookup:(id)arg1;
- (void)clearSpatialPlaceLookups;

@end
