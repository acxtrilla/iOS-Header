//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneEvent.h>

@class FBSSceneClientSettings, FBSSceneClientSettingsDiff;

@interface FBUISceneUpdateClientSettingsEvent : FBUISceneEvent
{
    FBSSceneClientSettings *_settings;
    FBSSceneClientSettingsDiff *_diff;
}

@property(retain, nonatomic) FBSSceneClientSettingsDiff *settingsDiff; // @synthesize settingsDiff=_diff;
@property(copy, nonatomic) FBSSceneClientSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;

@end

