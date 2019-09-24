//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsUI/SGEventSuggestionBase.h>

#import <CoreSuggestionsUI/EKEventEditViewDelegate-Protocol.h>
#import <CoreSuggestionsUI/EKEventViewDelegate-Protocol.h>
#import <CoreSuggestionsUI/EKEventViewDelegatePrivate-Protocol.h>

@class NSString, UIImage;

@interface SGEventSuggestion : SGEventSuggestionBase <EKEventViewDelegate, EKEventEditViewDelegate, EKEventViewDelegatePrivate>
{
    UIImage *_calendarImage;
}

+ (id)calendarImage;
- (void).cxx_destruct;
- (id)suggestionImage;
- (_Bool)eventViewControllerShouldAlwaysShowNavBar:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (void)_dismissViewController:(id)arg1 andSignalCompletionWithResult:(_Bool)arg2;
- (id)suggestionPrimaryAction;
- (id)suggestionAttributedSubtitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
