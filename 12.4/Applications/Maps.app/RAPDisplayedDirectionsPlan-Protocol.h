//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPUserDirectionRequest-Protocol.h"

@class NSArray;
@protocol RAPRouteSuggestion;

@protocol RAPDisplayedDirectionsPlan <RAPUserDirectionRequest>
@property(readonly, nonatomic) NSArray *displayedRouteSuggestions;
- (_Bool)getRoutesIndex:(out unsigned long long *)arg1 directionsResponseIndex:(out unsigned long long *)arg2 forRouteSuggestion:(id <RAPRouteSuggestion>)arg3;
@end
