//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ChromeViewController, NSError, UIAlertController;

__attribute__((visibility("hidden")))
@interface InterruptionManager : NSObject
{
    UIAlertController *_locationServicesAlertView;
    CDUnknownBlockType _locationServicesAlertDismissalBlock;
    _Bool _displayingError;
    _Bool _isShowingCurrentLocationError;
    int _postAlertSearchType;
    ChromeViewController *_chromeViewController;
    NSError *_displayedLocationError;
}

+ (id)localizedLocationAuthorizationTitle;
+ (id)localizedLocationAuthorizationMessage;
@property(retain, nonatomic) NSError *displayedLocationError; // @synthesize displayedLocationError=_displayedLocationError;
@property(nonatomic) __weak ChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
- (void).cxx_destruct;
- (void)locationManagerApprovalDidChange:(id)arg1;
- (_Bool)isShowingLocationServicesAlert;
- (void)reportCurrentLocationFailure;
- (void)displayAlertWithTitle:(id)arg1 message:(id)arg2 postAlertSearchType:(int)arg3;
- (CDUnknownBlockType)presentUnhandledInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)presentNavSafetyAlertWithCompletion:(CDUnknownBlockType)arg1;

@end
