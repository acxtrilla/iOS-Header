//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/NSObject-Protocol.h>

@class NSString;

@protocol ECMIMECharset <NSObject>
@property(readonly, nonatomic) _Bool canBeUsedForOutgoingMessages;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *charsetName;
@property(readonly) unsigned long long encoding;
@end
