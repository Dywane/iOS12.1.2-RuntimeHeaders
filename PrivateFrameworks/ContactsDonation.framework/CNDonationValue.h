/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDonationValue : NSObject <NSSecureCoding> {
    CNDonationOrigin * _origin;
}

@property (nonatomic, readonly, copy) CNDonationOrigin *origin;

+ (id)donationValueWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3;
+ (id)donationValueWithImageData:(id)arg1 origin:(id)arg2;
+ (id)donationValueWithNameComponents:(id)arg1 origin:(id)arg2;
+ (id)donationValueWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3;
+ (id)donationValueWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrigin:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)origin;
- (id)propertyListRepresentation;
- (void)updatePropertyListRepresentation:(id)arg1;

@end
