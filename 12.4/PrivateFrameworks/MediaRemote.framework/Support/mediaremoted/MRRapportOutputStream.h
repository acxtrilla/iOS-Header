//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRAVBufferedOutputStream.h>

@class RPCompanionLinkClient, RPCompanionLinkDevice;

@interface MRRapportOutputStream : MRAVBufferedOutputStream
{
    RPCompanionLinkClient *_client;
    RPCompanionLinkDevice *_device;
}

- (void).cxx_destruct;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithDevice:(id)arg1;

@end
