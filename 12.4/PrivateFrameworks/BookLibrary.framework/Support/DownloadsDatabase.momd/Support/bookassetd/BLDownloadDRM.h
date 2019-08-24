//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BLSinfsArray, NSArray;

__attribute__((visibility("hidden")))
@interface BLDownloadDRM : NSObject
{
    NSArray *_sinfs;
}

@property(retain, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;
- (void).cxx_destruct;
- (id)_sinfsArrayWithDataKey:(id)arg1;
@property(readonly) BLSinfsArray *sinfsArray;
- (id)sinfForIdentifier:(long long)arg1;
@property(readonly) BLSinfsArray *pinfsArray;
@property(readonly, getter=isDRMFree) _Bool DRMFree;
- (id)firstDataForSinfDataKey:(id)arg1;
- (id)initWithSinfArray:(id)arg1;

@end
