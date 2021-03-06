//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString;

@interface KeybagRequestOperation : ISOperation
{
    NSNumber *_accountID;
    NSString *_bundleID;
    NSString *_clientIdentifierHeader;
    NSString *_userAgent;
    _Bool _runSilently;
    NSArray *_claimedBundleIdentifiers;
}

@property(nonatomic) _Bool runSilently; // @synthesize runSilently=_runSilently;
@property(readonly) NSArray *claimedBundleIdentifiers; // @synthesize claimedBundleIdentifiers=_claimedBundleIdentifiers;
- (void).cxx_destruct;
- (void)_getDownloaderIdentifier:(id *)arg1 purchaserIdentifier:(id *)arg2 forApplication:(id)arg3;
- (void)run;
- (id)initWithAccount:(id)arg1 bundleID:(id)arg2 clientIdentifierHeader:(id)arg3 userAgent:(id)arg4;

@end

