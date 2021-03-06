//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFMutableMessageHeaders, MFOutgoingLibraryMessageContent, MFOutgoingMultipartRelatedContent, MFOutgoingRichtextMessageContent, NSArray;

@interface MFOutgoingMessageContent : NSObject
{
    MFMutableMessageHeaders *_headers;
    NSArray *_placeholders;
}

@property(retain, nonatomic) NSArray *placeholders; // @synthesize placeholders=_placeholders;
@property(retain, nonatomic) MFMutableMessageHeaders *headers; // @synthesize headers=_headers;
- (void).cxx_destruct;
@property(readonly, nonatomic) MFOutgoingMultipartRelatedContent *multipartContent;
@property(readonly, nonatomic) MFOutgoingRichtextMessageContent *richtextContent;
@property(readonly, nonatomic) MFOutgoingLibraryMessageContent *libraryContent;
- (id)copy;

@end

