//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKProductsRequestInternal : NSObject
{
    NSSet *_productIdentifiers;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (id)init;

@end
