//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIKeyboardLayout : NSObject <NSSecureCoding>
{
    _Bool _usesTwoHands;
    unsigned long long _count;
    struct _ShortRect *_frames;
    unsigned long long _framesCapacity;
    char *_strings;
    unsigned long long _stringsSize;
    unsigned long long _stringsCapacity;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool usesTwoHands; // @synthesize usesTwoHands=_usesTwoHands;
- (long long)keyContainingPoint:(struct CGPoint)arg1;
- (void)enumerateKeysUsingBlock:(CDUnknownBlockType)arg1;
- (void)addKeyWithString:(id)arg1 frame:(struct CGRect)arg2;
- (void)ensureStringCapacity:(unsigned long long)arg1;
- (void)ensureFrameCapacity:(unsigned long long)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)dealloc;

@end

