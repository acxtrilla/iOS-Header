//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Social/SLRequest.h>

@class NSString;

@interface SLFacebookRequest : SLRequest
{
}

@property int responseDataFormat; // @dynamic responseDataFormat;
@property(retain) NSString *accessToken; // @dynamic accessToken;
- (id)preparedURLRequest;
- (void)preflightRequest;
- (id)initWithURL:(id)arg1 parameters:(id)arg2 requestMethod:(long long)arg3;

@end
