//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, UIDictationInterpretation;

__attribute__((visibility("hidden")))
@interface UIDictationInterpretationGroup : NSObject <NSSecureCoding>
{
    NSArray *_interpretations;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *interpretations; // @synthesize interpretations=_interpretations;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) UIDictationInterpretation *bestInterpretation;
@property(readonly, nonatomic) double bestConfidenceScore;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterpretations:(id)arg1;

@end

