//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MKMuninEntryPoint, MKMuninView;

@protocol MuninPresentation <NSObject>
- (void)exitMunin;
- (void)enterMuninWithEntryPoint:(MKMuninEntryPoint *)arg1 muninView:(MKMuninView *)arg2 showsFullScreen:(_Bool)arg3 originFrame:(struct CGRect)arg4;
@end

