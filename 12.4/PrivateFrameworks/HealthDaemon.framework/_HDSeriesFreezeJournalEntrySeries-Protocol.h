//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDProfile, NSDictionary, NSUUID;

@protocol _HDSeriesFreezeJournalEntrySeries <NSObject>
+ (_Bool)freezeSeriesWithIdentifier:(NSUUID *)arg1 metadata:(NSDictionary *)arg2 profile:(HDProfile *)arg3 error:(id *)arg4;
@end

