//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PLBackgroundJobCameraWatcherDelegate;

@interface PLBackgroundJobCameraWatcher : NSObject
{
    _Bool _isCameraRunning;
    id <PLBackgroundJobCameraWatcherDelegate> _delegate;
}

@property(readonly) __weak id <PLBackgroundJobCameraWatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isCameraRunning;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;

@end
