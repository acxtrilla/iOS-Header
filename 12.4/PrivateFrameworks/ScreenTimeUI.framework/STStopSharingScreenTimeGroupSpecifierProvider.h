//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider
{
    PSSpecifier *_stopSharingScreenTimeSpecifier;
}

@property(retain, nonatomic) PSSpecifier *stopSharingScreenTimeSpecifier; // @synthesize stopSharingScreenTimeSpecifier=_stopSharingScreenTimeSpecifier;
- (void).cxx_destruct;
- (void)disableScreenTime:(id)arg1;
- (void)confirmStopSharingScreenTime:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setCoordinator:(id)arg1;
- (id)init;

@end
