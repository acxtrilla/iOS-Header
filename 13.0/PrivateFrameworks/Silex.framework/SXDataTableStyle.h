//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXJSONObject.h>

@class SXDataTableBorderSides, SXDataTableCellStyle, SXDataTableColumnStyle, SXDataTableRowStyle;

@interface SXDataTableStyle : SXJSONObject
{
}


// Remaining properties
@property(readonly, nonatomic) SXDataTableBorderSides *border; // @dynamic border;
@property(readonly, nonatomic) SXDataTableCellStyle *cells; // @dynamic cells;
@property(readonly, nonatomic) SXDataTableColumnStyle *columns; // @dynamic columns;
@property(readonly, nonatomic) SXDataTableCellStyle *headerCells; // @dynamic headerCells;
@property(readonly, nonatomic) SXDataTableColumnStyle *headerColumns; // @dynamic headerColumns;
@property(readonly, nonatomic) SXDataTableRowStyle *headerRows; // @dynamic headerRows;
@property(readonly, nonatomic) SXDataTableRowStyle *rows; // @dynamic rows;
@end
