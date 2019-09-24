//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCopying-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface CLSNowPlayingStreamEventMetadata : NSObject <NSCopying>
{
    NSString *_album;
    NSString *_artist;
    NSString *_title;
    NSNumber *_durationInSeconds;
    NSSet *_genres;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSSet *genres; // @synthesize genres=_genres;
@property(retain, nonatomic) NSNumber *durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *artist; // @synthesize artist=_artist;
@property(copy, nonatomic) NSString *album; // @synthesize album=_album;
- (void).cxx_destruct;
- (_Bool)isEqualToEventMetadata:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDuetKnowledgeEvent:(id)arg1;

@end
