//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIImageContent.h>

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent : _UIImageContent
{
    CIImage *_ciImage;
}

- (void).cxx_destruct;
- (id)_context;
- (void)_drawWithoutEffectInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (void)_prepareforDrawingInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (struct CGSize)sizeInPixels;
- (_Bool)canProvideFullResCGImage;
- (_Bool)isCIImage;
- (id)CIImage;
- (id)initWithScale:(double)arg1;
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;

@end

