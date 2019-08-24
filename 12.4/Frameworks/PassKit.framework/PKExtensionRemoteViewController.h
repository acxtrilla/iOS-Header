//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <PassKit/PKPaymentAuthorizationExtensionViewHostProtocol-Protocol.h>

@class NSString;
@protocol PKExtensionRemoteViewControllerDelegate;

@interface PKExtensionRemoteViewController : _UIRemoteViewController <PKPaymentAuthorizationExtensionViewHostProtocol>
{
    id <PKExtensionRemoteViewControllerDelegate> _delegate;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(nonatomic) id <PKExtensionRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
