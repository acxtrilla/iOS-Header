//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CarMultiButtonView.h"

#import "CarFocusOrderCollection-Protocol.h"

@class CarFocusableImageButton, NSArray, NSString;
@protocol CarZoomButtonViewDelegate;

__attribute__((visibility("hidden")))
@interface CarZoomButtonView : CarMultiButtonView <CarFocusOrderCollection>
{
    CarFocusableImageButton *_zoomInButton;
    CarFocusableImageButton *_zoomOutButton;
    id <CarZoomButtonViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CarZoomButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)setZoomOutEnabled:(_Bool)arg1;
- (void)setZoomInEnabled:(_Bool)arg1;
- (void)_zoomOut:(id)arg1;
- (void)_zoomIn:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end
