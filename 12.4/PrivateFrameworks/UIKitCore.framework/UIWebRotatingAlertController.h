//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRotatingAlertController.h>

@class UIWebDocumentView;

@interface UIWebRotatingAlertController : _UIRotatingAlertController
{
    _Bool _wasDeferringCallbacks;
    UIWebDocumentView *_webBrowserView;
}

- (void).cxx_destruct;
- (_Bool)presentSheet;
- (void)doneWithSheet;
- (void)dealloc;
- (void)_enableWebView;
- (void)_disableWebView;
- (id)initWithUIWebDocumentView:(id)arg1;

@end

