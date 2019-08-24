//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordZonesOperation : FCCKPrivateDatabaseOperation
{
    NSArray *_recordZonesToSave;
    CDUnknownBlockType _saveRecordZonesCompletionBlock;
    NSArray *_resultSavedRecordZones;
}

@property(retain, nonatomic) NSArray *resultSavedRecordZones; // @synthesize resultSavedRecordZones=_resultSavedRecordZones;
@property(copy, nonatomic) CDUnknownBlockType saveRecordZonesCompletionBlock; // @synthesize saveRecordZonesCompletionBlock=_saveRecordZonesCompletionBlock;
@property(copy, nonatomic) NSArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;

@end
