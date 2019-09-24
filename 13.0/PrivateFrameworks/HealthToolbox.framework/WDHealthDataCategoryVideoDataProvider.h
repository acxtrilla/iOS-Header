//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKDisplayCategory, NSString;

__attribute__((visibility("hidden")))
@interface WDHealthDataCategoryVideoDataProvider : NSObject
{
    HKDisplayCategory *_category;
    NSString *_importanceText;
    NSString *_descriptionText;
    NSString *_videoPosterImageName;
}

+ (id)videoURLManagerIdentifierForOnboarding;
+ (id)videoPosterImageNameForOnboarding;
+ (id)videoPosterImageNameForCategory:(id)arg1;
+ (id)videoPosterImageNameWithName:(id)arg1;
+ (id)descriptionTextForCategory:(id)arg1;
- (void).cxx_destruct;
- (id)videoURLManagerIdentifier;
- (id)videoPosterImageName;
- (id)descriptionText;
- (id)initWithCategory:(id)arg1;

@end
