//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@protocol SSSWaitingForImageIdentifierUpdatesAlertControllerDelegate;

@interface SSSWaitingForImageIdentifierUpdatesAlertController : UIAlertController
{
    id <SSSWaitingForImageIdentifierUpdatesAlertControllerDelegate> _delegate;
    double _progress;
}

+ (id)newWaitingForImageIdentifierUpdatesAlertController;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <SSSWaitingForImageIdentifierUpdatesAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)canBecomeFirstResponder;
- (id)_waitingContentViewController;

@end

