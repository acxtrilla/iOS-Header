//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class INSchema, NSDictionary, NSMutableDictionary, NSOrderedSet, NSString;

@interface INCodableDescription : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_attributesByName;
    INSchema *_schema;
    NSString *_className;
    NSString *_typeName;
    NSDictionary *_attributes;
    NSOrderedSet *_displayOrderedAttributes;
    NSString *_localizationTable;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *localizationTable; // @synthesize localizationTable=_localizationTable;
@property(copy, nonatomic) NSOrderedSet *displayOrderedAttributes; // @synthesize displayOrderedAttributes=_displayOrderedAttributes;
@property(copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) __weak INSchema *schema; // @synthesize schema=_schema;
- (void).cxx_destruct;
- (unsigned long long)highestAttributeTag;
- (id)attributeByName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)description;

@end

