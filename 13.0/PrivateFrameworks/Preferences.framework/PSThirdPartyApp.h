//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSString;

@interface PSThirdPartyApp : NSObject
{
    NSString *_localizedName;
    LSApplicationProxy *_proxy;
}

@property(readonly, nonatomic) LSApplicationProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (id)description;
- (void)load;
- (id)localizedName;
- (id)initWithApplicationProxy:(id)arg1;

@end

