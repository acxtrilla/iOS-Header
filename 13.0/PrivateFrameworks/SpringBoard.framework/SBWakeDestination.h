//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SBSRemoteAlertDefinition;

@interface SBWakeDestination : NSObject
{
    unsigned long long _type;
    NSString *_identifier;
    SBSRemoteAlertDefinition *_remoteAlertDefinition;
}

@property(retain, nonatomic) SBSRemoteAlertDefinition *remoteAlertDefinition; // @synthesize remoteAlertDefinition=_remoteAlertDefinition;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
