//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSPObject.h>

@class NSDate, TSKAnnotationAuthor;

@interface TSWPChangeSession : TSPObject
{
    unsigned int _sessionUID;
    TSKAnnotationAuthor *_author;
    NSDate *_date;
}

- (_Bool)isEqualToSession:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) TSKAnnotationAuthor *author;
@property(nonatomic) unsigned int sessionUID;

@end
