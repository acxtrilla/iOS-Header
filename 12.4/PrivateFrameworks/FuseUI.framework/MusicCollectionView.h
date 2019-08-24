//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class UITraitCollection;
@protocol MusicCollectionViewDelegate;

@interface MusicCollectionView : UICollectionView
{
    UITraitCollection *_cachedTraitCollection;
    _Bool _shouldTreatContentOffsetChangesAsDeltas;
}

@property(nonatomic) _Bool shouldTreatContentOffsetChangesAsDeltas; // @synthesize shouldTreatContentOffsetChangesAsDeltas=_shouldTreatContentOffsetChangesAsDeltas;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollection;
- (void)tintColorDidChange;

// Remaining properties
@property(nonatomic) id <MusicCollectionViewDelegate> delegate; // @dynamic delegate;

@end
