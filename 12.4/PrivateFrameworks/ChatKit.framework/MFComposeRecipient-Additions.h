//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/MFComposeRecipient.h>

@interface MFComposeRecipient (Additions)
- (id)IDSCanonicalAddress;
- (id)canonicalAddress;
- (void)setCanonicalAddress:(id)arg1;
- (id)rawAddress;
- (struct __CFPhoneNumber *)copyPhoneNumber;
- (_Bool)isPhone;
- (_Bool)isEmail;
@end
