//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager
{
}

+ (id)defaultHFSFileManager;
+ (id)defaultManager;
- (id)UTITypeOfPathExtension:(id)arg1;
- (id)UTITypeOfPath:(id)arg1;
- (id)pathExtensionForUTIType:(id)arg1;
- (id)MIMETypeOfPath:(id)arg1;
- (id)MIMETypeOfPathExtension:(id)arg1;
- (id)UTITypeOfMimeType:(id)arg1;
- (id)pathExtensionForMIMEType:(id)arg1;
- (id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2;

@end
