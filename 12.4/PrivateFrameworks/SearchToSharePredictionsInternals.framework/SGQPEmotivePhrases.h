//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface SGQPEmotivePhrases : NSObject
{
    NSArray *_sentPhrases;
    NSArray *_receivedPhrases;
    struct NSDictionary *_weights;
    double _timeHalfLife;
}

- (void).cxx_destruct;
- (id)allPhraseDefsForTesting;
- (id)phrasesInMessages:(id)arg1;
- (id)initWithWeights:(struct NSDictionary *)arg1 rawPhrases:(id)arg2;
- (id)init;

@end

