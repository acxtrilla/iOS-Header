//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface SUScanOptions : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    _Bool _forced;
    NSMutableSet *_types;
    NSString *_requestedPMV;
    _Bool _MDMUseDelayPeriod;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool MDMUseDelayPeriod; // @synthesize MDMUseDelayPeriod=_MDMUseDelayPeriod;
@property(retain, nonatomic) NSString *requestedPMV; // @synthesize requestedPMV=_requestedPMV;
@property(retain, nonatomic) NSSet *types; // @synthesize types=_types;
@property(nonatomic, getter=isForced) _Bool forced; // @synthesize forced=_forced;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (void)clearTypes;
- (_Bool)findsAnyUpdate;
- (_Bool)containsType:(int)arg1;
- (void)removeType:(int)arg1;
- (void)addType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

