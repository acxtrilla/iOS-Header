//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSString, WFVariable, WFVariableConfigurationResponder;

@protocol WFVariableConfigurationResponderDelegate <NSObject>
- (void)variableResponder:(WFVariableConfigurationResponder *)arg1 presentPromptWithTitle:(NSString *)arg2 message:(NSString *)arg3 fieldConfigurationHandler:(void (^)(id <WFAlertTextField>))arg4 commitHandler:(void (^)(NSString *))arg5;
- (void)variableResponder:(WFVariableConfigurationResponder *)arg1 didUpdateVariable:(WFVariable *)arg2;
- (void)variableResponderDidRevealAction:(WFVariableConfigurationResponder *)arg1;
- (void)variableResponderDidDelete:(WFVariableConfigurationResponder *)arg1 withReplacementText:(NSString *)arg2;
- (_Bool)variableResponderHasText:(WFVariableConfigurationResponder *)arg1;

@optional
- (void)variableResponderDidReturnToKeyboard:(WFVariableConfigurationResponder *)arg1;
- (void)variableResponderDidEndEditing:(WFVariableConfigurationResponder *)arg1;
- (void)variableResponderWillEndEditing:(WFVariableConfigurationResponder *)arg1;
- (void)variableResponderDidBeginEditing:(WFVariableConfigurationResponder *)arg1;
@end
