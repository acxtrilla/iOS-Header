//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation
{
    _Bool mParseImage;
    CRKBook *_book;
}

@property(readonly, nonatomic) CRKBook *book; // @synthesize book=_book;
- (void).cxx_destruct;
- (void)parseBookContentsOperationDidFinish:(id)arg1;
- (void)parseContentsFilePathOperationDidFinish:(id)arg1;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithBook:(id)arg1 parseImage:(_Bool)arg2;

@end
