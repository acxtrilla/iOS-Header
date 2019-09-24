//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ReminderKit/NSSecureCoding-Protocol.h>

@interface CRVectorTimestampElement : NSObject <NSSecureCoding>
{
    unsigned long long _clock;
    unsigned long long _subclock;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long subclock; // @synthesize subclock=_subclock;
@property(nonatomic) unsigned long long clock; // @synthesize clock=_clock;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)rem_compareToVectorTimestampElement:(id)arg1;

@end
