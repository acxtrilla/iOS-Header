//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUBufferImage-Protocol.h>
#import <NeutrinoCore/NUMutableImage-Protocol.h>

@class NURegion;

@protocol NUMutableBufferImage <NUBufferImage, NUMutableImage>
- (void)writeBufferRegion:(NURegion *)arg1 withBlock:(void (^)(id <NUMutableBufferTile>, _Bool *))arg2;
@end
