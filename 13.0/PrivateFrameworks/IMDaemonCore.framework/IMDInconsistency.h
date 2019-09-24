//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSDate;

@interface IMDInconsistency : NSObject
{
    CUTWeakReference *_contextWeakReference;
    NSDate *_firstOccurrence;
    unsigned long long _count;
}

@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly) NSDate *firstOccurrence; // @synthesize firstOccurrence=_firstOccurrence;
- (_Bool)shouldJettison:(id *)arg1;
@property(nonatomic) __weak id context;
- (id)init;

@end
