//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface _SFPasswordPickerTableConfiguration : NSObject
{
    _Bool _forUserNamesOnly;
    _Bool _shouldShowIcons;
    NSString *_prompt;
    NSArray *_serviceNameHintStrings;
    NSArray *_domainHintStrings;
    unsigned long long _minimumNumberOfCredentialsToShowLikelyMatchesSection;
}

@property(nonatomic) _Bool shouldShowIcons; // @synthesize shouldShowIcons=_shouldShowIcons;
@property(nonatomic) _Bool forUserNamesOnly; // @synthesize forUserNamesOnly=_forUserNamesOnly;
@property(nonatomic) unsigned long long minimumNumberOfCredentialsToShowLikelyMatchesSection; // @synthesize minimumNumberOfCredentialsToShowLikelyMatchesSection=_minimumNumberOfCredentialsToShowLikelyMatchesSection;
@property(copy, nonatomic) NSArray *domainHintStrings; // @synthesize domainHintStrings=_domainHintStrings;
@property(copy, nonatomic) NSArray *serviceNameHintStrings; // @synthesize serviceNameHintStrings=_serviceNameHintStrings;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (void).cxx_destruct;

@end
