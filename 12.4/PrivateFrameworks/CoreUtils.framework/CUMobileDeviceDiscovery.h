//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CURunLoopThread;
@protocol OS_dispatch_queue;

@interface CUMobileDeviceDiscovery : NSObject
{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    CURunLoopThread *_mdRunLoopThread;
    unsigned int _changeFlags;
    unsigned int _discoveryFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _deviceFoundHandler;
    CDUnknownBlockType _deviceLostHandler;
    CDUnknownBlockType _deviceChangedHandler;
}

+ (void)getDevicesWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(nonatomic) unsigned int discoveryFlags; // @synthesize discoveryFlags=_discoveryFlags;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
- (void).cxx_destruct;
- (void)_mdThreadFinalize;
- (void)_mdThreadInitialize;
- (void)_invalidated;
- (void)invalidate;
- (void)activate;
- (id)init;

@end

