//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/MTConfigDelegate-Protocol.h>

@class NSString;
@protocol AMSBagProtocol;

@interface MTConfigAMSMetricsDelegate : MTObject <MTConfigDelegate>
{
    id <AMSBagProtocol> _bag;
}

@property(retain, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
- (void).cxx_destruct;
- (id)sources;
- (id)initWithAMSBag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
