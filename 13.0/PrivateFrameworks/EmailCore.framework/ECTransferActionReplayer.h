//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECLocalActionReplayer.h>

@interface ECTransferActionReplayer : ECLocalActionReplayer
{
}

- (id)failActionWithError:(id)arg1;
- (id)_deleteItemsInAction:(id)arg1;
- (id)_appendMessagesInAction:(id)arg1;
- (id)_allCopyItemsBySourceRemoteIDsForAction:(id)arg1 failedItems:(id *)arg2;
- (id)_transferItemsInAction:(id)arg1 isMove:(_Bool)arg2;
- (id)_downLoadSourceMessagesInAction:(id)arg1;
- (id)replayAction;

@end
