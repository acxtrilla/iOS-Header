//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDragAnimating-Protocol.h>

@class UIDragItem;

@protocol UITableViewDropPlaceholderContext <UIDragAnimating>
@property(readonly, nonatomic) UIDragItem *dragItem;
- (_Bool)deletePlaceholder;
- (_Bool)commitInsertionWithDataSourceUpdates:(void (^)(NSIndexPath *))arg1;
@end
