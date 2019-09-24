//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject
{
    id _resolver;
}

+ (id)defaultContext;
+ (void)setSimulateLimitedMappingForXCTests:(_Bool)arg1;
+ (_Bool)simulateLimitedMappingForXCTests;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)clearCaches;
- (id)init;
- (id)resolveQueries:(id)arg1 error:(id *)arg2;
- (void)enumerateResolvedResultsOfQuery:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
@property(readonly) id <_LSQueryResolving> _resolver; // @dynamic _resolver;
- (id)_init;
- (id)_resolveQueries:(id)arg1 XPCConnection:(id)arg2 error:(id *)arg3;

@end
