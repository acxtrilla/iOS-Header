//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "LibraryResultEnumerator-Protocol.h"

@class NSError;

@interface LibraryErrorResultEnumerator : NSObject <LibraryResultEnumerator>
{
    NSError *_error;
}

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
@property(readonly) long long resultComplexity;
- (id)initWithError:(id)arg1;

@end
