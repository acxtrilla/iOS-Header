//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction
{
}

- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) FBSSceneSnapshotContext *context;
@property(readonly, nonatomic) unsigned long long type;
- (id)initWithType:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
