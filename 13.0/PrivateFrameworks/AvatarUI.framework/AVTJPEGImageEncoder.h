//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTImageEncoder-Protocol.h>

@class NSString;

@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder>
{
    double _compressionQuality;
}

@property(readonly, nonatomic) double compressionQuality; // @synthesize compressionQuality=_compressionQuality;
- (id)fileExtension;
- (id)dataFromImage:(id)arg1;
- (id)imageFromData:(id)arg1 error:(id *)arg2;
- (id)imageFromURL:(id)arg1 error:(id *)arg2;
- (id)initWithCompressionQuality:(double)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

