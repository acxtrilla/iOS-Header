//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

#import "FlipViewControllerDelegate-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ModalFlipWindow : UIWindow <FlipViewControllerDelegate>
{
    CDUnknownBlockType _dismissal;
}

@property(copy, nonatomic) CDUnknownBlockType dismissal; // @synthesize dismissal=_dismissal;
- (void).cxx_destruct;
- (void)flipViewControllerDidDismiss:(id)arg1;
- (void)dismiss;
- (void)presentViewController:(id)arg1 flippingView:(id)arg2 dismissal:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

