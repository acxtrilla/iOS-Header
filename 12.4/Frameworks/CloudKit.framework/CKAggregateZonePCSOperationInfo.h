//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKDatabaseOperationInfo.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordZone, NSArray;

@interface CKAggregateZonePCSOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    NSArray *_sourceZoneIDs;
    CKRecordZone *_targetZone;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) CKRecordZone *targetZone; // @synthesize targetZone=_targetZone;
@property(retain, nonatomic) NSArray *sourceZoneIDs; // @synthesize sourceZoneIDs=_sourceZoneIDs;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
