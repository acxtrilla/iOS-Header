//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol GlyphMethods, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LAPKGlyphWrapper : NSObject
{
    _Bool _fastAnimations;
    _Bool _grayedOut;
    UIView *_view;
    UIView<GlyphMethods> *_glyphView;
    UIView<GlyphMethods> *_idleTouchID;
    NSObject<OS_dispatch_queue> *_glyphQueue;
}

+ (Class)_loadClassFromString:(id)arg1;
+ (void *)_loadPKUI;
+ (id)glyphWithStyle:(long long)arg1 frame:(struct CGRect)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *glyphQueue; // @synthesize glyphQueue=_glyphQueue;
@property(readonly, nonatomic) UIView<GlyphMethods> *idleTouchID; // @synthesize idleTouchID=_idleTouchID;
@property(readonly, nonatomic) UIView<GlyphMethods> *glyphView; // @synthesize glyphView=_glyphView;
@property(nonatomic) _Bool grayedOut; // @synthesize grayedOut=_grayedOut;
@property(nonatomic) _Bool fastAnimations; // @synthesize fastAnimations=_fastAnimations;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)setState:(long long)arg1 idleTouchID:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (double)_minimumAnimationDurationForState:(long long)arg1;
- (id)initWithGlyphView:(id)arg1;

@end
