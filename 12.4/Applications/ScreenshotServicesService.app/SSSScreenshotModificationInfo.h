//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@interface SSSScreenshotModificationInfo : NSObject <NSSecureCoding>
{
    struct SSSCropInfo _cropInfo;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) struct SSSCropInfo cropInfo; // @synthesize cropInfo=_cropInfo;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

