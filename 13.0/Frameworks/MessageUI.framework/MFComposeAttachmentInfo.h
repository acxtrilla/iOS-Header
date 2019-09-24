//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailSupport/MSAttachmentInfo.h>

@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo
{
    _Bool _isBasicImage;
    _Bool _isDisplayableImage;
    NSString *_className;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) _Bool isDisplayableImage; // @synthesize isDisplayableImage=_isDisplayableImage;
@property(readonly, nonatomic) _Bool isBasicImage; // @synthesize isBasicImage=_isBasicImage;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(_Bool)arg3 isDisplayableImage:(_Bool)arg4 className:(id)arg5;

@end
