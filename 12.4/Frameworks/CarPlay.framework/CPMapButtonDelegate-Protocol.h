//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlay/CPControlDelegate-Protocol.h>

@class CPMapButton, UIImage;

@protocol CPMapButtonDelegate <CPControlDelegate>
- (_Bool)mapButton:(CPMapButton *)arg1 setFocusedImage:(UIImage *)arg2;
- (_Bool)mapButton:(CPMapButton *)arg1 setImage:(UIImage *)arg2;
- (_Bool)mapButton:(CPMapButton *)arg1 setHidden:(_Bool)arg2;
@end
