/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTSubscriberAlgorithmEAPAKA : CTSubscriberAlgorithm {
    NSData * _autn;
    NSData * _rand;
}

@property (nonatomic, retain) NSData *autn;
@property (nonatomic, retain) NSData *rand;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)autn;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rand;
- (void)setAutn:(id)arg1;
- (void)setRand:(id)arg1;

@end
