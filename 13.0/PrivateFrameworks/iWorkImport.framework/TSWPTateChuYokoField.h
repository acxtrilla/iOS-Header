//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

__attribute__((visibility("hidden")))
@interface TSWPTateChuYokoField : TSWPSmartField
{
}

- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct TateChuYokoFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct TateChuYokoFieldArchive *)arg1 archiver:(id)arg2;
- (_Bool)allowsEditing;
- (int)styleAttributeArrayKind;
- (unsigned long long)attributeArrayKind;
- (int)smartFieldKind;

@end
