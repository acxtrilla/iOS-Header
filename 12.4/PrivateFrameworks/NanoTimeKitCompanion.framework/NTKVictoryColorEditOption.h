//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKVictoryColorEditOption : NTKEnumeratedEditOption
{
}

+ (id)_orderedValuesRestrictedByDevice:(id)arg1;
+ (id)_localizedNameForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2;
+ (id)_orderedValuesForDevice:(id)arg1;
+ (id)optionWithVictoryColor:(unsigned long long)arg1 forDevice:(id)arg2;
- (id)_valueToFaceBundleStringDict;
- (_Bool)optionExistsInOSVersion:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned long long victoryColor;
- (long long)swatchStyle;

@end
