//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HSNFCManagerDelegate;

@interface HSNFCManager : NSObject
{
    id <HSNFCManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <HSNFCManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)readerSupportedWithError:(id *)arg1;
- (void)stop;
- (id)start;
- (id)initWithDelegate:(id)arg1;

@end

