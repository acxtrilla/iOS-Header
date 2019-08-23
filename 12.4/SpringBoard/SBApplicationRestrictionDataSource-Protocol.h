//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSSet, NSString, SBApplication;

@protocol SBApplicationRestrictionDataSource <NSObject>
- (NSSet *)bundleIdentifiersWithVisibilityOverrideHidden;
- (NSArray *)alwaysAvailableApplicationBundleIdentifiers;
- (NSArray *)allBundleIdentifiers;
- (NSArray *)allApplications;
- (SBApplication *)applicationWithBundleIdentifier:(NSString *)arg1;
@end
