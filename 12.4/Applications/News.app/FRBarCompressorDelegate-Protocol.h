//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRBarCompressor;

@protocol FRBarCompressorDelegate <NSObject>

@optional
- (void)barCompressor:(FRBarCompressor *)arg1 didChangeToState:(long long)arg2;
- (void)barCompressorScrollViewDidScrollOffTop:(FRBarCompressor *)arg1;
- (void)barCompressorScrollViewDidHitTop:(FRBarCompressor *)arg1;
@end

