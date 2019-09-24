//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

#import <Transparency/TransparencyVerifiable-Protocol.h>

@class NSData, NSMutableArray, SignedLogHead, TransparencyLogEntryVerifier, TransparencyManagedDataStore;

@interface LogEntry : GPBMessage <TransparencyVerifiable>
{
}

+ (id)descriptor;
- (_Bool)verifyWithError:(id *)arg1;
@property(retain) TransparencyManagedDataStore *dataStore;
@property(retain) TransparencyLogEntryVerifier *verifier;

// Remaining properties
@property(nonatomic) _Bool hasSlh; // @dynamic hasSlh;
@property(retain, nonatomic) NSMutableArray *hashesOfPeersInPathToRootArray; // @dynamic hashesOfPeersInPathToRootArray;
@property(readonly, nonatomic) unsigned long long hashesOfPeersInPathToRootArray_Count; // @dynamic hashesOfPeersInPathToRootArray_Count;
@property(nonatomic) int logType; // @dynamic logType;
@property(copy, nonatomic) NSData *nodeBytes; // @dynamic nodeBytes;
@property(nonatomic) unsigned long long nodePosition; // @dynamic nodePosition;
@property(retain, nonatomic) SignedLogHead *slh; // @dynamic slh;

@end
