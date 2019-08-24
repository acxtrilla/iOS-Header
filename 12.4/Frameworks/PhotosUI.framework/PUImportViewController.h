//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotosGridViewController.h>

#import <PhotosUI/PUImportActionCoordinatorDelegate-Protocol.h>
#import <PhotosUI/PUImportAddToAlbumsToolbarViewDelegate-Protocol.h>
#import <PhotosUI/PUImportAlbumPickerDelegate-Protocol.h>
#import <PhotosUI/PUImportAssetsDataSourceManagerObserver-Protocol.h>
#import <PhotosUI/PUImportControllerImportCompletionDelegate-Protocol.h>
#import <PhotosUI/PUImportControllerNotificationsReceiver-Protocol.h>
#import <PhotosUI/PUImportDisplayDelegate-Protocol.h>
#import <PhotosUI/PUImportHistorySectionHeaderViewDelegate-Protocol.h>
#import <PhotosUI/PUImportOneUpTransitioning-Protocol.h>
#import <PhotosUI/PUImportSectionedGridLayoutDelegate-Protocol.h>
#import <PhotosUI/PUSectionedGridLayoutDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUI/PXSwipeSelectionManagerDelegate-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSLayoutConstraint, NSMutableSet, NSNumber, NSProgress, NSString, PHImportSource, PLRoundProgressView, PUImportActionCoordinator, PUImportAddToAlbumsPickerViewController, PUImportAddToAlbumsToolbarView, PUImportAssetsDataSource, PUImportAssetsDataSourceManager, PUImportChangeDetailsCollectionViewHelper, PUImportController, PUImportCustomViewBarButton, PUImportFakePhotosDataSource, PUImportFloatingToolbarView, PUImportHistorySectionHeaderView, PUImportSessionInfo, PUPhotosGridViewControllerSpec, PXNavigationTitleView, PXSelectionSnapshot, PXSwipeSelectionManager, UIBarButtonItem, UILabel, UITapGestureRecognizer;

@interface PUImportViewController : PUPhotosGridViewController <PUSectionedGridLayoutDelegate, PUImportActionCoordinatorDelegate, PUImportAlbumPickerDelegate, PUImportAssetsDataSourceManagerObserver, PUImportControllerImportCompletionDelegate, PUImportControllerNotificationsReceiver, PUImportHistorySectionHeaderViewDelegate, PUImportOneUpTransitioning, PUImportSectionedGridLayoutDelegate, PXSettingsKeyObserver, PUImportDisplayDelegate, PXChangeObserver, PXSwipeSelectionManagerDelegate, PUImportAddToAlbumsToolbarViewDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>
{
    _Bool _completedAnImport;
    PUImportSessionInfo *_completedImportSessionInfo;
    struct __CFUserNotification *_importCompleteNotification;
    UIBarButtonItem *_importButtonItem;
    UIBarButtonItem *_deleteButtonItemIcon;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_stopBarItem;
    UIBarButtonItem *_progressButtonItem;
    UIBarButtonItem *_progressLabel;
    UIBarButtonItem *_albumPickerBarItem;
    PUImportAddToAlbumsToolbarView *_addToAlbumsToolbarView;
    UIBarButtonItem *_contentInfoBarButton;
    UIBarButtonItem *_albumPickerCompactWidthBarButton;
    UIBarButtonItem *_compactContentInfoButton;
    UIBarButtonItem *_compactSpacer1;
    UIBarButtonItem *_compactImportDestinationButton;
    UIBarButtonItem *_compactSpacer2;
    unsigned long long _busyCount;
    _Bool _allowsSelection;
    id _mstreamd_pause_context;
    _Bool _acceptsLongPress;
    _Bool _compactLayoutMode;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _performingDataSourceChange;
    _Bool _needsDataReloadAfterAnimatingDataSourceChange;
    _Bool _transitioningToNewSize;
    _Bool _viewAppearing;
    _Bool _performingAlbumPickerPresentation;
    _Bool _userWantsAlreadyImportedSectionCollapsedIfPossible;
    _Bool _shouldCollapseAlreadyImportedSection;
    _Bool _userHasScrolled;
    _Bool _shouldStayScrolledToBottom;
    _Bool _animateHeaderActionButtonChanges;
    _Bool _isPeeking;
    PUPhotosGridViewControllerSpec *__spec;
    double __collectionViewLayoutReferenceWidth;
    id __pendingViewSizeTransitionContext;
    id __cachedViewSizeTransitionContext;
    NSProgress *_importProgress;
    PUImportController *_importController;
    PUImportAssetsDataSourceManager *_importDataSourceManager;
    PUImportAssetsDataSource *_importDataSource;
    PUImportAssetsDataSourceManager *_unfilteredImportDataSourceManager;
    PUImportAssetsDataSource *_pendingDataSource;
    PUImportChangeDetailsCollectionViewHelper *_changeDetailsHelper;
    PUImportFakePhotosDataSource *_fakePhotosDataSource;
    PUImportActionCoordinator *_actionCoordinator;
    PXNavigationTitleView *_navigationTitleView;
    UILabel *_navigationLargeTitleAccessoryLabel;
    PXSwipeSelectionManager *_swipeSelectionManager;
    PXSelectionSnapshot *_currentSelectionSnapshot;
    PUImportAddToAlbumsPickerViewController *_albumsPickerViewController;
    PLRoundProgressView *_roundProgressView;
    long long _numItemsCompleted;
    long long _numTotalItemsToComplete;
    NSMutableSet *_itemsBeingTransitioned;
    PUImportFloatingToolbarView *_compactWidthToolbar;
    NSLayoutConstraint *_compactWidthToolbarTopConstraint;
    PXNavigationTitleView *_contentInfoBarButtonView;
    PXNavigationTitleView *_compactWidthAlbumPickerBarButtonView;
    PUImportCustomViewBarButton *_compactWidthAlbumPickerButton;
    NSNumber *_cachedHeaderHeight;
    PUImportHistorySectionHeaderView *_referenceHeaderView;
    double _referenceWidth;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    struct CGSize __cachedViewSizeTransitionContextSize;
    struct UIEdgeInsets _collectionViewSafeAreaInsets;
}

