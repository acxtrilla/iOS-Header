//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFItem, HFStaticItem, HFUserNotificationServiceSettings, HUCameraSmartDetectionSettingsModule, HUTriggerConditionEditorItemModule;
@protocol HFServiceLikeItem, HFUserNotificationServiceSettingsProviding;

@interface HUStatusAndNotificationsItemManager : HFItemManager
{
    _Bool _showStatusSection;
    _Bool _showsCameraSnapshotSection;
    _Bool _showsCameraSmartNotificationSection;
    _Bool _showsTriggerConditionSection;
    _Bool _showsDoorbellSection;
    _Bool _showsSmartActivitySection;
    _Bool _serviceItemBelongsToCamera;
    HFStaticItem *_includeInStatusItem;
    HFStaticItem *_allowNotificationsItem;
    HFStaticItem *_allowCameraSnapshotsItem;
    HFStaticItem *_allowDoorbellNotificationsItem;
    HFStaticItem *_allowActivityNotificationsItem;
    HFItem<HFServiceLikeItem> *_serviceItem;
    HUTriggerConditionEditorItemModule *_conditionModule;
    HUCameraSmartDetectionSettingsModule *_cameraSmartDetectionSettingsModule;
}

@property(nonatomic) _Bool serviceItemBelongsToCamera; // @synthesize serviceItemBelongsToCamera=_serviceItemBelongsToCamera;
@property(nonatomic) _Bool showsSmartActivitySection; // @synthesize showsSmartActivitySection=_showsSmartActivitySection;
@property(nonatomic) _Bool showsDoorbellSection; // @synthesize showsDoorbellSection=_showsDoorbellSection;
@property(nonatomic) _Bool showsTriggerConditionSection; // @synthesize showsTriggerConditionSection=_showsTriggerConditionSection;
@property(nonatomic) _Bool showsCameraSmartNotificationSection; // @synthesize showsCameraSmartNotificationSection=_showsCameraSmartNotificationSection;
@property(nonatomic) _Bool showsCameraSnapshotSection; // @synthesize showsCameraSnapshotSection=_showsCameraSnapshotSection;
@property(readonly, nonatomic) HUCameraSmartDetectionSettingsModule *cameraSmartDetectionSettingsModule; // @synthesize cameraSmartDetectionSettingsModule=_cameraSmartDetectionSettingsModule;
@property(readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionModule; // @synthesize conditionModule=_conditionModule;
@property(readonly, nonatomic) HFItem<HFServiceLikeItem> *serviceItem; // @synthesize serviceItem=_serviceItem;
@property(retain, nonatomic) HFStaticItem *allowActivityNotificationsItem; // @synthesize allowActivityNotificationsItem=_allowActivityNotificationsItem;
@property(retain, nonatomic) HFStaticItem *allowDoorbellNotificationsItem; // @synthesize allowDoorbellNotificationsItem=_allowDoorbellNotificationsItem;
@property(retain, nonatomic) HFStaticItem *allowCameraSnapshotsItem; // @synthesize allowCameraSnapshotsItem=_allowCameraSnapshotsItem;
@property(retain, nonatomic) HFStaticItem *allowNotificationsItem; // @synthesize allowNotificationsItem=_allowNotificationsItem;
@property(retain, nonatomic) HFStaticItem *includeInStatusItem; // @synthesize includeInStatusItem=_includeInStatusItem;
@property(nonatomic) _Bool showStatusSection; // @synthesize showStatusSection=_showStatusSection;
- (void).cxx_destruct;
- (id)homeStatusVisibleObject;
@property(readonly, nonatomic) HFUserNotificationServiceSettings *notificationSettings;
@property(readonly, nonatomic) id <HFUserNotificationServiceSettingsProviding> notificationSettingsProvider;
- (id)_updateNotificationSettings:(id)arg1;
- (id)updateCameraSmartNotificationCondition:(id)arg1;
- (id)updateNotificationCondition:(id)arg1;
- (id)updateAllowSmartActivityNotifications:(_Bool)arg1;
- (id)updateAllowSnapshotsInNotifications:(_Bool)arg1;
- (id)updateAllowDoorbellNotifications:(_Bool)arg1;
- (id)updateAllowNotifications:(_Bool)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)initWithServiceItem:(id)arg1 delegate:(id)arg2 home:(id)arg3;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;

@end
