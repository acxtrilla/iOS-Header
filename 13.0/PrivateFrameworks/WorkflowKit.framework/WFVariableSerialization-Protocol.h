//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class WFParameter;
@protocol WFPropertyListObject, WFVariableProvider;

@protocol WFVariableSerialization <NSObject>
- (id <WFPropertyListObject>)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id <WFPropertyListObject>)arg1 variableProvider:(id <WFVariableProvider>)arg2 parameter:(WFParameter *)arg3;
@end
