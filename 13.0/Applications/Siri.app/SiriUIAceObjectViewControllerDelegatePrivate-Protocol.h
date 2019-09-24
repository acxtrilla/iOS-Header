//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFUserUtteranceSelectionResults, NSString;
@protocol SiriUIViewController;

@protocol SiriUIAceObjectViewControllerDelegatePrivate <NSObject>
- (void)siriViewControllerRequestTearDownEditingViewController:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerRequestToPin:(id <SiriUIViewController>)arg1;
- (void)siriViewController:(id <SiriUIViewController>)arg1 startCorrectedSpeechRequestWithText:(NSString *)arg2 correctionIdentifier:(id)arg3 userSelectionResults:(AFUserUtteranceSelectionResults *)arg4;
- (void)siriViewControllerDidEndEditing:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerWillBeginEditing:(id <SiriUIViewController>)arg1;
- (void)siriViewControllerRequestKeyboardForTapToEditWithCompletion:(void (^)(_Bool))arg1;
- (_Bool)siriViewControllerShouldPreventUserInteraction:(id <SiriUIViewController>)arg1;
@end
