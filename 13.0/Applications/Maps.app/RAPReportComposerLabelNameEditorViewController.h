//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPReportTableViewController.h"

#import "RAPInlineMapViewModelDelegate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"

@class NSString, RAPLabelCorrectionsQuestion, RAPMapFeaturePickerViewController, RAPReportComposerCommentPart, RAPReportComposerIncorrectNamePart, RAPReportComposerLabelStatusPart, RAPReportComposerMapFeaturePickerPart, UIBarButtonItem, VKLabelMarker;

__attribute__((visibility("hidden")))
@interface RAPReportComposerLabelNameEditorViewController : RAPReportTableViewController <RAPInstrumentableTarget, RAPInlineMapViewModelDelegate>
{
    RAPLabelCorrectionsQuestion *_question;
    RAPMapFeaturePickerViewController *_mapPicker;
    UIBarButtonItem *_labelPickerDoneBarItem;
    VKLabelMarker *_editedLabelMarker;
    RAPReportComposerMapFeaturePickerPart *_labelMarkerPickerPart;
    RAPReportComposerIncorrectNamePart *_nameEditorPart;
    RAPReportComposerLabelStatusPart *_labelStatusPart;
    RAPReportComposerCommentPart *_commentPart;
}

- (void).cxx_destruct;
- (void)_labelPickerFinishedSelectingMarker;
- (void)_updateLabelPickerDoneBarItem;
- (void)_instrumentSelectingLabel;
- (void)_presentMapPicker;
- (void)inlineMapViewModelRequestsDisplayPowerActions:(id)arg1;
- (id)tableParts;
@property(readonly, nonatomic) int analyticTarget;
- (id)initWithReport:(id)arg1 question:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
