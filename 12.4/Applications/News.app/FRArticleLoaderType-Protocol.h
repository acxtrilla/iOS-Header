//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FRArticleViewContext, NSArray, NSDictionary, NSString;
@protocol FCHeadlineProviding;

@protocol FRArticleLoaderType
- (void)loadArticleViewControllerWithHeadline:(id <FCHeadlineProviding>)arg1 articleContext:(FRArticleViewContext *)arg2 notificationSenderChannelID:(NSString *)arg3 articlePresentationStyle:(long long)arg4 showShareSheet:(_Bool)arg5 editorialTabName:(NSString *)arg6 completion:(void (^)(id <FRArticlePageViewDataSource>, FRArticlePageViewController *, unsigned long long))arg7;
- (void)loadArticleViewControllerWithID:(NSString *)arg1 articleList:(NSArray *)arg2 prefetchedHeadlines:(NSArray *)arg3 sectionDataByArticleID:(NSDictionary *)arg4 articleOpenedFrom:(long long)arg5 notificationSenderChannelID:(NSString *)arg6 articleContext:(FRArticleViewContext *)arg7 articlePresentationStyle:(long long)arg8 showShareSheet:(_Bool)arg9 forceArticleUpdate:(_Bool)arg10 editorialTabName:(NSString *)arg11 completion:(void (^)(id <FCHeadlineProviding>, id <FRArticlePageViewDataSource>, FRArticlePageViewController *, unsigned long long))arg12;
@end
