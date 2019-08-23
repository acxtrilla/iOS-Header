//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SBDashBoardViewBase.h"

#import "SBDashBoardPageView-Protocol.h"

@class UIViewController;
@protocol SBDashBoardPageViewControllerProtocol;

@interface SBDashBoardPageViewBase : SBDashBoardViewBase <SBDashBoardPageView>
{
    UIViewController<SBDashBoardPageViewControllerProtocol> *_pageViewController;
    double _contentWidth;
}

@property(nonatomic) double contentWidth; // @synthesize contentWidth=_contentWidth;
@property(nonatomic) __weak UIViewController<SBDashBoardPageViewControllerProtocol> *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void).cxx_destruct;

@end
