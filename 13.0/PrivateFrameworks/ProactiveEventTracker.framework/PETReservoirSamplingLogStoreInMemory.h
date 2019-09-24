//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveEventTracker/PETReservoirSamplingLogStore-Protocol.h>

@class NSMutableData, NSString;

@interface PETReservoirSamplingLogStoreInMemory : NSObject <PETReservoirSamplingLogStore>
{
    NSMutableData *_data;
}

- (void).cxx_destruct;
- (_Bool)attemptToRecreate;
- (_Bool)appendData:(id)arg1 andReturnMapPointer:(struct **)arg2;
- (_Bool)changeLength:(unsigned long long)arg1;
- (CDStruct_39420a03 *)headerMap:(unsigned long long *)arg1;
- (CDStruct_39420a03 *)remap:(unsigned long long *)arg1;
- (unsigned long long)currentLength;
- (void)unlock;
- (_Bool)lock;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
