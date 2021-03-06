//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSDFill, TSKFormat, TSTCellBorder, TSTCellSpec, TSTCellStyle, TSTConditionalStyleSet, TSTImportWarningSet, TSTStockDetails, TSULocale, TSWPParagraphStyle, TSWPStorage;

__attribute__((visibility("hidden")))
@interface TSTCell : NSObject <NSCopying>
{
    double _valueDouble;
    unsigned int _valueID;
    NSObject *_valueObject;
    struct TSUDecimal _valueBigNumber;
    unsigned char _conditionalStyleAppliedRule;
    unsigned short _explicitFormatFlags;
    unsigned short _cellFlags;
    int _valueType;
    unsigned int _cellFormatKind;
    unsigned int _cellStyleID;
    unsigned int _textStyleID;
    unsigned int _conditionalStyleID;
    unsigned int _formulaID;
    unsigned int _controlCellSpecID;
    unsigned int _numberFormatID;
    unsigned int _currencyFormatID;
    unsigned int _dateFormatID;
    unsigned int _durationFormatID;
    unsigned int _textFormatID;
    unsigned int _booleanFormatID;
    unsigned int _commentStorageID;
    unsigned int _importWarningSetID;
    TSTCellStyle *_cellStyle;
    TSWPParagraphStyle *_textStyle;
    TSTConditionalStyleSet *_conditionalStyle;
    TSTCellBorder *_cellBorder;
    TSTCellSpec *_cellSpec;
    TSKFormat *_numberFormat;
    TSKFormat *_currencyFormat;
    TSKFormat *_dateFormat;
    TSKFormat *_durationFormat;
    TSKFormat *_textFormat;
    TSKFormat *_booleanFormat;
    TSTImportWarningSet *_importWarningSet;
    TSULocale *_locale;
    TSDCommentStorage *_commentStorage;
}

