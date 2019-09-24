//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXConditionalResolverModifierInstructions-Protocol.h>

@class NSString;
@protocol SXDocumentProviding, SXHintsConfigurationOptionProvider;

@interface SXConditionalResolverModifierInstructions : NSObject <SXConditionalResolverModifierInstructions>
{
    id <SXDocumentProviding> _documentProvider;
    id <SXHintsConfigurationOptionProvider> _hintsConfigurationOptionProvider;
}

@property(readonly, nonatomic) id <SXHintsConfigurationOptionProvider> hintsConfigurationOptionProvider; // @synthesize hintsConfigurationOptionProvider=_hintsConfigurationOptionProvider;
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
- (void).cxx_destruct;
- (id)hints;
@property(readonly, nonatomic) _Bool shouldResolveTextStyles;
@property(readonly, nonatomic) _Bool shouldResolveDocumentStyle;
@property(readonly, nonatomic) _Bool shouldResolveComponentTextStyles;
@property(readonly, nonatomic) _Bool shouldResolveComponentStyles;
@property(readonly, nonatomic) _Bool shouldResolveComponentLayouts;
@property(readonly, nonatomic) _Bool shouldResolveComponents;
@property(readonly, nonatomic) _Bool shouldResolveAutoplacement;
- (id)initWithDocumentProvider:(id)arg1 hintsConfigurationOptionProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
