//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GenerationalStorage/NSCopying-Protocol.h>
#import <GenerationalStorage/NSSecureCoding-Protocol.h>

@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding>
{
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

+ (_Bool)supportsSecureCoding;
- (id)initWithFileDescriptor:(int)arg1 forItemAtURL:(id)arg2 allocateIfNone:(_Bool)arg3 error:(id *)arg4;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDocumentIdentifier:(id)arg1;

@end
