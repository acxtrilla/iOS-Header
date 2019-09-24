//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface NLLanguageRecognizer : NSObject
{
    void *_identifier;
    NSArray *_languageConstraints;
    NSDictionary *_languageHints;
}

+ (id)dominantLanguageForString:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *languageConstraints;
@property(copy, nonatomic) NSDictionary *languageHints;
- (void)reset;
- (void)processString:(id)arg1;
- (void)processString:(id)arg1 range:(struct _NSRange)arg2;
- (id)languageHypothesesWithMaximum:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSString *dominantLanguage;
- (void)dealloc;
- (id)init;

@end
