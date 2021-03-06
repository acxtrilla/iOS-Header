//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/LPEmailCompatibleCaptionBarItemChild-Protocol.h>

@class LPPadding, LPPointUnit, LPTextRowStyle;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild>
{
    _Bool _shouldAlignToBaselines;
    unsigned int _maximumNumberOfLines;
    LPPointUnit *_firstLineLeading;
    LPPointUnit *_lastLineDescent;
    LPTextRowStyle *_aboveTopCaption;
    LPTextRowStyle *_topCaption;
    LPTextRowStyle *_bottomCaption;
    LPTextRowStyle *_belowBottomCaption;
    LPPadding *_captionTextPadding;
    LPPadding *_emailCompatibleMargin;
}

@property(readonly, retain, nonatomic) LPPadding *emailCompatibleMargin; // @synthesize emailCompatibleMargin=_emailCompatibleMargin;
@property(readonly, retain, nonatomic) LPPadding *captionTextPadding; // @synthesize captionTextPadding=_captionTextPadding;
@property(nonatomic) _Bool shouldAlignToBaselines; // @synthesize shouldAlignToBaselines=_shouldAlignToBaselines;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(readonly, nonatomic) LPTextRowStyle *belowBottomCaption; // @synthesize belowBottomCaption=_belowBottomCaption;
@property(readonly, nonatomic) LPTextRowStyle *bottomCaption; // @synthesize bottomCaption=_bottomCaption;
@property(readonly, nonatomic) LPTextRowStyle *topCaption; // @synthesize topCaption=_topCaption;
@property(readonly, nonatomic) LPTextRowStyle *aboveTopCaption; // @synthesize aboveTopCaption=_aboveTopCaption;
@property(retain, nonatomic) LPPointUnit *lastLineDescent; // @synthesize lastLineDescent=_lastLineDescent;
@property(retain, nonatomic) LPPointUnit *firstLineLeading; // @synthesize firstLineLeading=_firstLineLeading;
- (void).cxx_destruct;
- (void)applyToAllTextViewStyles:(CDUnknownBlockType)arg1;
- (id)initWithPlatform:(long long)arg1;

@end

