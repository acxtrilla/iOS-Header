//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKEventStore;

__attribute__((visibility("hidden")))
@interface EKEventStoreWeakWrapper : NSObject
{
    void *_unsafeRawPointer;
    EKEventStore *_weakEventStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) void *unsafeRawPointer;
@property(readonly, nonatomic) EKEventStore *weakEventStore;
- (id)initWithEventStore:(id)arg1;

@end
