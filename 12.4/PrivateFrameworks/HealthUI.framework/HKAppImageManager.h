//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSURLSessionDataDelegate-Protocol.h>
#import <HealthUI/NSURLSessionDelegate-Protocol.h>
#import <HealthUI/NSURLSessionTaskDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession, UIImage;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSMapTable *_containers;
    NSMutableDictionary *_urlConnections;
    NSCache *_iconCache;
    NSMutableDictionary *_outstandingRequests;
}

+ (id)sharedImageManager;
@property(retain) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(retain) NSCache *iconCache; // @synthesize iconCache=_iconCache;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)cancelLoadAppImageAtURL:(id)arg1;
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enqueueRequestForAppIconForIdentifier:(id)arg1;
- (void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2;
- (_Bool)_fetchIconFromLaunchServicesWithIdentifier:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)loadAppIconForIdentifier:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (void)clearImageCache;
@property(readonly) UIImage *defaultAppIconTableUI;
- (id)defaultAppIcon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
