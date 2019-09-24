//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/NSCopying-Protocol.h>

@class NSDictionary, NSString, NTPBTopStoriesConfig;

@interface FCTopStoriesConfiguration : NSObject <NSCopying>
{
    NTPBTopStoriesConfig *_pbConfig;
    NSDictionary *_configDict;
    _Bool _promotingEnabled;
    NSString *_channelID;
    NSDictionary *_styleConfigurations;
    long long _storyTypeTimeout;
}

@property(readonly, nonatomic) long long storyTypeTimeout; // @synthesize storyTypeTimeout=_storyTypeTimeout;
@property(readonly, nonatomic) NSDictionary *styleConfigurations; // @synthesize styleConfigurations=_styleConfigurations;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic, getter=isPromotingEnabled) _Bool promotingEnabled; // @synthesize promotingEnabled=_promotingEnabled;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithPBTopStoriesConfig:(id)arg1;

@end
