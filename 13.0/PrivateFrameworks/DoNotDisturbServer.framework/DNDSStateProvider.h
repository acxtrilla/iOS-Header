//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DNDState;
@protocol DNDSStateProviderDataSource;

@interface DNDSStateProvider : NSObject
{
    DNDState *_lastCalculatedState;
    id <DNDSStateProviderDataSource> _dataSource;
}

@property(nonatomic) __weak id <DNDSStateProviderDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(copy) DNDState *lastCalculatedState; // @synthesize lastCalculatedState=_lastCalculatedState;
- (void).cxx_destruct;
- (void)recalculateState;

@end