+ (id)totalSizeStringForItems:(id)arg1;
@property(retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // @synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer;
@property(nonatomic) double referenceWidth; // @synthesize referenceWidth=_referenceWidth;
@property(nonatomic) _Bool isPeeking; // @synthesize isPeeking=_isPeeking;
@property(retain, nonatomic) PUImportHistorySectionHeaderView *referenceHeaderView; // @synthesize referenceHeaderView=_referenceHeaderView;
@property(retain, nonatomic) NSNumber *cachedHeaderHeight; // @synthesize cachedHeaderHeight=_cachedHeaderHeight;
@property(retain, nonatomic) PUImportCustomViewBarButton *compactWidthAlbumPickerButton; // @synthesize compactWidthAlbumPickerButton=_compactWidthAlbumPickerButton;
@property(retain, nonatomic) PXNavigationTitleView *compactWidthAlbumPickerBarButtonView; // @synthesize compactWidthAlbumPickerBarButtonView=_compactWidthAlbumPickerBarButtonView;
@property(retain, nonatomic) PXNavigationTitleView *contentInfoBarButtonView; // @synthesize contentInfoBarButtonView=_contentInfoBarButtonView;
@property(retain, nonatomic) NSLayoutConstraint *compactWidthToolbarTopConstraint; // @synthesize compactWidthToolbarTopConstraint=_compactWidthToolbarTopConstraint;
@property(retain, nonatomic) PUImportFloatingToolbarView *compactWidthToolbar; // @synthesize compactWidthToolbar=_compactWidthToolbar;
@property(nonatomic) _Bool animateHeaderActionButtonChanges; // @synthesize animateHeaderActionButtonChanges=_animateHeaderActionButtonChanges;
@property(retain, nonatomic) NSMutableSet *itemsBeingTransitioned; // @synthesize itemsBeingTransitioned=_itemsBeingTransitioned;
@property(nonatomic) long long numTotalItemsToComplete; // @synthesize numTotalItemsToComplete=_numTotalItemsToComplete;
@property(nonatomic) long long numItemsCompleted; // @synthesize numItemsCompleted=_numItemsCompleted;
@property(retain, nonatomic) PLRoundProgressView *roundProgressView; // @synthesize roundProgressView=_roundProgressView;
@property(nonatomic) _Bool shouldStayScrolledToBottom; // @synthesize shouldStayScrolledToBottom=_shouldStayScrolledToBottom;
@property(nonatomic) _Bool userHasScrolled; // @synthesize userHasScrolled=_userHasScrolled;
@property(nonatomic) _Bool shouldCollapseAlreadyImportedSection; // @synthesize shouldCollapseAlreadyImportedSection=_shouldCollapseAlreadyImportedSection;
@property(nonatomic) _Bool userWantsAlreadyImportedSectionCollapsedIfPossible; // @synthesize userWantsAlreadyImportedSectionCollapsedIfPossible=_userWantsAlreadyImportedSectionCollapsedIfPossible;
@property(nonatomic) _Bool performingAlbumPickerPresentation; // @synthesize performingAlbumPickerPresentation=_performingAlbumPickerPresentation;
@property(retain, nonatomic) PUImportAddToAlbumsPickerViewController *albumsPickerViewController; // @synthesize albumsPickerViewController=_albumsPickerViewController;
@property(retain, nonatomic) PXSelectionSnapshot *currentSelectionSnapshot; // @synthesize currentSelectionSnapshot=_currentSelectionSnapshot;
@property(retain, nonatomic) PXSwipeSelectionManager *swipeSelectionManager; // @synthesize swipeSelectionManager=_swipeSelectionManager;
@property(readonly, nonatomic) UILabel *navigationLargeTitleAccessoryLabel; // @synthesize navigationLargeTitleAccessoryLabel=_navigationLargeTitleAccessoryLabel;
@property(readonly, nonatomic) PXNavigationTitleView *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(retain, nonatomic) PUImportActionCoordinator *actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(retain, nonatomic) PUImportFakePhotosDataSource *fakePhotosDataSource; // @synthesize fakePhotosDataSource=_fakePhotosDataSource;
@property(nonatomic, getter=isViewAppearing) _Bool viewAppearing; // @synthesize viewAppearing=_viewAppearing;
@property(nonatomic, getter=isTransitioningToNewSize) _Bool transitioningToNewSize; // @synthesize transitioningToNewSize=_transitioningToNewSize;
@property(retain, nonatomic) PUImportChangeDetailsCollectionViewHelper *changeDetailsHelper; // @synthesize changeDetailsHelper=_changeDetailsHelper;
@property(retain, nonatomic) PUImportAssetsDataSource *pendingDataSource; // @synthesize pendingDataSource=_pendingDataSource;
@property(nonatomic) _Bool needsDataReloadAfterAnimatingDataSourceChange; // @synthesize needsDataReloadAfterAnimatingDataSourceChange=_needsDataReloadAfterAnimatingDataSourceChange;
@property(nonatomic) _Bool performingDataSourceChange; // @synthesize performingDataSourceChange=_performingDataSourceChange;
@property(retain, nonatomic) PUImportAssetsDataSourceManager *unfilteredImportDataSourceManager; // @synthesize unfilteredImportDataSourceManager=_unfilteredImportDataSourceManager;
@property(retain, nonatomic) PUImportAssetsDataSource *importDataSource; // @synthesize importDataSource=_importDataSource;
@property(retain, nonatomic) PUImportAssetsDataSourceManager *importDataSourceManager; // @synthesize importDataSourceManager=_importDataSourceManager;
@property(retain, nonatomic) PUImportController *importController; // @synthesize importController=_importController;
@property(retain, nonatomic) NSProgress *importProgress; // @synthesize importProgress=_importProgress;
@property(nonatomic, setter=_setCachedViewSizeTransitionContextSize:) struct CGSize _cachedViewSizeTransitionContextSize; // @synthesize _cachedViewSizeTransitionContextSize=__cachedViewSizeTransitionContextSize;
@property(retain, nonatomic, setter=_setCachedViewSizeTransitionContext:) id _cachedViewSizeTransitionContext; // @synthesize _cachedViewSizeTransitionContext=__cachedViewSizeTransitionContext;
@property(retain, nonatomic, setter=_setPendingViewSizeTransitionContext:) id _pendingViewSizeTransitionContext; // @synthesize _pendingViewSizeTransitionContext=__pendingViewSizeTransitionContext;
@property(nonatomic, setter=_setCollectionViewSafeAreaInsets:) struct UIEdgeInsets collectionViewSafeAreaInsets; // @synthesize collectionViewSafeAreaInsets=_collectionViewSafeAreaInsets;
@property(nonatomic, setter=_setCollectionViewLayoutReferenceWidth:) double _collectionViewLayoutReferenceWidth; // @synthesize _collectionViewLayoutReferenceWidth=__collectionViewLayoutReferenceWidth;
@property(retain, nonatomic, setter=_setSpec:) PUPhotosGridViewControllerSpec *_spec; // @synthesize _spec=__spec;
- (void).cxx_destruct;
- (id)ppt_importButton;
- (id)previewPresentationTransitioningDelegateForPosition:(struct CGPoint)arg1 inSourceView:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)didDismissPreviewViewController:(id)arg1 committing:(_Bool)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewViewControllerForItemAtIndexPath:(id)arg1;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (_Bool)allowsPeeking;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)uninstallGestureRecognizers;
- (void)installGestureRecognizers;
- (struct PXSimpleIndexPath)selectionIndexPathForItem:(id)arg1;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(struct CGPoint)arg2;
- (struct PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(struct CGPoint)arg2;
- (void)disableSwipeSelection;
- (void)enableSwipeSelection;
- (_Bool)canBeginSwipeSelectionAtScrollViewLocation:(struct CGPoint)arg1;
- (void)stayScrolledToBottomIfAtBottomAfterDrag:(id)arg1;
- (void)navigateToBottomAnimated:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (struct CGRect)imageRectFromPhotoView:(id)arg1;
- (void)didTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3;
- (void)willTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransitionItems:(id)arg3;
- (void)prepareTransitionItemViewForDestination:(id)arg1;
- (struct CGRect)targetFrameForTransitionItem:(id)arg1;
- (id)transitionItemsForContext:(id)arg1;
- (void)handlePhotoOrStackPinchGestureRecognizer:(id)arg1;
- (void)handleTouchEvent:(long long)arg1 forCell:(id)arg2;
- (void)handleLongPressGesture:(id)arg1;
- (_Bool)shouldLongPressForOneUp;
- (void)handleDoubleTapGesture:(id)arg1;
- (_Bool)canBeginDoubleTapGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)_navigateToPhotoAtIndexPath:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (id)createOneUpTransitionController;
- (void)presentOneUpViewController:(id)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;
- (id)oneUpViewControllerForItemAtIndexPath:(id)arg1;
- (void)updateDataSourceManagerFilters;
- (double)sectionedGridLayout:(id)arg1 accessibilitySectionHeaderHeightForVisualSection:(long long)arg2;
- (double)sectionedGridLayout:(id)arg1 sectionHeaderHeightForVisualSection:(long long)arg2;
- (_Bool)anyAlreadyImportedItemsAreSelected;
- (void)updateAlreadyImportedCollapseStatus;
- (void)toggleAlreadyImportedExpansion;
- (void)selectAllSelectableItems;
- (_Bool)areAllItemsSelectedInAssetCollection:(id)arg1;
- (void)setAllItemsSelected:(_Bool)arg1 inAssetCollection:(id)arg2;
- (_Bool)sectionHeadersCoverLocation:(struct CGPoint)arg1;
- (void)updateHeaderView:(id)arg1 forAssetCollection:(id)arg2;
- (void)updateHeaderView:(id)arg1 forAlreadyImportedAssetCollection:(id)arg2;
- (void)headerViewDidPressActionButton:(id)arg1;
- (void)configureCollectionViewGridLayout:(id)arg1;
- (void)_getDataForVisualSection:(long long)arg1 hasActionButton:(_Bool *)arg2 title:(id *)arg3 startDate:(id *)arg4 endDate:(id *)arg5;
- (void)_updateBackdropGroupNameForHeaderView:(id)arg1;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)updateAlreadyImportedHeaderIfVisible;
- (id)newGridLayout;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2 buttonTitle:(id *)arg3 buttonAction:(CDUnknownBlockType *)arg4;
- (_Bool)importSourceIsAppleDevice;
- (_Bool)wantsPlaceholderView;
- (_Bool)isEmpty;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (_Bool)canDragOut;
- (long long)thumbnailContentFillMode;
- (id)thumbnailForModel:(id)arg1;
- (void)importCell:(id)arg1 didRequestCancellationOfThumbnailRequestWithID:(long long)arg2;
- (long long)importCell:(id)arg1 requestImageForImportItem:(id)arg2 ofSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (struct CGSize)gridItemSize;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)notifyUserOfImportCompletionIfNeededWithImportSession:(id)arg1 results:(id)arg2;
- (void)importController:(id)arg1 didCompleteImportWithImportSession:(id)arg2 results:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_importControllerWillBeginAction;
- (void)_importControllerDidEndAction;
- (id)importDestinationForActionCoordinator:(id)arg1;
- (void)actionCoordinatorDidEndDelete:(id)arg1;
- (void)actionCoordinatorDidBeginDelete:(id)arg1;
- (void)actionCoordinatorWillBeginDelete:(id)arg1;
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
- (void)actionCoordinatorDidCancelImport:(id)arg1;
- (void)actionCoordinatorDidBeginImport:(id)arg1;
- (void)actionCoordinatorWillBeginImport:(id)arg1;
- (id)_navigationViewControllerForViewController:(id)arg1;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)collectionSelected:(id)arg1;
- (id)accessibilityLabelForAlbumPickerControlWithDestination:(id)arg1;
- (id)titleForDestinationCollection:(id)arg1;
- (void)cancelAlbumPickerPopover:(id)arg1;
- (void)presentAlbumPickerFromView:(id)arg1 orBarItem:(id)arg2;
- (void)showAlbumPicker:(id)arg1;
- (void)didTapAddToAlbumsView:(id)arg1;
- (void)importControllerProgressDidChange:(id)arg1 completedItemCount:(id)arg2 totalItemCount:(id)arg3 context:(id)arg4;
- (void)stopImport:(id)arg1;
- (void)delete:(id)arg1;
- (void)import:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)transitionFromDataSource:(id)arg1 toDataSource:(id)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleNewDataSource:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(retain, nonatomic) PHImportSource *importSource;
- (void)_cancelAlerts;
- (_Bool)isImporting;
- (_Bool)isBusy;
- (void)handleImportCompleteAlertResponse:(struct __CFUserNotification *)arg1 flags:(unsigned long long)arg2;
- (void)_deleteItems:(id)arg1;
- (void)_endImport;
- (void)_beginImport;
- (void)_resumePhotoStreams;
- (void)_pausePhotoStreams;
- (void)_endUninterruptibleOperation;
- (void)_beginUninterruptibleOperation;
- (void)_updateItemViewAtIndex:(id)arg1;
- (void)_updateCell:(id)arg1 atIndex:(id)arg2;
- (void)_deselectCell:(id)arg1;
- (void)_selectCell:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)importSectionedGridLayout:(id)arg1 shouldEmphasizeSection:(unsigned long long)arg2;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (id)_bestReferenceItemIndexPath;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)_newGridLayoutFromSpec:(id)arg1;
- (id)_gridLayout;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateLayoutMetrics;
- (void)_updateContentOffsetForPendingViewSizeTransition;
- (_Bool)updateSpec;
- (void)_invalidateCachedViewSizeTransitionContext;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithSpec:(id)arg1;
- (id)init;
- (_Bool)compactWidthToolbarCoversLocation:(struct CGPoint)arg1;
- (void)updateCompactWidthToolbarTopConstraint;
- (void)updateContentInsetForCompactWidthToolbar;
- (void)updateCompactWidthToolbarVisibility;
- (void)setUpCompactWidthToolbar;
- (void)_updateCompactToolbar;
- (void)updateNavigationTitleViewVisibilityAnimated:(_Bool)arg1;
- (id)deleteButtonItem;
- (_Bool)compactLayoutMode;
- (long long)_titleViewVerticalSizeClassForExtendedTraitCollection:(id)arg1;
- (void)updateContentInfoBarButtonTitlesWithItems:(id)arg1 sizeString:(id)arg2 itemsAreSelected:(_Bool)arg3;
- (void)updateNavigationTitleWithItems:(id)arg1 sizeString:(id)arg2 itemsAreSelected:(_Bool)arg3;
- (void)updateContentInfoLabels;
- (void)_dismissPopupsAnimated:(_Bool)arg1;
- (void)_updateToolbarAnimated:(_Bool)arg1;
- (_Bool)_isItemVisibleAtIndex:(id)arg1;
- (void)reloadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
