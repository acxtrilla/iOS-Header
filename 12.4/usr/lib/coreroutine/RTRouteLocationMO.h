//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, RTRouteMO;

@interface RTRouteLocationMO : NSManagedObject
{
}

+ (id)managedObjectWithLocation:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSDate *date; // @dynamic date;
@property(copy, nonatomic) NSNumber *latitude; // @dynamic latitude;
@property(copy, nonatomic) NSNumber *longitude; // @dynamic longitude;
@property(copy, nonatomic) NSNumber *referenceFrame; // @dynamic referenceFrame;
@property(retain, nonatomic) RTRouteMO *route; // @dynamic route;
@property(copy, nonatomic) NSNumber *uncertainty; // @dynamic uncertainty;

@end

