//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface MTLCompileOptions : NSObject <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)alloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(nonatomic) NSString *additionalCompilerArguments; // @dynamic additionalCompilerArguments;
@property(nonatomic) _Bool compileTimeStatisticsEnabled; // @dynamic compileTimeStatisticsEnabled;
@property(nonatomic) _Bool debuggingEnabled; // @dynamic debuggingEnabled;
@property(nonatomic) _Bool fastMathEnabled; // @dynamic fastMathEnabled;
@property(nonatomic) _Bool glBufferBindPoints; // @dynamic glBufferBindPoints;
@property(nonatomic) unsigned long long languageVersion; // @dynamic languageVersion;
@property(copy, nonatomic) NSDictionary *preprocessorMacros; // @dynamic preprocessorMacros;
@property(nonatomic) unsigned char sourceLanguage; // @dynamic sourceLanguage;
@property(nonatomic) _Bool tracingEnabled; // @dynamic tracingEnabled;

@end
