//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol BCSAction;

@protocol BCSActionDelegate <NSObject>

@optional
- (NSArray *)actionPickerItemsForAction:(id <BCSAction>)arg1 proposedItems:(NSArray *)arg2;
- (struct CGRect)sourceRectForPopoverActionPicker:(id <BCSAction>)arg1;
- (UIViewController *)presentingViewControllerForAction:(id <BCSAction>)arg1;
@end

