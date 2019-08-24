//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, SSAuthenticationContext;

@interface GetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authContext;
    NSArray *_enabledDownloadKinds;
}

- (void)run;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSArray *enabledDownloadKinds;
- (void)dealloc;

@end
