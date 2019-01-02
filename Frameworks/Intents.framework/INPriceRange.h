/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding> {
    NSString * _currencyCode;
    NSDecimalNumber * _maximumPrice;
    NSDecimalNumber * _minimumPrice;
}

@property (nonatomic, readonly) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDecimalNumber *maximumPrice;
@property (nonatomic, readonly) NSDecimalNumber *minimumPrice;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_priceWithPriceRangeValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithPrice:(id)arg1 currencyCode:(id)arg2;
- (id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)maximumPrice;
- (id)minimumPrice;

// Image: /System/Library/PrivateFrameworks/AssistantCardServiceSupport.framework/AssistantCardServiceSupport

+ (id)_currencySymbolForCode:(id)arg1;
+ (id)_localeForCode:(id)arg1;

- (id)acs_formattedRangeString;

@end
