//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Cards/CRFeedback-Protocol.h>

@protocol CRCard;

@protocol CRAsyncCardRequestFeedback <CRFeedback>
@property(retain, nonatomic) id <CRCard> requestedCard;
@property(retain, nonatomic) id <CRCard> baseCard;
@end
