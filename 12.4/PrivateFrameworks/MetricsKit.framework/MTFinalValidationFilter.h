//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

#import <MetricsKit/MTEventFilter-Protocol.h>

@class NSString;

@interface MTFinalValidationFilter : MTObject <MTEventFilter>
{
    _Bool _shouldApplyDeRes;
}

@property(nonatomic) _Bool shouldApplyDeRes; // @synthesize shouldApplyDeRes=_shouldApplyDeRes;
- (id)apply:(id)arg1;
- (void)validateFields:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

