//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVAccessoryItem, SVAccessoryItemContentProviding;

@protocol SVAccessoryItemContentProviderManager <NSObject>
- (void)registerAccessoryItem:(id <SVAccessoryItem>)arg1 withContentProvider:(id <SVAccessoryItemContentProviding>)arg2;
@end

