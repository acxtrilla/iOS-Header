//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFMailSignatureController : NSObject
{
}

- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(_Bool)arg3;
- (_Bool)isDefaultSignatureForSender:(id)arg1;
- (id)_signatureStringForSender:(id)arg1;

@end

