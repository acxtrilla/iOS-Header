//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSError, VSOptional;

@interface VSFileWriteOperation : VSAsyncOperation
{
    VSOptional *_data;
    VSOptional *_destination;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) VSOptional *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) VSOptional *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)executionDidBegin;
- (id)init;

@end
