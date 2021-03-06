//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerItemObserverFactory-Protocol.h>

@class NSString;
@protocol SVPlayerProviding;

@interface SVPlayerItemObserverFactory : NSObject <SVPlayerItemObserverFactory>
{
    id <SVPlayerProviding> _playerProvider;
}

@property(readonly, nonatomic) id <SVPlayerProviding> playerProvider; // @synthesize playerProvider=_playerProvider;
- (void).cxx_destruct;
- (id)createPlayerItemObserverForVideo:(id)arg1;
- (id)initWithPlayerProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

