//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PFChecksum;

@interface PFDiskCacheFile : NSObject
{
    PFChecksum *_checksum;
    NSString *_path;
    int _fd;
    struct stat _statBuf;
}

- (void).cxx_destruct;
- (void)write:(id)arg1 preparationBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)read:(int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 checksum:(id)arg2;
- (id)init;
- (_Bool)deleteCacheFile;
- (_Bool)checkIntegrity:(long long)arg1;
- (_Bool)_writeObj:(id)arg1 queue:(id)arg2;
- (id)_readObj:(int)arg1 queue:(id)arg2;
- (int)_writeHeaderForFormat:(unsigned int)arg1 formatSpecificData:(unsigned int)arg2;
- (_Bool)_writeBytesFromPtr:(const void *)arg1 length:(unsigned long long)arg2;
- (_Bool)_swapTempFileIntoPlace;
- (_Bool)_readHeader:(CDStruct_83fd53e9 *)arg1;
- (_Bool)_readBytesIntoPtr:(void *)arg1 length:(unsigned long long)arg2;
- (_Bool)_openCacheFileForWrite;
- (_Bool)_openCacheFileForRead;
- (void)_logError:(id)arg1;
- (CDStruct_83fd53e9)_headerForFormat:(unsigned int)arg1 checksum:(id)arg2 formatSpecificData:(unsigned int)arg3;
- (void)_closeCacheFile;

@end

