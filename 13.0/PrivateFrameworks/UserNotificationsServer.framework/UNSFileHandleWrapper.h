//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSString;

@interface UNSFileHandleWrapper : NSObject
{
    NSFileHandle *_fileHandle;
    NSString *_path;
}

@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
- (void).cxx_destruct;

@end

