//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXPeopleMeViewControllerDataSource-Protocol.h>

@class CNContact, NSString;
@protocol PXPerson;

@interface PXUIPeopleMeDataSource : NSObject <PXPeopleMeViewControllerDataSource>
{
    _Bool _requestedSuggestedPerson;
    _Bool _requestedMeContact;
    id <PXPerson> _suggestedPerson;
    CNContact *_meContact;
}

@property(nonatomic, getter=hasRequestedMeContact) _Bool requestedMeContact; // @synthesize requestedMeContact=_requestedMeContact;
@property(nonatomic, getter=hasRequestedSuggestedPerson) _Bool requestedSuggestedPerson; // @synthesize requestedSuggestedPerson=_requestedSuggestedPerson;
@property(retain, nonatomic) CNContact *meContact; // @synthesize meContact=_meContact;
@property(retain, nonatomic) id <PXPerson> suggestedPerson; // @synthesize suggestedPerson=_suggestedPerson;
- (void).cxx_destruct;
- (void)userDidAnswerMeViewController:(id)arg1 withResponse:(_Bool)arg2 suggestedPerson:(id)arg3;
- (id)suggestedPersonForMeViewController:(id)arg1;
- (void)_persistSuggestedPersonAsMe;
- (id)_suggestedPersonForMe;
- (void)_requestMeContactWithCompletion:(CDUnknownBlockType)arg1;
- (void)hasSuggestedPersonForMeWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

