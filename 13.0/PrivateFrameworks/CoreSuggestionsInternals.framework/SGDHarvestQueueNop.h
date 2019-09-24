//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@interface SGDHarvestQueueNop : SGDHarvestQueue
{
}

- (void)close;
- (void)countHighPriorityItems:(unsigned long long *)arg1 lowPriorityItems:(unsigned long long *)arg2;
- (unsigned long long)count;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)popByItemId:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)pop:(CDUnknownBlockType)arg1;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(_Bool)arg3 item:(id)arg4 callback:(CDUnknownBlockType)arg5;

@end
