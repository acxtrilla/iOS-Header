//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableOBWelcomeController.h>

#import <HomeUI/HUConfigurationViewController-Protocol.h>
#import <HomeUI/HUPreloadableViewController-Protocol.h>

@class NSString, OBLinkTrayButton, OBTrayButton;
@protocol HUConfigurationViewControllerDelegate;

@interface HUTVViewingProfilesCustomizeViewController : HUItemTableOBWelcomeController <HUConfigurationViewController, HUPreloadableViewController>
{
    id <HUConfigurationViewControllerDelegate> _delegate;
    OBTrayButton *_usePRButton;
    OBLinkTrayButton *_customizeButton;
}

@property(retain, nonatomic) OBLinkTrayButton *customizeButton; // @synthesize customizeButton=_customizeButton;
@property(retain, nonatomic) OBTrayButton *usePRButton; // @synthesize usePRButton=_usePRButton;
@property(nonatomic) __weak id <HUConfigurationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_setupTVViewingProfiles:(id)arg1;
- (void)_dontSetupTVViewingProfiles:(id)arg1;
- (id)hu_preloadContent;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isFinalStep;
@property(readonly) Class superclass;

@end
