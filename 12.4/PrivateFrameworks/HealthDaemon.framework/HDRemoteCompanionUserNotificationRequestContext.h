//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDCodableCompanionUserNotificationRequest;

@interface HDRemoteCompanionUserNotificationRequestContext : NSObject
{
    HDCodableCompanionUserNotificationRequest *_request;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) HDCodableCompanionUserNotificationRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;

@end

