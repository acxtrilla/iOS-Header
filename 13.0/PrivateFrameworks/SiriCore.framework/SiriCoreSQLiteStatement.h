//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SiriCoreSQLiteStatement : NSObject
{
    struct sqlite3_stmt *_impl;
    _Bool _finalizeWhenDone;
}

- (struct sqlite3_stmt *)impl;
- (id)initWithImpl:(struct sqlite3_stmt *)arg1 finalizeWhenDone:(_Bool)arg2;
- (void)clearBindings;
- (void)reset;
- (void)dealloc;

@end
