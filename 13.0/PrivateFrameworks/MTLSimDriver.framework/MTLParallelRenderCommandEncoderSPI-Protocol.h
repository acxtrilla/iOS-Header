//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLParallelRenderCommandEncoder-Protocol.h>

@protocol MTLRenderCommandEncoder;

@protocol MTLParallelRenderCommandEncoderSPI <MTLParallelRenderCommandEncoder>
@property _Bool separateCommits;

@optional
- (id <MTLRenderCommandEncoder>)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 *)arg1 capacity:(unsigned long long)arg2;
@end
