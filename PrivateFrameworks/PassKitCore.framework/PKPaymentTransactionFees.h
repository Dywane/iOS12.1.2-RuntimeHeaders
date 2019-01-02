/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSSet * _fees;
}

@property (nonatomic, retain) NSSet *fees;

+ (id)_feesSetFromJsonString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fees;
- (unsigned long long)hash;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFeeItems:(id)arg1;
- (id)initWithJsonString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFees:(id)arg1;
- (unsigned long long)itemType;
- (id)jsonArrayRepresentation;
- (id)jsonString;
- (id)recordTypesAndNames;
- (void)setFees:(id)arg1;

@end
