//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKMapSnapshotCreator, NSString, UIImage, UIView;

@protocol MKMapSnapshotCreatorRequester <NSObject>
- (void)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 didCreateSnapshot:(UIImage *)arg2 attributionString:(NSString *)arg3 context:(id)arg4;

@optional
- (UIView *)mapSnapshotCreator:(MKMapSnapshotCreator *)arg1 viewForContext:(id)arg2;
@end
