//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;
    _Bool _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)setShouldCallImmediately:(_Bool)arg1;
- (_Bool)shouldCallImmediately;
- (id)init;

@end
