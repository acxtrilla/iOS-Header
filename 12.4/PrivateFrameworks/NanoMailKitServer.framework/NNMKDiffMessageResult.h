//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface NNMKDiffMessageResult : NSObject
{
    _Bool _trimed;
    NSMutableSet *_messageIdsToAddToWatch;
    NSMutableSet *_messageIdsToUpdateOnWatch;
    NSMutableSet *_messageIdsToDeleteFromWatch;
    NSArray *_messageToAddToWatch;
}

@property(nonatomic) _Bool trimed; // @synthesize trimed=_trimed;
@property(retain, nonatomic) NSArray *messageToAddToWatch; // @synthesize messageToAddToWatch=_messageToAddToWatch;
@property(retain, nonatomic) NSMutableSet *messageIdsToDeleteFromWatch; // @synthesize messageIdsToDeleteFromWatch=_messageIdsToDeleteFromWatch;
@property(retain, nonatomic) NSMutableSet *messageIdsToUpdateOnWatch; // @synthesize messageIdsToUpdateOnWatch=_messageIdsToUpdateOnWatch;
@property(retain, nonatomic) NSMutableSet *messageIdsToAddToWatch; // @synthesize messageIdsToAddToWatch=_messageIdsToAddToWatch;
- (void).cxx_destruct;

@end
