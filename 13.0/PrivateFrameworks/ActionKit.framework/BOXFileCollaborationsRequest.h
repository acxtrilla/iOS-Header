//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXRequest.h>

@class NSString;

@interface BOXFileCollaborationsRequest : BOXRequest
{
    NSString *_fileID;
    long long _limit;
    NSString *_nextMarker;
}

@property(retain, nonatomic) NSString *nextMarker; // @synthesize nextMarker=_nextMarker;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *fileID; // @synthesize fileID=_fileID;
- (void).cxx_destruct;
- (void)performRequestWithCached:(CDUnknownBlockType)arg1 refreshed:(CDUnknownBlockType)arg2;
- (void)performRequestWithCompletion:(CDUnknownBlockType)arg1;
- (id)createOperation;
- (id)initWithFileID:(id)arg1;

@end
