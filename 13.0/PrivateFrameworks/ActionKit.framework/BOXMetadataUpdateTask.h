//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BOXMetadataUpdateTask : NSObject
{
    unsigned long long _operation;
    NSString *_path;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(nonatomic) unsigned long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (id)BOXMetadataUpdateOperationToString:(unsigned long long)arg1;
- (void)validate;
- (id)initWithOperation:(unsigned long long)arg1 path:(id)arg2 value:(id)arg3;

@end
