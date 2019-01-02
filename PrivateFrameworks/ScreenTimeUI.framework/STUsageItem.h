/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _budgetItemIdentifier;
    NSString * _categoryIdentifier;
    UIColor * _color;
    NSString * _identifier;
    unsigned long long  _itemType;
    NSNumber * _maxUsage;
    NSNumber * _minUsage;
    NSDate * _startDate;
    unsigned long long  _timePeriod;
    NSNumber * _totalUsage;
}

@property (nonatomic, copy) NSString *budgetItemIdentifier;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic, copy) NSNumber *maxUsage;
@property (nonatomic, copy) NSNumber *minUsage;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic) unsigned long long timePeriod;
@property (nonatomic, copy) NSNumber *totalUsage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)budgetItemIdentifier;
- (id)categoryIdentifier;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)maxUsage;
- (id)minUsage;
- (void)setBudgetItemIdentifier:(id)arg1;
- (void)setCategoryIdentifier:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemType:(unsigned long long)arg1;
- (void)setMaxUsage:(id)arg1;
- (void)setMinUsage:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTimePeriod:(unsigned long long)arg1;
- (void)setTotalUsage:(id)arg1;
- (id)startDate;
- (unsigned long long)timePeriod;
- (id)totalUsage;

@end
