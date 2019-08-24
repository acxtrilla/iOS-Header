//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIImageAsset.h>

@class CUICatalog, NSData;

__attribute__((visibility("hidden")))
@interface _UIImageStackImageAsset : UIImageAsset
{
    CUICatalog *_catalog;
    NSData *_stackData;
}

@property(copy, nonatomic) NSData *stackData; // @synthesize stackData=_stackData;
@property(retain, nonatomic) CUICatalog *catalog; // @synthesize catalog=_catalog;
- (void).cxx_destruct;
- (id)imageWithTraitCollection:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

@end
