//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariSafeBrowsingUserActionAfterSeeingWarningEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _action;
    CDStruct_399b966a _has;
}

@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsAction:(id)arg1;
- (id)actionAsString:(int)arg1;
@property(nonatomic) _Bool hasAction;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) _Bool hasTimestamp;

@end

