//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface _MKPlaceAttributionLabel : NSObject
{
    UIImage *image;
    double textBaselineOffset;
    double imageBaselineOffset;
    NSString *imagePlaceholder;
}

@property(retain) NSString *imagePlaceholder; // @synthesize imagePlaceholder;
@property double imageBaselineOffset; // @synthesize imageBaselineOffset;
@property double textBaselineOffset; // @synthesize textBaselineOffset;
@property(retain) UIImage *image; // @synthesize image;
- (void).cxx_destruct;
- (id)attributionWithString:(id)arg1;

@end
