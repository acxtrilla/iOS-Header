//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDColumnView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell
{
    _Bool _constraintsForTwoColumns;
    UIKeyCommandDiscoverabilityHUDColumnView *_leftColumnView;
    UIKeyCommandDiscoverabilityHUDColumnView *_rightColumnView;
    NSArray *_constraints;
}

@property(nonatomic) _Bool constraintsForTwoColumns; // @synthesize constraintsForTwoColumns=_constraintsForTwoColumns;
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView; // @synthesize rightColumnView=_rightColumnView;
@property(retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView; // @synthesize leftColumnView=_leftColumnView;
- (void).cxx_destruct;

@end
