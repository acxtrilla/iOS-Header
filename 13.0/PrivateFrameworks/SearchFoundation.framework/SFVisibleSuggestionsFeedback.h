//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

@class NSArray;

@interface SFVisibleSuggestionsFeedback : SFFeedback
{
    NSArray *_suggestions;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSuggestions:(id)arg1;

@end
