//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatforms/ADAttribution_XPC-Protocol.h>

@interface ADAttribution : NSObject <ADAttribution_XPC>
{
}

+ (id)sharedInstance;
- (void)setStocksAdEnabled:(_Bool)arg1;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;

@end
