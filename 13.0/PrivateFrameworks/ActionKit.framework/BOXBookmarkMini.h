//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/BOXItemMini.h>

@class NSURL;

@interface BOXBookmarkMini : BOXItemMini
{
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (_Bool)isBookmark;
- (id)initWithJSON:(id)arg1;

@end
