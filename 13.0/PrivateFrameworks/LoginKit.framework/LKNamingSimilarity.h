//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/NSSecureCoding-Protocol.h>

@interface LKNamingSimilarity : NSObject <NSSecureCoding>
{
    unsigned long long _similarity;
}

+ (_Bool)supportsSecureCoding;
+ (id)namingSimilarityWithSimilarity:(unsigned long long)arg1;
@property(nonatomic) unsigned long long similarity; // @synthesize similarity=_similarity;
- (id)init;
- (_Bool)isEqualToLKNamingSimilarity:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

