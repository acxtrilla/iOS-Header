//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, TSArticleContext, UIViewController;
@protocol TSEditorialAttributesProviderType;

@protocol TSEditorialArticleViewerModuleType
- (UIViewController *)createViewControllerForArticleID:(NSString *)arg1 articleContext:(TSArticleContext *)arg2 fragment:(NSString *)arg3 attributesProvider:(id <TSEditorialAttributesProviderType>)arg4;
- (UIViewController *)createViewController;
@end
