//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol FCBundleChannelProviderDelegate;

@protocol FCBundleChannelProviderType
@property(nonatomic) __weak id <FCBundleChannelProviderDelegate> delegate;
@property(readonly, nonatomic) NSArray *bundleChannelIDs;
- (void)loadInitialBundleChannelIDsWithCompletion:(void (^)(void))arg1;
@end
