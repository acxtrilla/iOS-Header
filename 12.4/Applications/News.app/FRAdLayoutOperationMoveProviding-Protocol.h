//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FRAdLayoutOperationProviding-Protocol.h"

@class NFLFeedCollectionViewLayoutAttributes, NSString;
@protocol NFLFeedTileInfo;

@protocol FRAdLayoutOperationMoveProviding <FRAdLayoutOperationProviding>
@property(readonly, nonatomic) NFLFeedCollectionViewLayoutAttributes *insertionLayoutAttributes;
@property(readonly, copy, nonatomic) id <NFLFeedTileInfo> insertionTileInfo;
@property(readonly, copy, nonatomic) NSString *destinationIdentifier;
@end
