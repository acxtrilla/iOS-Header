//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <vCard/CNVCardParsingConcurrencyStrategy-Protocol.h>

@class NSString;

@interface _CNVCardParsingConcurrentStrategy : NSObject <CNVCardParsingConcurrencyStrategy>
{
}

- (id)seriallyParsedData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;
- (id)parseData:(id)arg1 options:(id)arg2 resultFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

