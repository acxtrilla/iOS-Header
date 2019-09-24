//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString;

@interface MediaSocialPostOperation : ISOperation
{
    NSNumber *_accountID;
    NSArray *_attachments;
    NSString *_authorID;
    NSString *_authorType;
    NSArray *_contentItems;
    double _createTime;
    NSArray *_externalServiceDestinations;
    _Bool _isAttributed;
    long long _postIdentifier;
    CDUnknownBlockType _resultBlock;
    NSString *_text;
    NSString *_userAgent;
    long long _postID;
}

@property(nonatomic) long long postID; // @synthesize postID=_postID;
- (void).cxx_destruct;
- (id)_targetDictionaryWithContentItem:(id)arg1;
- (id)_requestBodyDictionary;
- (id)_externalServiceDictionaryWithDestination:(id)arg1;
- (id)_attachmentDictionaryWithAttachment:(id)arg1;
- (void)run;
@property(copy) NSString *userAgent;
@property(copy) CDUnknownBlockType resultBlock;
- (id)initWithPostEntity:(id)arg1;
- (id)initWithPostDescription:(id)arg1;

@end