+ (id)stringForCellValueType:(int)arg1;
+ (_Bool)mismatchBetweenValueType:(int)arg1 andFormatType:(int)arg2;
+ (_Bool)p_mismatchBetweenValueType:(int)arg1 andCellFormatKind:(unsigned int)arg2;
+ (unsigned int)p_cellFormatKindForValueType:(int)arg1;
+ (_Bool)formatType:(int)arg1 isSameCellFormatKindAs:(int)arg2 allowNumberCurrencyMismatch:(_Bool)arg3;
+ (_Bool)formatType:(int)arg1 isSameCellFormatKindAs:(int)arg2;
@property(nonatomic) unsigned int importWarningSetID; // @synthesize importWarningSetID=_importWarningSetID;
@property(nonatomic) unsigned int commentStorageID; // @synthesize commentStorageID=_commentStorageID;
@property(nonatomic) unsigned int booleanFormatID; // @synthesize booleanFormatID=_booleanFormatID;
@property(nonatomic) unsigned int textFormatID; // @synthesize textFormatID=_textFormatID;
@property(nonatomic) unsigned int durationFormatID; // @synthesize durationFormatID=_durationFormatID;
@property(nonatomic) unsigned int dateFormatID; // @synthesize dateFormatID=_dateFormatID;
@property(nonatomic) unsigned int currencyFormatID; // @synthesize currencyFormatID=_currencyFormatID;
@property(nonatomic) unsigned int numberFormatID; // @synthesize numberFormatID=_numberFormatID;
@property(nonatomic) unsigned int controlCellSpecID; // @synthesize controlCellSpecID=_controlCellSpecID;
@property(nonatomic) unsigned int formulaID; // @synthesize formulaID=_formulaID;
@property(nonatomic) unsigned int conditionalStyleID; // @synthesize conditionalStyleID=_conditionalStyleID;
@property(nonatomic) unsigned int textStyleID; // @synthesize textStyleID=_textStyleID;
@property(nonatomic) unsigned int cellStyleID; // @synthesize cellStyleID=_cellStyleID;
@property(readonly, nonatomic) unsigned int cellFormatKind; // @synthesize cellFormatKind=_cellFormatKind;
@property(retain, nonatomic) TSDCommentStorage *commentStorage; // @synthesize commentStorage=_commentStorage;
@property(retain, nonatomic) TSULocale *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned short cellFlags; // @synthesize cellFlags=_cellFlags;
@property(retain, nonatomic) TSTImportWarningSet *importWarningSet; // @synthesize importWarningSet=_importWarningSet;
@property(readonly, nonatomic) TSKFormat *booleanFormat; // @synthesize booleanFormat=_booleanFormat;
@property(readonly, nonatomic) TSKFormat *textFormat; // @synthesize textFormat=_textFormat;
@property(readonly, nonatomic) TSKFormat *durationFormat; // @synthesize durationFormat=_durationFormat;
@property(readonly, nonatomic) TSKFormat *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(readonly, nonatomic) TSKFormat *currencyFormat; // @synthesize currencyFormat=_currencyFormat;
@property(readonly, nonatomic) TSKFormat *numberFormat; // @synthesize numberFormat=_numberFormat;
@property(nonatomic) unsigned short explicitFormatFlags; // @synthesize explicitFormatFlags=_explicitFormatFlags;
@property(retain, nonatomic) TSTCellSpec *cellSpec; // @synthesize cellSpec=_cellSpec;
@property(retain, nonatomic) TSTCellBorder *cellBorder; // @synthesize cellBorder=_cellBorder;
@property(nonatomic) unsigned char conditionalStyleAppliedRule; // @synthesize conditionalStyleAppliedRule=_conditionalStyleAppliedRule;
@property(retain, nonatomic) TSTConditionalStyleSet *conditionalStyle; // @synthesize conditionalStyle=_conditionalStyle;
@property(retain, nonatomic) TSWPParagraphStyle *textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) TSTCellStyle *cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) int valueType; // @synthesize valueType=_valueType;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cellValueDescription;
- (id)cellValueTypeDescription;
- (id)description;
- (id)reorganizeValueForSorting;
@property(readonly, nonatomic) _Bool hasCommentStorage;
- (void)setCommentStorage:(id)arg1 clearingID:(_Bool)arg2;
- (void)setImportWarningSet:(id)arg1 clearingID:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasImportWarningSet;
@property(readonly, nonatomic) _Bool hasAnyWarning;
- (unsigned int)formatIDForStorageFlag:(unsigned int)arg1;
- (id)formatForStorageFlag:(unsigned int)arg1;
- (void)setFormatID:(unsigned int)arg1 forStorageFlag:(unsigned int)arg2;
- (void)setDefaultFormatForValue;
@property(readonly, nonatomic) _Bool hasMismatchedFormatAndValue;
@property(readonly, nonatomic) _Bool isMostRecentlyExplicitPercent;
@property(readonly, nonatomic) _Bool hasAnyFormats;
@property(readonly, nonatomic) int currentFormatNegativeStyle;
@property(readonly, nonatomic) _Bool currentFormatUsesAccountingStyle;
@property(readonly, nonatomic) NSString *customFormatString;
- (id)candidateFormatForSliderStepperControlWithIsCurrent:(_Bool *)arg1;
- (_Bool)p_currencyIsMostRecentlySet;
- (_Bool)hasExplicitFormatOfType:(int)arg1 allowMismatchedSpare:(_Bool)arg2;
- (_Bool)p_hasExplicitFormatOfCellFormatKind:(unsigned int)arg1;
- (_Bool)hasFormatOfType:(int)arg1 allowMismatchedSpare:(_Bool)arg2;
- (id)formatOfType:(int)arg1 allowMismatchedSpare:(_Bool)arg2;
@property(readonly, nonatomic) _Bool currentFormatIsExplicitForCalcEngine;
@property(readonly, nonatomic) _Bool currentFormatIsExplicit;
@property(readonly, nonatomic) _Bool hasCurrentFormat;
- (void)p_setFormatExplicit:(_Bool)arg1 fromCellFormatKind:(unsigned int)arg2 setMostRecentlySet:(_Bool)arg3;
- (void)p_setFormatFlags:(unsigned short)arg1 explicit:(_Bool)arg2;
- (void)p_TSTCellSetMostRecentlySetNumberFormatWithCurrencyFlag:(_Bool)arg1;
- (_Bool)p_formatTypeIsANumberFormatTypeForMostRecentlySet:(int)arg1;
- (void)updateCustomFormatFromPaste:(id)arg1;
- (void)processCustomFormatsWithBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool hasAnyCustomFormat;
@property(readonly, nonatomic) _Bool hasBooleanFormat;
@property(readonly, nonatomic) _Bool hasTextFormat;
@property(readonly, nonatomic) _Bool hasDurationFormat;
@property(readonly, nonatomic) _Bool hasDateFormat;
@property(readonly, nonatomic) _Bool hasCurrencyFormat;
@property(readonly, nonatomic) _Bool hasNumberFormat;
- (void)copyAllFormatsToCell:(id)arg1;
- (void)clearAllFormats;
- (_Bool)validateAndRepair;
- (void)clearFormatOfType:(int)arg1;
- (void)p_clearFormatOfCellFormatKind:(unsigned int)arg1;
- (void)p_setFormatForFormulaResult:(id)arg1 propagation:(_Bool)arg2;
- (void)setCurrentFormat:(id)arg1 flags:(unsigned short)arg2;
- (void)setFormat:(id)arg1 isExplicit:(_Bool)arg2;
- (void)setCurrentFormat:(id)arg1 isExplicit:(_Bool)arg2;
- (void)setFormat:(id)arg1 shouldSetExplFlags:(_Bool)arg2 isExplicit:(_Bool)arg3 makeCurrent:(_Bool)arg4 clearingID:(_Bool)arg5;
@property(readonly, nonatomic) TSKFormat *currentFormat;
- (id)p_formatOfCellFormatKind:(unsigned int)arg1 create:(_Bool)arg2 created:(_Bool *)arg3;
@property(readonly, nonatomic) int formatType;
- (void)suggestCellFormatKind:(unsigned int)arg1;
@property(readonly, nonatomic) _Bool hasControl;
@property(readonly, nonatomic) _Bool hasFormulaAnyError;
@property(readonly, nonatomic) _Bool hasFormulaEvaluationError;
- (void)applyFormulaResult:(const struct TSCEValue *)arg1 context:(id)arg2 hasWarnings:(_Bool)arg3 outWriteDidBeginOrEndWithTextCell:(_Bool *)arg4 propagateCheckboxesAndRatings:(_Bool)arg5;
- (void)applyFormulaResult:(const struct TSCEValue *)arg1;
- (void)applyPopupChoiceIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long popupChoiceIndex;
@property(readonly, nonatomic) TSTStockDetails *stockDetails;
@property(readonly, nonatomic) _Bool hasStockFormulaForStockUI;
@property(readonly, nonatomic) _Bool hasFormula;
@property(readonly, nonatomic) TSTCellSpec *cellSpecForDiff;
@property(readonly, nonatomic) _Bool hasCellSpec;
- (void)setFormulaByRef:(const struct TSCEFormula *)arg1;
@property(nonatomic) struct TSCEFormula *formula;
- (void)setFormula:(struct TSCEFormula *)arg1 clearingID:(_Bool)arg2;
- (void)setCellSpec:(id)arg1 clearingID:(_Bool)arg2;
@property(readonly, nonatomic) int interactionType;
- (id)cellFillComparedToDefault:(id)arg1 suppressCS:(_Bool)arg2 isDefault:(_Bool *)arg3;
@property(readonly, nonatomic) TSDFill *cellFill;
@property(readonly, nonatomic) int writingDirection;
- (void)clearStrokes;
- (void)copyJustStyleAndStrokesToCell:(id)arg1;
- (void)copyJustStrokesToCell:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 supportsInlineAttachments:(_Bool)arg3;
@property(readonly, nonatomic) _Bool hasConditionalStyle;
@property(readonly, nonatomic) _Bool hasTextStyle;
@property(readonly, nonatomic) _Bool hasCellStyle;
- (void)setConditionalStyle:(id)arg1 clearingID:(_Bool)arg2;
@property(readonly, nonatomic) TSWPParagraphStyle *effectiveTextStyle;
- (void)setTextStyle:(id)arg1 clearingID:(_Bool)arg2;
- (void)setCellStyle:(id)arg1 clearingID:(_Bool)arg2;
- (_Bool)hasEqualValueToCell:(id)arg1;
@property(readonly, nonatomic) _Bool dataIsReplaceable;
@property(readonly, nonatomic) _Bool valueRepresentsDateWithoutTime;
@property(readonly, nonatomic) _Bool hasValueOrError;
@property(readonly, nonatomic) _Bool valueIsNumberOrTime;
@property(readonly, nonatomic) _Bool valueIsStringOrNumber;
@property(readonly, nonatomic) _Bool valueIsText;
- (void)bakeFormulaToValue;
@property(readonly, nonatomic) TSWPStorage *richTextStorageForLayout;
@property(readonly, nonatomic) NSString *stringForUnderlyingValue;
@property(readonly, nonatomic) NSString *stringForEditing;
@property(readonly, nonatomic) NSString *formattedValue;
@property(readonly, nonatomic) NSString *formulaSyntaxErrorString;
@property(readonly, nonatomic) _Bool hasRichText;
@property(readonly, nonatomic) _Bool hasFormulaSyntaxError;
- (void)clearValue;
- (void)setRichTextValueWithoutPlaintextCollapse:(id)arg1;
@property(retain, nonatomic) TSWPStorage *richTextValue;
- (void)setRichTextValue:(id)arg1 clearingID:(_Bool)arg2 convertToPlaintextIfPossible:(_Bool)arg3;
@property(retain, nonatomic) TSWPStorage *formulaSyntaxError;
- (void)setFormulaSyntaxError:(id)arg1 clearingID:(_Bool)arg2;
@property(retain, nonatomic) NSString *stringValue;
- (void)setStringValue:(id)arg1 clearingID:(_Bool)arg2;
@property(retain, nonatomic) NSDate *dateValue;
@property(nonatomic) double durationTimeIntervalValue;
@property(nonatomic) _Bool boolValue;
- (void)setCurrencyOrNumberDecimalValue:(const struct TSUDecimal *)arg1;
- (void)setCurrencyOrNumberDoubleValue:(double)arg1;
@property(readonly, nonatomic) struct TSUDecimal underlyingDecimalValue;
@property(readonly, nonatomic) double underlyingDoubleValue;
@property(nonatomic) double currencyDoubleValue;
@property(nonatomic) double numberDoubleValue;
@property(nonatomic) struct TSUDecimal currencyDecimalValue;
- (void)setCurrencyDecimalValue:(struct TSUDecimal)arg1 roundToDoublePrecision:(_Bool)arg2;
@property(nonatomic) struct TSUDecimal numberDecimalValue;
- (void)setNumberDecimalValue:(struct TSUDecimal)arg1 roundToDoublePrecision:(_Bool)arg2;
- (void)setProvidedValueTypeBeforeUpgrade;
- (void)clearDataListIDs;
@property(nonatomic) unsigned int richTextID;
@property(nonatomic) unsigned int formulaSyntaxErrorID;
@property(nonatomic) unsigned int stringID;
- (void)clear;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool isEmptyForDataStore;
- (id)cellByApplyingCellDiff:(id)arg1 andUpdateInverse:(id)arg2;
- (_Bool)hasEqualContentToCell:(id)arg1 usingRichTextStyleComparisonBlock:(CDUnknownBlockType)arg2;
- (_Bool)hasEqualContentToCell:(id)arg1;
- (_Bool)p_currentFormatIsEqualToOtherCellFormat:(id)arg1;
- (void)inflateFromStorageRef:(struct TSTCellStorage *)arg1 dataStore:(id)arg2 suppressingTransmutation:(_Bool)arg3;
- (void)inflateFromStorageRef:(struct TSTCellStorage *)arg1 dataStore:(id)arg2;
- (void)copyValueAndFormatToCell:(id)arg1;
- (void)copyJustValueToCell:(id)arg1;
- (void)shallowCopyToCell:(id)arg1;
- (void)copyToCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStorageRef:(struct TSTCellStorage *)arg1 dataStore:(id)arg2;
- (id)initWithLocale:(id)arg1;
- (void)replaceContentWithParsableString:(id)arg1 tableInfo:(id)arg2 cellID:(struct TSUCellCoord)arg3 flags:(unsigned long long)arg4 outControlWasRemoved:(_Bool *)arg5;
- (_Bool)coerceCellToFormatTypeUsingSpares:(int)arg1;
- (_Bool)coerceTextCellToBestNumberFormatUsingLimitedParsing:(_Bool)arg1;
- (_Bool)coerceToBaseFormat:(id)arg1;
- (_Bool)coerceToFormatType:(int)arg1;
- (_Bool)removeControlCellSpec;

@end

