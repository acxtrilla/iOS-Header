//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LSApplicationProxy, NSBundle, NSString;

@interface IXSUninstallAlert : NSObject
{
    _Bool _appIsRemovable;
    LSApplicationProxy *_appProxy;
    CDUnknownBlockType _completion;
    NSBundle *_stringsBundle;
    NSString *_stringsFileName;
    NSString *_typeDescription;
}

@property(retain, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(retain, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(retain, nonatomic) NSBundle *stringsBundle; // @synthesize stringsBundle=_stringsBundle;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) _Bool appIsRemovable; // @synthesize appIsRemovable=_appIsRemovable;
@property(readonly, nonatomic) LSApplicationProxy *appProxy; // @synthesize appProxy=_appProxy;
- (void).cxx_destruct;
- (void)displayAlertWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *cancelButtonLabel; // @dynamic cancelButtonLabel;
@property(readonly, nonatomic) NSString *deleteButtonLabel; // @dynamic deleteButtonLabel;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
@property(readonly, nonatomic) NSString *title; // @dynamic title;
- (id)initWithAppProxy:(id)arg1 isRemovable:(_Bool)arg2;

@end
