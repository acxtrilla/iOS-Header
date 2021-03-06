//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURLSessionTask, VSAuditToken, VSOptional, VSStoreURLBag;

@interface VSVerificationStateResetOperation : VSAsyncOperation
{
    VSAuditToken *_auditToken;
    VSOptional *_result;
    VSStoreURLBag *_bag;
    NSURLSessionTask *_resetStateTask;
}

@property(retain, nonatomic) NSURLSessionTask *resetStateTask; // @synthesize resetStateTask=_resetStateTask;
@property(retain, nonatomic) VSStoreURLBag *bag; // @synthesize bag=_bag;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (void)_resetVerificationStateWithURL:(id)arg1;
- (id)init;

@end

