//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCXReadState.h>

@class CXNamespace, OAXDrawingState;

__attribute__((visibility("hidden")))
@interface ODXState : OCXReadState
{
    CXNamespace *mODXDiagramNamespace;
    OAXDrawingState *mOfficeArtState;
}

@property(retain, nonatomic) CXNamespace *ODXDiagramNamespace; // @synthesize ODXDiagramNamespace=mODXDiagramNamespace;
- (void).cxx_destruct;
- (void)setupNSForXMLFormat:(int)arg1;
- (id)officeArtState;
- (id)initWithOfficeArtState:(id)arg1;

@end
