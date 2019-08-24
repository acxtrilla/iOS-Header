//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureRequest, CAMStillImageCaptureCoordinationInfo, CAMStillImageLocalPersistenceResult, CAMStillImagePersistenceCoordinator;

@protocol CAMStillImagePersistenceCoordinatorDelegate <NSObject>
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMStillImageCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 fullsizeRenderLocalResult:(CAMStillImageLocalPersistenceResult *)arg3 request:(CAMCaptureRequest *)arg4 powerAssertionReason:(unsigned int)arg5;
@end
