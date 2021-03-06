//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFParameterComponent.h>

@class WFLocationParameterState, WFParameter;
@protocol WFComponentNavigationContext, WFVariableProvider;

@interface WFLocationParameterComponent : WFParameterComponent
{
    _Bool _processing;
    WFParameter *_parameter;
    CDUnknownBlockType _updateBlock;
    WFLocationParameterState *_state;
    id <WFComponentNavigationContext> _navigationContext;
    id <WFVariableProvider> _variableProvider;
}

+ (id)newWithParameter:(id)arg1 state:(id)arg2 updateBlock:(CDUnknownBlockType)arg3 options:(struct WFParameterComponentOptions)arg4 variableProvider:(id)arg5 variableUIDelegate:(id)arg6 navigationContext:(id)arg7 labelsToAlignTo:(id)arg8;
@property(nonatomic) _Bool processing; // @synthesize processing=_processing;
@property(readonly, nonatomic) id <WFVariableProvider> variableProvider; // @synthesize variableProvider=_variableProvider;
@property(readonly, nonatomic) __weak id <WFComponentNavigationContext> navigationContext; // @synthesize navigationContext=_navigationContext;
@property(readonly, nonatomic) WFLocationParameterState *state; // @synthesize state=_state;
- (CDUnknownBlockType)updateBlock;
- (id)parameter;
- (void).cxx_destruct;

@end

