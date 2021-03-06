//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, RTMapItem;

@interface RTHistoryEntryRoute : NSObject
{
    _Bool _navigationWasInterrupted;
    NSDate *_usageDate;
    RTMapItem *_originMapItem;
    RTMapItem *_destinationMapItem;
}

@property(readonly, nonatomic) _Bool navigationWasInterrupted; // @synthesize navigationWasInterrupted=_navigationWasInterrupted;
@property(readonly, nonatomic) RTMapItem *destinationMapItem; // @synthesize destinationMapItem=_destinationMapItem;
@property(readonly, nonatomic) RTMapItem *originMapItem; // @synthesize originMapItem=_originMapItem;
@property(readonly, nonatomic) NSDate *usageDate; // @synthesize usageDate=_usageDate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUsageDate:(id)arg1 originMapItem:(id)arg2 destinationMapItem:(id)arg3 navigationWasInterrupted:(_Bool)arg4;
- (id)init;

@end

