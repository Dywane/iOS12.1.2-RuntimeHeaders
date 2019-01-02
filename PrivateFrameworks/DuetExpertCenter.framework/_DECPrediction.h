/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPrediction : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _creationDate;
    _DECPredictionExpiry * _expiry;
    NSArray * _items;
    long long  _reason;
    NSDictionary * _reasonMetadata;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) _DECPredictionExpiry *expiry;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) long long reason;
@property (nonatomic, retain) NSDictionary *reasonMetadata;

+ (id)predictionWithItems:(id)arg1 expiry:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expiry;
- (void)filterItems:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 expiry:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)items;
- (long long)reason;
- (id)reasonMetadata;
- (void)setCreationDate:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setReason:(long long)arg1;
- (void)setReasonMetadata:(id)arg1;

@end
