//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface _CPBundleIdentifierString : NSString
{
    NSString *_executablePath;
    NSString *_bundleIdentifierOrProcessName;
    _Bool _isProcessName;
}

- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (_Bool)_isProcessName;
- (void)_loadBundleIdentifierOrProcessName;
- (void)dealloc;
- (id)_initWithExecutablePath:(id)arg1;

@end
