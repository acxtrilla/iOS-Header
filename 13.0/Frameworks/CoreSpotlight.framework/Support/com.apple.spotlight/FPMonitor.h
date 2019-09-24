//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol FPMonitorDelegate;

@interface FPMonitor : NSObject
{
    id <FPMonitorDelegate> _delegate;
    id _monitoringContext;
    NSMutableDictionary *__domainsByPath;
}

@property(retain, nonatomic) NSMutableDictionary *_domainsByPath; // @synthesize _domainsByPath=__domainsByPath;
@property(retain, nonatomic) id monitoringContext; // @synthesize monitoringContext=_monitoringContext;
@property(nonatomic) __weak id <FPMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)beginMonitoring;
@property(readonly, copy, nonatomic) NSDictionary *domainsByPath;
- (id)initWithDelegate:(id)arg1;

@end
