//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUChildServiceEditorItemModule.h>

@class HFItem;

@interface HUInputSourceItemModule : HUChildServiceEditorItemModule
{
    HFItem *_chooseInputsSelectionItem;
}

+ (CDUnknownBlockType)_serviceItemComparatorForTelevisionProfile:(id)arg1;
+ (id)supportedServiceTypes;
@property(readonly, nonatomic) HFItem *chooseInputsSelectionItem; // @synthesize chooseInputsSelectionItem=_chooseInputsSelectionItem;
- (void).cxx_destruct;
- (_Bool)canToggleConfigurationStateForItem:(id)arg1;
- (id)buildSectionsWithDisplayedItems:(id)arg1;

@end
