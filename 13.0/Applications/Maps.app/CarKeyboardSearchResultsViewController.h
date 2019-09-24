//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarKeyboardResultsProviding-Protocol.h"
#import "SearchDataProviderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CarKeyboardModeController, NSMapTable, NSString, SearchDataProvider, UITableView;

__attribute__((visibility("hidden")))
@interface CarKeyboardSearchResultsViewController : UIViewController <SearchDataProviderDelegate, UITableViewDelegate, UITableViewDataSource, CarKeyboardResultsProviding>
{
    SearchDataProvider *_searchDataProvider;
    NSString *_inputText;
    long long _cellStyle;
    NSMapTable *_modelsByItem;
    CarKeyboardModeController *_keyboardMode;
    UITableView *_searchResultTableView;
}

@property(retain, nonatomic) UITableView *searchResultTableView; // @synthesize searchResultTableView=_searchResultTableView;
@property(nonatomic) __weak CarKeyboardModeController *keyboardMode; // @synthesize keyboardMode=_keyboardMode;
- (void).cxx_destruct;
- (id)modelForItemAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)searchDataProviderDidUpdate:(id)arg1;
- (void)handleCancelButtonPressed;
- (void)handleSearchTextDidChange:(id)arg1;
- (void)handleSearchButtonPressedWithText:(id)arg1;
- (void)updateForInteractionModel:(unsigned long long)arg1;
- (void)prepareTableView;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
