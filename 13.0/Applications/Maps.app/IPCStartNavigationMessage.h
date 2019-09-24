//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IPCMessageObject.h"

@class IPCLoadDirectionsMessage, NSData;

__attribute__((visibility("hidden")))
@interface IPCStartNavigationMessage : IPCMessageObject
{
    _Bool _originIsWatch;
    IPCLoadDirectionsMessage *_loadDirectionsMessage;
    NSData *_routeID;
    unsigned long long _routeIndex;
}

+ (id)startNavigationMessageWithLoadDirectionsMessage:(id)arg1;
@property(nonatomic) unsigned long long routeIndex; // @synthesize routeIndex=_routeIndex;
@property(copy, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(nonatomic) _Bool originIsWatch; // @synthesize originIsWatch=_originIsWatch;
@property(retain, nonatomic) IPCLoadDirectionsMessage *loadDirectionsMessage; // @synthesize loadDirectionsMessage=_loadDirectionsMessage;
- (void).cxx_destruct;
- (_Bool)matchesLoadDirectionsMessage:(id)arg1;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end
