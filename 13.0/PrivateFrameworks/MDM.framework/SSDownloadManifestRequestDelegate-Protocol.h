//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MDM/SSRequestDelegate-Protocol.h>

@class SSDownloadManifestRequest, SSDownloadManifestResponse;

@protocol SSDownloadManifestRequestDelegate <SSRequestDelegate>

@optional
- (void)downloadManifestRequest:(SSDownloadManifestRequest *)arg1 didReceiveResponse:(SSDownloadManifestResponse *)arg2;
@end
