//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface FRSubscriptionButtonImageLoader : NSObject
{
    double _scale;
    NSDictionary *_cache;
    NSMutableArray *_subscribeRequestQueue;
    NSMutableArray *_deleteRequestQueue;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableArray *deleteRequestQueue; // @synthesize deleteRequestQueue=_deleteRequestQueue;
@property(retain, nonatomic) NSMutableArray *subscribeRequestQueue; // @synthesize subscribeRequestQueue=_subscribeRequestQueue;
@property(retain, nonatomic) NSDictionary *cache; // @synthesize cache=_cache;
@property(nonatomic) double scale; // @synthesize scale=_scale;
- (void).cxx_destruct;
- (void)requestDeleteImages:(CDUnknownBlockType)arg1;
- (void)requestSubscribeImagesForInterfaceStyle:(long long)arg1 images:(CDUnknownBlockType)arg2;
- (void)preloadImages;
- (void)dealloc;
- (id)init;

@end
