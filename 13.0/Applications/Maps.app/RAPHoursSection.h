//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RAPAddHoursTableViewCell, RAPHoursDetailTableViewCell;

__attribute__((visibility("hidden")))
@interface RAPHoursSection : NSObject
{
    RAPHoursDetailTableViewCell *_titleCell;
    RAPAddHoursTableViewCell *_hoursPickerCell;
}

@property(retain, nonatomic) RAPAddHoursTableViewCell *hoursPickerCell; // @synthesize hoursPickerCell=_hoursPickerCell;
@property(retain, nonatomic) RAPHoursDetailTableViewCell *titleCell; // @synthesize titleCell=_titleCell;
- (void).cxx_destruct;
- (id)initWithInitialDate:(id)arg1;

@end
