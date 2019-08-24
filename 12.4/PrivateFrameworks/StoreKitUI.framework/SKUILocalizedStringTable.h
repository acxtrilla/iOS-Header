//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSString;

@interface SKUILocalizedStringTable : NSObject
{
    NSDictionary *_strings;
    NSBundle *_bundle;
    NSString *_tableName;
}

@property(readonly, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)_legacyLanguageNameForLanguageCode:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)initWithBundle:(id)arg1 localeName:(id)arg2 tableName:(id)arg3;

@end
