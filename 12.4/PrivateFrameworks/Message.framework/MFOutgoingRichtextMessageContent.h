//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent
{
    _Bool _textPartsAreHTML;
    MFPlainTextDocument *_plaintextAlternative;
    NSArray *_mixedContent;
}

@property(retain, nonatomic) NSArray *mixedContent; // @synthesize mixedContent=_mixedContent;
@property(retain, nonatomic) MFPlainTextDocument *plaintextAlternative; // @synthesize plaintextAlternative=_plaintextAlternative;
@property(nonatomic) _Bool textPartsAreHTML; // @synthesize textPartsAreHTML=_textPartsAreHTML;
- (id)richtextContent;
- (id)copy;
- (void)dealloc;

@end
