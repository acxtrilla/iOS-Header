//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOrderedSet.h>

@interface NSOrderedSet (EmailFoundationAdditions)
- (id)ef_objectAfterObject:(id)arg1;
- (id)ef_objectBeforeObject:(id)arg1;
- (id)ef_partition:(CDUnknownBlockType)arg1;
- (unsigned long long)ef_countObjectsPassingTest:(CDUnknownBlockType)arg1;
- (_Bool)ef_all:(CDUnknownBlockType)arg1;
- (_Bool)ef_any:(CDUnknownBlockType)arg1;
- (id)ef_anyPassingTest:(CDUnknownBlockType)arg1;
- (id)ef_filter:(CDUnknownBlockType)arg1;
- (id)ef_flatMap:(CDUnknownBlockType)arg1;
- (id)ef_compactMap:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSOrderedSet *ef_flatten;
@end
