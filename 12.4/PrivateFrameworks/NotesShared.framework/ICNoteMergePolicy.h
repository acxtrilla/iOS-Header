//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSMergePolicy.h>

@interface ICNoteMergePolicy : NSMergePolicy
{
}

- (id)initWithMergeType:(unsigned long long)arg1;
- (id)init;
- (_Bool)resolveConstraintConflicts:(id)arg1 error:(id *)arg2;
- (void)mergeEncryptedData:(id)arg1 forNote:(id)arg2 mergeConflict:(id)arg3;
- (_Bool)resolveConflicts:(id)arg1 error:(id *)arg2;

@end

