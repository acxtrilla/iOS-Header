//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageCacheKey : NSObject
{
    UIImage *_originalImage;
    struct CGSize _pretiledSize;
}

+ (id)cacheKeyWithOriginalImage:(id)arg1 pretiledSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
