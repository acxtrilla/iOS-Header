//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchUsersResultObject : CATTaskResultObject
{
    NSArray *_users;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *users; // @synthesize users=_users;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsers:(id)arg1;

@end

