//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface _KSControlFileController : NSObject
{
    NSURL *_url;
}

- (void).cxx_destruct;
- (id)description;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)reset;
- (_Bool)checkIfExists;
- (id)initWithName:(id)arg1 inDirectory:(id)arg2;

@end
