//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class VCAudioIOControllerClient;

@protocol VCAudioIOControllerControl <NSObject>
- (void)updateClient:(VCAudioIOControllerClient *)arg1;
- (void)stopClient:(VCAudioIOControllerClient *)arg1;
- (void)startClient:(VCAudioIOControllerClient *)arg1;

@optional
- (void)refreshOutputMetering;
- (void)refreshInputMetering;
@end
