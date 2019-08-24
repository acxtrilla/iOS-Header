//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PreferencesUI/PSSpecifierGroup-Protocol.h>

@class NSArray, NSMutableArray, NSString, PSListController, PSSpecifier;

@interface PSUICallingSubgroup : NSObject <PSSpecifierGroup>
{
    PSListController *_listController;
    PSSpecifier *_parentSpecifier;
    NSArray *_wifiCallingSpecifiers;
    NSMutableArray *_bundleControllers;
}

@property(retain, nonatomic) NSMutableArray *bundleControllers; // @synthesize bundleControllers=_bundleControllers;
@property(retain, nonatomic) NSArray *wifiCallingSpecifiers; // @synthesize wifiCallingSpecifiers=_wifiCallingSpecifiers;
@property(nonatomic) __weak PSSpecifier *parentSpecifier; // @synthesize parentSpecifier=_parentSpecifier;
@property(nonatomic) __weak PSListController *listController; // @synthesize listController=_listController;
- (void).cxx_destruct;
- (id)specifiers;
- (void)viewWillAppear;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 parentSpecifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
