//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class InstallAttributionParams, NSString;

@interface SaveInstallAttributionParamsOperation : ISOperation
{
    InstallAttributionParams *_params;
    NSString *_originatingBundleId;
    _Bool _overrideCampaignLimit;
}

- (void).cxx_destruct;
- (void)run;
- (id)initWithRequest:(id)arg1;

@end
