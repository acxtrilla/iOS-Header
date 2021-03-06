//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFiTunesCollectionObject.h>

#import <WorkflowKit/MTLJSONSerializing-Protocol.h>

@class NSDictionary, NSString;

@interface WFiTunesPodcastObject : WFiTunesCollectionObject <MTLJSONSerializing>
{
    NSString *_podcastUUID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *podcastUUID; // @synthesize podcastUUID=_podcastUUID;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 identifier:(id)arg2 podcastUUID:(id)arg3 kind:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

