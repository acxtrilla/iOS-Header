//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2AutocompleteUserSelectedContact : PBCodable <NSCopying>
{
    int _app;
    NSString *_key;
    _Bool _wasKnownContact;
    _Bool _wasSuggestedContact;
    CDStruct_73da3db5 _has;
}

@property(nonatomic) _Bool wasKnownContact; // @synthesize wasKnownContact=_wasKnownContact;
@property(nonatomic) _Bool wasSuggestedContact; // @synthesize wasSuggestedContact=_wasSuggestedContact;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
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
- (int)StringAsApp:(id)arg1;
- (id)appAsString:(int)arg1;
@property(nonatomic) _Bool hasApp;
@property(nonatomic) int app; // @synthesize app=_app;
@property(nonatomic) _Bool hasWasKnownContact;
@property(nonatomic) _Bool hasWasSuggestedContact;
@property(readonly, nonatomic) _Bool hasKey;

@end
