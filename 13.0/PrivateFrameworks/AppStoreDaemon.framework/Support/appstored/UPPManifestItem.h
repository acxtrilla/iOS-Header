//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface UPPManifestItem : NSObject
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
@property(readonly) NSString *title;
@property(readonly) NSDictionary *thinnedAssetsCategorized;
@property(readonly) NSArray *thinnedAssets;
@property(readonly) NSString *subtitle;
@property(readonly) NSString *platformIdentifier;
@property(readonly) _Bool launchProhibited;
@property(readonly) NSString *kind;
@property(readonly) _Bool hasMessagesExtension;
@property(readonly) NSString *bundleVersion;
@property(readonly) NSString *bundleID;
@property(readonly) NSDictionary *assetsCategorized;
@property(readonly) NSArray *assets;
- (id)initWithDictionary:(id)arg1;

@end

