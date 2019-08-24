//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionTaskDependency.h>

@class NSURLSessionTask, NSURLSessionTaskDependencyDescription;

__attribute__((visibility("hidden")))
@interface __NSCFURLSessionTaskDependency : NSURLSessionTaskDependency
{
    NSURLSessionTaskDependencyDescription *_taskDependencyDescription;
    NSURLSessionTask *_parentTask;
    NSURLSessionTask *_mainDocumentTask;
}

+ (id)taskDependencyWithMainDocumentTask:(id)arg1 taskDependencyDescription:(id)arg2;
+ (id)taskDependencyWithMainDocumentTask:(id)arg1;
+ (id)taskDependencyWithParentTask:(id)arg1 priority:(float)arg2 exclusive:(_Bool)arg3;
- (id)mainDocumentTask;
- (id)parentTask;
- (void)setTaskDependencyDescription:(id)arg1;
- (id)taskDependencyDescription;
- (void)dealloc;
- (id)init;

@end
