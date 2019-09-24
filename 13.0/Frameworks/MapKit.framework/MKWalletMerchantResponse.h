//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOPDMerchantLookupResult, MKMapItem, MKWalletMerchantStylingInfo, NSString;
@protocol GEOMapItem;

@interface MKWalletMerchantResponse : NSObject
{
    id <GEOMapItem> _mapItem;
    GEOPDMerchantLookupResult *_merchantLookupResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *heroImageProviderName;
- (id)bestHeroImageForSize:(struct CGSize)arg1 allowSmaller:(_Bool)arg2;
- (_Bool)_validHeroImageForPhoto:(id)arg1;
@property(readonly, nonatomic) MKMapItem *mapItem;
@property(readonly, nonatomic) NSString *walletCategoryIdentifier;
@property(readonly, nonatomic) NSString *mapsCategoryIdentifier;
@property(readonly, nonatomic) NSString *localizedWalletCategoryLanguage;
@property(readonly, nonatomic) NSString *localizedWalletCategoryName;
@property(readonly, nonatomic) MKWalletMerchantStylingInfo *walletCategoryStyling;
@property(readonly, nonatomic) NSString *localizedPlaceLanguage;
@property(readonly, nonatomic) NSString *localizedPlaceName;
@property(readonly, nonatomic) MKWalletMerchantStylingInfo *placeStyling;
- (id)initWithMerchantLookupResult:(id)arg1;
- (id)initWithGEOMapItem:(id)arg1;

@end
