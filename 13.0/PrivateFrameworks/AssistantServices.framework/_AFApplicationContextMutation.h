//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFApplicationContextMutating-Protocol.h>

@class AFApplicationContext, AFBulletin, AceObject, NSDictionary, NSString;

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating>
{
    AFApplicationContext *_baseModel;
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasAssociatedBundleIdentifier:1;
        unsigned int hasBulletin:1;
        unsigned int hasAceContext:1;
        unsigned int hasContextDictionary:1;
    } _mutationFlags;
}

- (void).cxx_destruct;
- (id)generate;
- (void)setContextDictionary:(id)arg1;
- (void)setAceContext:(id)arg1;
- (void)setBulletin:(id)arg1;
- (void)setAssociatedBundleIdentifier:(id)arg1;
- (id)initWithBaseModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
