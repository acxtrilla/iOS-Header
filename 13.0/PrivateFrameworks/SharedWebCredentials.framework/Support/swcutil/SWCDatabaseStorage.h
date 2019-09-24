//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSOrderedSet;

@interface SWCDatabaseStorage : NSObject <NSSecureCoding>
{
    long long _databaseVersion;
    NSOrderedSet *_entries;
    NSDictionary *_settings;
    NSNumber *_launchServicesDatabaseGeneration;
    NSData *_enterpriseState;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSData *enterpriseState; // @synthesize enterpriseState=_enterpriseState;
@property(copy) NSNumber *launchServicesDatabaseGeneration; // @synthesize launchServicesDatabaseGeneration=_launchServicesDatabaseGeneration;
@property(copy) NSDictionary *settings; // @synthesize settings=_settings;
@property(copy) NSOrderedSet *entries; // @synthesize entries=_entries;
@property long long databaseVersion; // @synthesize databaseVersion=_databaseVersion;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
