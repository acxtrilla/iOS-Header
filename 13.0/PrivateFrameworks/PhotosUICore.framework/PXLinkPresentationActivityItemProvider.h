//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIActivityItemLinkPresentationSource-Protocol.h>

@class NSString, PXLinkPresentationConfiguration;

@interface PXLinkPresentationActivityItemProvider : NSObject <UIActivityItemLinkPresentationSource>
{
    PXLinkPresentationConfiguration *_configuration;
}

@property(readonly, nonatomic) PXLinkPresentationConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)_linkMetadataForConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
