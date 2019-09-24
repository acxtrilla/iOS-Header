//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriInstrumentation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol SISchemaClientEventMetadata <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) long long eventGeneratedRelativeToBootTimeTimestampNs;
@property(copy, nonatomic) NSString *eventGeneratedTimestampRefId;
@property(copy, nonatomic) NSData *siriDeviceID;
@property(copy, nonatomic) NSData *turnID;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
