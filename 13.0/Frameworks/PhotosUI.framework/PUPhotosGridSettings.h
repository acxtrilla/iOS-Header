//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUPhotosGridSettings : PXSettings
{
    _Bool _badgeAllItemsAsFavorites;
    _Bool _displayAllItemsAsBursts;
    _Bool _simulateLongTitles;
    _Bool _allowDynamicDetailsTitles;
    _Bool _forceJPEGThumbnailsInDefaultGrid;
    _Bool _flashDegradedImages;
    _Bool _useFloatingHeaders;
    _Bool _swipeSelectionEnabled;
    _Bool _shouldExitEditingModeAfterDuplication;
    _Bool _showTimelineScrubbers;
    _Bool _simulateGlobalFooterImportantInformationUpdates;
    double _defaultItemSideSize;
    double _maximumSpacing;
    double _simulatedDetailsAttributesLoadingDelay;
    long long _numberColumnsInDefaultGrid;
    long long _numberOfColumnsInWideGrid;
    double _magnifierRevealPreviewScale;
    double _previewRevealProgressToFreezeMagnifier;
    double _minimumDistanceToUnfreeze;
    double _leftScrubberRate;
    double _rightScrubberRate;
    long long _globalFooterVisibility;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool simulateGlobalFooterImportantInformationUpdates; // @synthesize simulateGlobalFooterImportantInformationUpdates=_simulateGlobalFooterImportantInformationUpdates;
@property(nonatomic) long long globalFooterVisibility; // @synthesize globalFooterVisibility=_globalFooterVisibility;
@property(nonatomic) double rightScrubberRate; // @synthesize rightScrubberRate=_rightScrubberRate;
@property(nonatomic) double leftScrubberRate; // @synthesize leftScrubberRate=_leftScrubberRate;
@property(nonatomic) _Bool showTimelineScrubbers; // @synthesize showTimelineScrubbers=_showTimelineScrubbers;
@property(nonatomic) _Bool shouldExitEditingModeAfterDuplication; // @synthesize shouldExitEditingModeAfterDuplication=_shouldExitEditingModeAfterDuplication;
@property(nonatomic) double minimumDistanceToUnfreeze; // @synthesize minimumDistanceToUnfreeze=_minimumDistanceToUnfreeze;
@property(nonatomic) double previewRevealProgressToFreezeMagnifier; // @synthesize previewRevealProgressToFreezeMagnifier=_previewRevealProgressToFreezeMagnifier;
@property(nonatomic) double magnifierRevealPreviewScale; // @synthesize magnifierRevealPreviewScale=_magnifierRevealPreviewScale;
@property(nonatomic, getter=isSwipeSelectionEnabled) _Bool swipeSelectionEnabled; // @synthesize swipeSelectionEnabled=_swipeSelectionEnabled;
@property(nonatomic) _Bool useFloatingHeaders; // @synthesize useFloatingHeaders=_useFloatingHeaders;
@property(nonatomic) _Bool flashDegradedImages; // @synthesize flashDegradedImages=_flashDegradedImages;
@property(nonatomic) long long numberOfColumnsInWideGrid; // @synthesize numberOfColumnsInWideGrid=_numberOfColumnsInWideGrid;
@property(nonatomic) long long numberColumnsInDefaultGrid; // @synthesize numberColumnsInDefaultGrid=_numberColumnsInDefaultGrid;
@property(nonatomic) _Bool forceJPEGThumbnailsInDefaultGrid; // @synthesize forceJPEGThumbnailsInDefaultGrid=_forceJPEGThumbnailsInDefaultGrid;
@property(nonatomic) double simulatedDetailsAttributesLoadingDelay; // @synthesize simulatedDetailsAttributesLoadingDelay=_simulatedDetailsAttributesLoadingDelay;
@property(nonatomic) _Bool allowDynamicDetailsTitles; // @synthesize allowDynamicDetailsTitles=_allowDynamicDetailsTitles;
@property(nonatomic) _Bool simulateLongTitles; // @synthesize simulateLongTitles=_simulateLongTitles;
@property(nonatomic) _Bool displayAllItemsAsBursts; // @synthesize displayAllItemsAsBursts=_displayAllItemsAsBursts;
@property(nonatomic) _Bool badgeAllItemsAsFavorites; // @synthesize badgeAllItemsAsFavorites=_badgeAllItemsAsFavorites;
@property(nonatomic) double maximumSpacing; // @synthesize maximumSpacing=_maximumSpacing;
@property(nonatomic) double defaultItemSideSize; // @synthesize defaultItemSideSize=_defaultItemSideSize;
- (void)setDefaultValues;
- (id)parentSettings;

@end
