//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/DAAccount.h>

@interface DAIMAPNotesAccount : DAAccount
{
    int _imapNotesAccountVersion;
}

@property(nonatomic, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion; // @synthesize imapNotesAccountVersion=_imapNotesAccountVersion;
- (id)onBehalfOfBundleIdentifier;
- (_Bool)isEqualToAccount:(id)arg1;

@end
