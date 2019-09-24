//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSLogEventStreamBase.h>

@class NSObject, OSLogEventLiveSource, _OSLogStreamFilter;
@protocol OS_xpc_object;

@interface OSLogEventLiveStream : OSLogEventStreamBase
{
    _OSLogStreamFilter *_streamFilter;
    unsigned long long _reason;
    NSObject<OS_xpc_object> *_diagdconn;
    OSLogEventLiveSource *_source;
    CDUnknownBlockType _dropnoteHandler;
}

@property(copy, nonatomic) CDUnknownBlockType dropnoteHandler; // @synthesize dropnoteHandler=_dropnoteHandler;
@property(readonly, nonatomic) OSLogEventLiveSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSObject<OS_xpc_object> *diagdconn; // @synthesize diagdconn=_diagdconn;
- (void).cxx_destruct;
- (void)invalidate;
- (void)activate;
- (void)_activateLiveStream;
- (void)_handleStreamedObject:(id)arg1 usingProxy:(id)arg2;
- (void)setFilterPredicate:(id)arg1;
- (void)setDroppedEventHandler:(CDUnknownBlockType)arg1;
- (id)initWithLiveSource:(id)arg1;

@end
