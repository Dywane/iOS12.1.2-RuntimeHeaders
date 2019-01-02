/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEError : NSObject <NSCopying> {
    NSDictionary * _errorDictionary;
}

+ (id)abortError;
+ (id)attachmentError;
+ (id)autoNumberAttachmentError;
+ (id)badReferenceError;
+ (id)circularReferenceError;
+ (id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (id)errorForToken:(id)arg1;
+ (id)errorWithDictionary:(id)arg1;
+ (bool)exceptionIsCircularReferenceError:(id)arg1;
+ (bool)exceptionIsFromCalcEngine:(id)arg1;
+ (bool)exceptionIsInvalidMergeReference:(id)arg1;
+ (bool)exceptionIsRangeUsageError:(id)arg1;
+ (id)indirectErrorForRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
+ (id)invalidCurrencyPairError;
+ (id)invalidDateManipulationError;
+ (id)invalidHistoricalCurrencyAttributeError;
+ (id)invalidHistoricalDateError;
+ (id)invalidHistoricalStockAttributeError;
+ (id)invalidLiveCurrencyAttributeError;
+ (id)invalidLiveStockAttributeError;
+ (id)invalidMergeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 contextEntityUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
+ (id)invalidReferenceError;
+ (id)invalidStockCodeError:(id)arg1;
+ (id)noTradingInformationErrorWithNextAvailableDate:(id)arg1;
+ (id)notReadyError;
+ (bool)p_DictionaryRepresentsInvalidMergeReference:(id)arg1;
+ (void)p_RaiseErrorForDictionary:(id)arg1;
+ (void)raiseAbortError;
+ (void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseArgumentSetUsedOutOfContextError;
+ (void)raiseArrayElementNoDataError;
+ (void)raiseAttachmentErrorInTextCell:(bool)arg1;
+ (void)raiseAutoNumberAttachmentErrorInTextCell:(bool)arg1;
+ (void)raiseCharInputOutOfBoundsError;
+ (void)raiseCircularReferenceErrorWithReference:(id)arg1;
+ (void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2;
+ (void)raiseConvertOriginUnitMismatchError;
+ (void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseDataInvalidDimensionsError;
+ (void)raiseDataInvalidLengthError;
+ (void)raiseDataInvalidWidthError;
+ (void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1;
+ (void)raiseDisallowedStockModeError:(id)arg1;
+ (void)raiseDivideByZeroError;
+ (void)raiseDurationDisallowedForNormdistPDFError;
+ (void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseEmptyArgumentError;
+ (void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1;
+ (void)raiseEmptyArrayError;
+ (void)raiseErrorForError:(id)arg1;
+ (void)raiseErrorForInvalidReference;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 orString:(id)arg2 contextEntityUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3;
+ (void)raiseErrorForInvalidReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 orString:(id)arg2 contextEntityUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg3 invalidMergeReference:(bool)arg4 disqualifiedFromEndCell:(bool)arg5;
+ (void)raiseIndirectErrorForRangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2;
+ (void)raiseInvalidAltitudeError;
+ (void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3;
+ (void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(bool)arg2;
+ (void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(bool)arg4 equalityPermitted:(bool)arg5;
+ (void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2;
+ (void)raiseInvalidArrayContentsError;
+ (void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2;
+ (void)raiseInvalidComparisonError;
+ (void)raiseInvalidCurrencyComparisonError;
+ (void)raiseInvalidDateError;
+ (void)raiseInvalidDateManipulationError;
+ (void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidHeadingError;
+ (void)raiseInvalidHistoricalCurrencyAttributeError;
+ (void)raiseInvalidHistoricalDateError;
+ (void)raiseInvalidHistoricalStockAttributeError;
+ (void)raiseInvalidHyperlinkError;
+ (void)raiseInvalidIndexForChooseError:(int)arg1;
+ (void)raiseInvalidIntersectionError:(struct vector<TSCEReferenceValue, std::__1::allocator<TSCEReferenceValue> > { struct TSCEReferenceValue {} *x1; struct TSCEReferenceValue {} *x2; struct __compressed_pair<TSCEReferenceValue *, std::__1::allocator<TSCEReferenceValue> > { struct TSCEReferenceValue {} *x_3_1_1; } x3; })arg1 hostTableUID:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 calcEngine:(id)arg3;
+ (void)raiseInvalidLatitudeLongitudeError;
+ (void)raiseInvalidLiveCurrencyAttributeError;
+ (void)raiseInvalidLiveStockAttributeError;
+ (void)raiseInvalidMatchModeError;
+ (void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1;
+ (void)raiseInvalidRangeUsageErrorForReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg1;
+ (void)raiseInvalidSubtotalFunctionNumberError;
+ (void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidTimeError;
+ (void)raiseInvalidTokenInFormulaError;
+ (void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseInvalidUnitStringError:(id)arg1;
+ (void)raiseLinestHighlyCorrelatedVariableError;
+ (void)raiseLinestMatrixUnderdeterminedError;
+ (void)raiseLocationHeadingFailureError;
+ (void)raiseLocationHeadingUnknownError;
+ (void)raiseLocationNetworkError;
+ (void)raiseLocationServicesNotEnabledError;
+ (void)raiseLocationUnknownError;
+ (void)raiseLocationUserDeniedError;
+ (void)raiseMatchNotFoundErrorForValue:(id)arg1 functionName:(id)arg2;
+ (void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedMaxUnitsError;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1;
+ (void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2;
+ (void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1;
+ (void)raiseMultipleDurationsErrorForFunctionName:(id)arg1;
+ (void)raiseNegativeReceivedAmountError;
+ (void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseNoModeError;
+ (void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2;
+ (void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1;
+ (void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1;
+ (void)raiseNotAReferenceErrorForFunctionName:(id)arg1;
+ (void)raiseNotAVectorError;
+ (void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3;
+ (void)raiseNotReadyError;
+ (void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1;
+ (void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1;
+ (void)raiseNumberError;
+ (void)raiseNumberErrorForFunctionName:(id)arg1;
+ (void)raiseNumberMinusDateError;
+ (void)raiseNumberSmallerThanZeroError;
+ (void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(bool)arg4;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(bool)arg4 upperBound:(double)arg5 upperBoundInclusive:(bool)arg6;
+ (void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(bool)arg4;
+ (void)raisePercentRankExcInputOutOfRangeError;
+ (void)raisePercentRankInputOutOfRangeError;
+ (void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1;
+ (void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1;
+ (void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })arg2;
+ (void)raiseRemoteDataUnavailableErrorWithAttribute:(id)arg1;
+ (void)raiseSignsMustMatchErrorForFunctionName:(id)arg1;
+ (void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1;
+ (void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2;
+ (void)raiseStringTooLongError;
+ (void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1;
+ (void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1;
+ (void)raiseTypeExceptionForValue:(struct TSCEValue { unsigned long long x1[18]; int x2; })arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4;
+ (void)raiseUnionInsideIntersectionError;
+ (void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseUnkownFunctionErrorForString:(id)arg1;
+ (void)raiseUnsupportedFunctionError;
+ (void)raiseUnsupportedR1C1StyleError;
+ (void)raiseValueErrorForFunctionName:(id)arg1;
+ (void)raiseValueNotAvailableErrorForFunctionName:(id)arg1;
+ (void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2;
+ (void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2;
+ (void)raiseZeroToPowerOfZeroError;
+ (id)referenceToNonexistentTableError:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg1;
+ (id)remoteDataServerError;
+ (id)remoteDataUnavailableErrorWithAttribute:(id)arg1;
+ (id)sumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1;
+ (id)syntaxError;

- (void).cxx_destruct;
- (id)bakedString;
- (bool)boolean;
- (bool)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB@}' */ struct TSCEWarningReportingContext { bool x1; bool x2; id x3; }*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB@}' */ struct TSCEWarningReportingContext { bool x1; bool x2; id x3; }*)arg3;
- (id)dateValue;
- (int)deepType;
- (id)displayStringWithCalculationEngine:(id)arg1 forTable:(const struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_1_1[16]; struct { unsigned char x_2_2_1; unsigned char x_2_2_2; unsigned char x_2_2_3; unsigned char x_2_2_4; unsigned char x_2_2_5; unsigned char x_2_2_6; unsigned char x_2_2_7; unsigned char x_2_2_8; unsigned char x_2_2_9; unsigned char x_2_2_10; unsigned char x_2_2_11; unsigned char x_2_2_12; unsigned char x_2_2_13; unsigned char x_2_2_14; unsigned char x_2_2_15; unsigned char x_2_2_16; } x_1_1_2; struct { unsigned long long x_3_2_1; unsigned long long x_3_2_2; } x_1_1_3; } x1; }*)arg2 andCellID:(struct TSUCellCoord { unsigned int x1; unsigned short x2; bool x3; bool x4; })arg3;
- (double)doubleValue;
- (id)error;
- (id)errorDictionary;
- (bool)errorIsRangeUsageError;
- (/* Warning: unhandled struct encoding: '{TSCEVector=^^?{shared_ptr<TSCEAbstractVector>=^{TSCEAbstractVector}^{__shared_weak_count}}{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}}' */ struct TSCEVector { int (**x1)(); struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_3_1_1; } x3; })formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(struct TSCEEvaluationContext { }*)arg3 format:(const /* Warning: unhandled struct encoding: '{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}' */ struct TSCEFormat { struct TSCEFormatStruct { int x_1_1_1; union { struct { unsigned int x_1_3_1 : 16; unsigned int x_1_3_2 : 8; unsigned int x_1_3_3 : 3; unsigned int x_1_3_4 : 1; unsigned int x_1_3_5 : 1; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; } x_2_2_2; struct { unsigned int x_3_3_1 : 8; unsigned int x_3_3_2 : 8; unsigned int x_3_3_3 : 1; } x_2_2_3; struct { unsigned int x_4_3_1 : 1; int x_4_3_2; int x_4_3_3; int x_4_3_4; } x_2_2_4; } x_1_1_2; id x_1_1_3; id x_1_1_4; unsigned char x_1_1_5; } x1; }*)arg4;
- (id)initWithDictionary:(id)arg1;
- (bool)isAbortedError;
- (bool)isCircularReferenceError;
- (bool)isEqual:(id)arg1;
- (bool)isErrorReferenceError;
- (bool)isFromCalcEngine;
- (bool)isInvalidMergeReference;
- (bool)isInvalidReference;
- (bool)isNativelyEqual:(struct TSCEValue { unsigned long long x1[18]; int x2; })arg1;
- (bool)isNotReadyError;
- (bool)isOfType:(id)arg1;
- (bool)isSyntaxError;
- (bool)isUnsupportedFunctionError;
- (int)nativeType;
- (/* Warning: unhandled struct encoding: '{TSCENumberValue=^^?d[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}' */ struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_4_1_1; bool x_4_1_2; } x4; }*)number;
- (/* Warning: unhandled struct encoding: '{TSCENumberValue=^^?d[1i]{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}B}' */ struct TSCENumberValue { int (**x1)(); double x2; int x3[1]; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_4_1_1; bool x_4_1_2; } x4; }*)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB@}' */ struct TSCEWarningReportingContext { bool x1; bool x2; id x3; }*)arg3;
- (void)raiseException;
- (struct TSCERangeRef { struct TSCERangeCoordinate { struct TSUCellCoord { unsigned int x_1_2_1; unsigned short x_1_2_2; bool x_1_2_3; bool x_1_2_4; } x_1_1_1; struct TSUCellCoord { unsigned int x_2_2_1; unsigned short x_2_2_2; bool x_2_2_3; bool x_2_2_4; } x_1_1_2; } x1; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_2_1[16]; struct { unsigned char x_2_3_1; unsigned char x_2_3_2; unsigned char x_2_3_3; unsigned char x_2_3_4; unsigned char x_2_3_5; unsigned char x_2_3_6; unsigned char x_2_3_7; unsigned char x_2_3_8; unsigned char x_2_3_9; unsigned char x_2_3_10; unsigned char x_2_3_11; unsigned char x_2_3_12; unsigned char x_2_3_13; unsigned char x_2_3_14; unsigned char x_2_3_15; unsigned char x_2_3_16; } x_1_2_2; struct { unsigned long long x_3_3_1; unsigned long long x_3_3_2; } x_1_2_3; } x_2_1_1; } x2; })rangeRef;
- (struct TSCEReferenceValue { int (**x1)(); struct TSCEEvalRef { struct TSCETableResolver {} *x_2_1_1; struct TSUCellTractRef { struct TSUIndexSet { unsigned int x_1_3_1 : 1; unsigned int x_1_3_2 : 1; struct TSUIndexRange { long long x_3_4_1; long long x_3_4_2; } x_1_3_3; struct { /* ? */ } *x_1_3_4; } x_2_2_1; struct TSUIndexSet { unsigned int x_2_3_1 : 1; unsigned int x_2_3_2 : 1; struct TSUIndexRange { long long x_3_4_1; long long x_3_4_2; } x_2_3_3; struct { /* ? */ } *x_2_3_4; } x_2_2_2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_4_1[16]; struct { unsigned char x_2_5_1; unsigned char x_2_5_2; unsigned char x_2_5_3; unsigned char x_2_5_4; unsigned char x_2_5_5; unsigned char x_2_5_6; unsigned char x_2_5_7; unsigned char x_2_5_8; unsigned char x_2_5_9; unsigned char x_2_5_10; unsigned char x_2_5_11; unsigned char x_2_5_12; unsigned char x_2_5_13; unsigned char x_2_5_14; unsigned char x_2_5_15; unsigned char x_2_5_16; } x_1_4_2; struct { unsigned long long x_3_5_1; unsigned long long x_3_5_2; } x_1_4_3; } x_3_3_1; } x_2_2_3; unsigned char x_2_2_4; struct TSUPreserveFlags { unsigned char x_5_3_1; } x_2_2_5; bool x_2_2_6; } x_2_1_2; } x2; }*)referenceValue;
- (struct TSCEReferenceValue { int (**x1)(); struct TSCEEvalRef { struct TSCETableResolver {} *x_2_1_1; struct TSUCellTractRef { struct TSUIndexSet { unsigned int x_1_3_1 : 1; unsigned int x_1_3_2 : 1; struct TSUIndexRange { long long x_3_4_1; long long x_3_4_2; } x_1_3_3; struct { /* ? */ } *x_1_3_4; } x_2_2_1; struct TSUIndexSet { unsigned int x_2_3_1 : 1; unsigned int x_2_3_2 : 1; struct TSUIndexRange { long long x_3_4_1; long long x_3_4_2; } x_2_3_3; struct { /* ? */ } *x_2_3_4; } x_2_2_2; struct UUIDData<TSP::UUIDData> { union { unsigned char x_1_4_1[16]; struct { unsigned char x_2_5_1; unsigned char x_2_5_2; unsigned char x_2_5_3; unsigned char x_2_5_4; unsigned char x_2_5_5; unsigned char x_2_5_6; unsigned char x_2_5_7; unsigned char x_2_5_8; unsigned char x_2_5_9; unsigned char x_2_5_10; unsigned char x_2_5_11; unsigned char x_2_5_12; unsigned char x_2_5_13; unsigned char x_2_5_14; unsigned char x_2_5_15; unsigned char x_2_5_16; } x_1_4_2; struct { unsigned long long x_3_5_1; unsigned long long x_3_5_2; } x_1_4_3; } x_3_3_1; } x_2_2_3; unsigned char x_2_2_4; struct TSUPreserveFlags { unsigned char x_5_3_1; } x_2_2_5; bool x_2_2_6; } x_2_1_2; } x2; }*)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB@}' */ struct TSCEWarningReportingContext { bool x1; bool x2; id x3; }*)arg3;
- (void)setErrorDictionary:(id)arg1;
- (id)string;
- (id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(/* Warning: unhandled struct encoding: '{TSCEWarningReportingContext=BB@}' */ struct TSCEWarningReportingContext { bool x1; bool x2; id x3; }*)arg3;
- (id)stringValue;
- (id)tokenString;
- (/* Warning: unhandled struct encoding: '{TSCEVector=^^?{shared_ptr<TSCEAbstractVector>=^{TSCEAbstractVector}^{__shared_weak_count}}{TSCEFormat={TSCEFormatStruct=i(?={?=b16b8b3b1b1}{?=b8}{?=b8b8b1}{?=b1iii})@@@}C}}' */ struct TSCEVector { int (**x1)(); struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct TSCEFormat { struct TSCEFormatStruct { int x_1_2_1; union { struct { unsigned int x_1_4_1 : 16; unsigned int x_1_4_2 : 8; unsigned int x_1_4_3 : 3; unsigned int x_1_4_4 : 1; unsigned int x_1_4_5 : 1; } x_2_3_1; struct { unsigned int x_2_4_1 : 8; } x_2_3_2; struct { unsigned int x_3_4_1 : 8; unsigned int x_3_4_2 : 8; unsigned int x_3_4_3 : 1; } x_2_3_3; struct { unsigned int x_4_4_1 : 1; int x_4_4_2; int x_4_4_3; int x_4_4_4; } x_2_3_4; } x_1_2_2; id x_1_2_3; id x_1_2_4; unsigned char x_1_2_5; } x_3_1_1; } x3; }*)vector;

@end