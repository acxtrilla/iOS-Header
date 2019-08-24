//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCMediaRemoteController, MPCPlayerPath, NSDictionary, NSString;

@interface MPCPlayerCommandRequest : NSObject
{
    unsigned int _command;
    NSDictionary *_options;
    NSDictionary *_userInitiatedOptions;
    MPCMediaRemoteController *_controller;
    MPCPlayerPath *_playerPath;
    NSString *_label;
}

@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) MPCPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
@property(readonly, nonatomic) MPCMediaRemoteController *controller; // @synthesize controller=_controller;
@property(copy, nonatomic) NSDictionary *userInitiatedOptions; // @synthesize userInitiatedOptions=_userInitiatedOptions;
@property(readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(readonly, nonatomic) unsigned int command; // @synthesize command=_command;
- (void).cxx_destruct;
- (void)setCommandOptionValue:(id)arg1 forKey:(id)arg2;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 playerPath:(id)arg3 label:(id)arg4;
- (id)initWithMediaRemoteCommand:(unsigned int)arg1 options:(id)arg2 response:(id)arg3;

@end
