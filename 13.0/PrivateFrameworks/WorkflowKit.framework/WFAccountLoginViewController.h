//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@protocol WFAccountLoginViewControllerDelegate;

@interface WFAccountLoginViewController : UIViewController
{
    id <WFAccountLoginViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WFAccountLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)accessibilityPerformEscape;
- (id)initWithAccountClass:(Class)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

