//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesUI/NSObject-Protocol.h>

@class NSManagedObjectContext, NSManagedObjectID, NSSet, NSString;
@protocol ICLegacyAccount, ICLegacyFolder, ICLegacyNote;

@protocol ICLegacyFolder <NSObject>
- (_Bool)isDeletedOrInTrash;
- (NSManagedObjectContext *)managedObjectContext;
- (NSManagedObjectID *)objectID;
- (void)addNotesObject:(id <ICLegacyNote>)arg1;
- (id <ICLegacyNote>)newNoteInContext:(struct NoteContext *)arg1;
- (NSSet *)changes;
- (id <ICLegacyFolder>)parentFolder;
- (NSString *)title;
- (NSString *)name;
- (id <ICLegacyAccount>)account;
@end

