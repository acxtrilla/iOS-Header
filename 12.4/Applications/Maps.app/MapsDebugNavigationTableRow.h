//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsDebugTableRow.h"

__attribute__((visibility("hidden")))
@interface MapsDebugNavigationTableRow : MapsDebugTableRow
{
    Class _viewControllerClass;
}

@property(nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
- (id)makeViewControllerToPresent;
- (void)present;
- (id)reuseIdentifier;
- (id)init;
- (void)configureCell:(id)arg1;

@end
