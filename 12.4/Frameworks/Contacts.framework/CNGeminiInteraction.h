//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNGeminiInteraction : NSObject
{
    long long _transport;
    long long _directionality;
    NSString *_handle;
    NSString *_contactIdentifier;
}

@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) long long directionality; // @synthesize directionality=_directionality;
@property(readonly, nonatomic) long long transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3 destinationContactIdentifier:(id)arg4;
- (id)initWithTransport:(long long)arg1 directionality:(long long)arg2 destinationHandle:(id)arg3;

@end
