//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol OS_tcp_listener;

@interface _NSCFServer : NSObject
{
    _Bool _enableCoprocessorInterface;
    long long _type;
    long long _listenerPort;
    NSString *_interface;
    NSDictionary *_configuration;
    NSNumber *_listenerID;
    NSObject<OS_tcp_listener> *_listener;
}

+ (id)adressesForInterface:(id)arg1;
+ (_Bool)stopAll;
+ (_Bool)startSocksServerWithPort:(long long)arg1;
+ (id)listeners;
@property(retain) NSObject<OS_tcp_listener> *listener; // @synthesize listener=_listener;
@property(retain) NSNumber *listenerID; // @synthesize listenerID=_listenerID;
@property(getter=isCoprocessorInterfaceEnabled) _Bool enableCoprocessorInterface; // @synthesize enableCoprocessorInterface=_enableCoprocessorInterface;
@property(retain) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(retain) NSString *interface; // @synthesize interface=_interface;
@property long long listenerPort; // @synthesize listenerPort=_listenerPort;
@property long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)stop;
- (_Bool)startWithAcceptHandler:(CDUnknownBlockType)arg1;
- (_Bool)start;
- (id)init;
- (id)initWithType:(long long)arg1 port:(long long)arg2;
- (id)initWithType:(long long)arg1;
- (id)initWithType:(long long)arg1 port:(long long)arg2 interface:(id)arg3;

@end
