//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface PFTraceBufferRegistry : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (void)reset;
+ (id)allRecordsForTraceBuffersNamed:(id)arg1;
+ (id)allRecords;
+ (id)contextNames;
+ (id)traceBufferNames;
+ (id)traceBufferNamed:(id)arg1 factory:(CDUnknownBlockType)arg2;
+ (id)traceBufferNamed:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)reset;
- (id)allRecordsForTraceBuffersNamed:(id)arg1;
- (id)contextNames;
- (id)traceBufferNames;
- (id)traceBufferNamed:(id)arg1 factory:(CDUnknownBlockType)arg2;
- (id)init;

@end

