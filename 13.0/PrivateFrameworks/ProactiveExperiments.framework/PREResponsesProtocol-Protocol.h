//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSNumber, NSString;

@protocol PREResponsesProtocol
- (void)registerResponse:(NSString *)arg1 position:(NSNumber *)arg2 isCanned:(_Bool)arg3 isUsingQuickResponses:(_Bool)arg4 locale:(NSString *)arg5 modelConfigPath:(NSString *)arg6;
- (void)preResponseItemsForMessage:(NSString *)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(NSArray *)arg3 language:(NSString *)arg4 modelFilePath:(NSString *)arg5 modelConfigPath:(NSString *)arg6 registerDisplayed:(_Bool)arg7 completion:(void (^)(NSArray *, NSError *))arg8;
@end

