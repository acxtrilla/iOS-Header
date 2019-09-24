//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSNumber, NSSet, NSString;

@interface AMSDeviceOffer : NSObject <AMSBagConsumer>
{
    _Bool _downgrading;
    _Bool _subscribed;
    NSNumber *_adamId;
    NSString *_description;
    NSSet *_serialNumbers;
    NSString *_offerIdentifier;
}

+ (void)addRequiredBagKeysToAggregator:(id)arg1;
+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
@property(nonatomic, getter=isSubscribed) _Bool subscribed; // @synthesize subscribed=_subscribed;
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(nonatomic, getter=isDowngrading) _Bool downgrading; // @synthesize downgrading=_downgrading;
@property(readonly, nonatomic) NSSet *serialNumbers; // @synthesize serialNumbers=_serialNumbers;
@property(copy, nonatomic) NSString *description; // @synthesize description=_description;
@property(copy, nonatomic) NSNumber *adamId; // @synthesize adamId=_adamId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long offerType;
- (id)initWithDictionary:(id)arg1;
- (id)initWithOfferIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
