//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXFormatModule-Protocol.h>

@class NSString;
@protocol NFResolver;

@interface SXFormatModule : NSObject <SXFormatModule>
{
    id <NFResolver> _resolver;
}

@property(readonly, nonatomic) id <NFResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithResolver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
