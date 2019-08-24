//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/NSObject-Protocol.h>

@class HFItem, HFItemUpdateRequest, NAFuture, NSSet;

@protocol HFItemUpdating <NSObject>
- (NSSet *)childItemsForItem:(HFItem *)arg1;
- (NAFuture *)performItemUpdateRequest:(HFItemUpdateRequest *)arg1;
@end
