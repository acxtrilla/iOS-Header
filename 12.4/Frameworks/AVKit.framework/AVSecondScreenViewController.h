//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AVPlayerLayer, AVSecondScreenPlayerLayerView, UILabel, UIView;

@interface AVSecondScreenViewController : UIViewController
{
    _Bool _playingOnSecondScreen;
    UIView *_contentView;
    AVPlayerLayer *_sourcePlayerLayer;
    UILabel *_debugLabel;
    AVSecondScreenPlayerLayerView *_playerLayerView;
}

@property(retain, nonatomic) AVSecondScreenPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(readonly, nonatomic) UILabel *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(nonatomic) __weak AVPlayerLayer *sourcePlayerLayer; // @synthesize sourcePlayerLayer=_sourcePlayerLayer;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
- (void).cxx_destruct;
- (void)_updateLayout;
- (void)_updateContentViewIfNeeded;
- (void)setDebugText:(id)arg1;
- (id)debugText;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
@property(readonly, nonatomic) struct CGSize videoDisplaySize;
- (void)loadPlayerLayerViewIfNeeded;
- (void)dealloc;

@end
