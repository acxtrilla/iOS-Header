//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VNMPUtils : NSObject
{
}

+ (long long)parseExifTimestamp:(id)arg1;
+ (void)freeVImageBuffer:(struct vImage_Buffer *)arg1;
+ (id)createErrorWithCode:(long long)arg1 andMessage:(id)arg2;
+ (unsigned long long)getHostTimeInNanos;
+ (double)getHostTime;

@end
