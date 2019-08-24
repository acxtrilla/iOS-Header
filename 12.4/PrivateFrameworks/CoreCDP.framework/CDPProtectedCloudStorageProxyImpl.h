//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPProtectedCloudStorageProxy-Protocol.h>

@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>
{
}

- (_Bool)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (_Bool)pcsRestoreLocalBackup:(id)arg1 error:(id *)arg2;
- (_Bool)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(id)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
