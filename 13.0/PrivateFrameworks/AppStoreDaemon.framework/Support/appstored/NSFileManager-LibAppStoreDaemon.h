//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (LibAppStoreDaemon)
- (_Bool)_isFileSignedAtPath:(id)arg1 withRequirement:(struct __CFData *)arg2 basicCheck:(_Bool)arg3;
- (id)_deleteLastValidComponentOfPath:(id)arg1;
- (_Bool)isDeveloperSignedFileAtPath:(id)arg1 basicCheck:(_Bool)arg2;
- (_Bool)isAppleSignedFileAtPath:(id)arg1 basicCheck:(_Bool)arg2;
- (id)ensureDirectoryExistsAtPath:(id)arg1;
@end
