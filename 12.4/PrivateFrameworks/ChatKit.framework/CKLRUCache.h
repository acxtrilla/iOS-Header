//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupport/CPLRUDictionary.h>

#import <ChatKit/CKCache-Protocol.h>

@class NSString;

@interface CKLRUCache : CPLRUDictionary <CKCache>
{
}

- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

