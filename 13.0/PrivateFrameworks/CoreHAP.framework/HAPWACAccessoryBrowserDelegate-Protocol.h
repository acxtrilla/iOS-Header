//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HAPWACAccessory, HAPWACAccessoryBrowser;

@protocol HAPWACAccessoryBrowserDelegate
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didFindUnconfiguredPairedHAPWACAccessory:(HAPWACAccessory *)arg2;
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didRemoveHAPWACAccessory:(HAPWACAccessory *)arg2;
- (void)wacBrowser:(HAPWACAccessoryBrowser *)arg1 didFindHAPWACAccessory:(HAPWACAccessory *)arg2;
@end
