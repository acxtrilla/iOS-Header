//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSwitchTableCell.h>

@class LocationUsageMixin;

@interface LocationServicesCell : PSSwitchTableCell
{
    LocationUsageMixin *_location;
}

@property(readonly, nonatomic) LocationUsageMixin *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

