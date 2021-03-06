//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRContainerHelper-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>
{
}

- (id)itemIDForURL:(id)arg1 error:(id *)arg2;
- (unsigned short)br_capabilityToMoveFromURL:(id)arg1 toNewParent:(id)arg2 error:(id *)arg3;
- (id)fetchContainerForURL:(id)arg1;
- (id)fetchAllContainersByIDWithError:(id *)arg1;
- (_Bool)canFetchAllContainersByID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

