//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "NavigationCameraSnapshotsObserver-Protocol.h"

@class NSString;
@protocol NavigationCameraSnapshotPickerDelegate;

__attribute__((visibility("hidden")))
@interface NavigationCameraSnapshotPickerViewController : UITableViewController <NavigationCameraSnapshotsObserver>
{
    id <NavigationCameraSnapshotPickerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <NavigationCameraSnapshotPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cameraSnapshotsManager:(id)arg1 didRemoveAtIndex:(unsigned long long)arg2 fromTraceFile:(id)arg3;
- (void)cameraSnapshotsManager:(id)arg1 didInsertAtIndex:(unsigned long long)arg2 toTraceFile:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)_detailTextForSnapshot:(id)arg1;
- (void)_configureCell:(id)arg1 withCameraSnapshot:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)_registerTableViewCells;
- (id)cameraSnapshots;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
