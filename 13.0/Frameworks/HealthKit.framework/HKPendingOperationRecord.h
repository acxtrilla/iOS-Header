//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HKPendingOperationRecord : NSObject
{
    CDUnknownBlockType _operationHandler;
    CDUnknownBlockType _completionHandler;
    long long _errorCount;
}

+ (id)pendingOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) long long errorCount; // @synthesize errorCount=_errorCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType operationHandler; // @synthesize operationHandler=_operationHandler;
- (void).cxx_destruct;

@end
