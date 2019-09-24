//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INJSONSerializable-Protocol.h>

@class NSDictionary, NSString;

@interface INParameterContexts : NSObject <INJSONSerializable>
{
    NSDictionary *_suggestedValuesDictionary;
    NSDictionary *_typedSuggestedValuesDictionary;
}

+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
@property(retain, nonatomic, setter=_setTypedSuggestedValuesDictionary:) NSDictionary *_typedSuggestedValuesDictionary; // @synthesize _typedSuggestedValuesDictionary;
@property(retain, nonatomic, setter=_setSuggestedValuesDictionary:) NSDictionary *_suggestedValuesDictionary; // @synthesize _suggestedValuesDictionary;
- (void).cxx_destruct;
- (void)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)_isEmpty;
- (void)_updateSuggestedValuesForIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3;
- (id)_initWithIntent:(id)arg1 decoder:(id)arg2 JSONDictionary:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
