/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding> {
    NSDictionary * _certificates;
    PKPeerPaymentQuote * _peerPaymentQuote;
    NSData * _transactionData;
}

@property (nonatomic, readonly) NSDictionary *certificates;
@property (nonatomic, readonly) PKPeerPaymentQuote *peerPaymentQuote;
@property (nonatomic, readonly) NSData *transactionData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3;
- (id)peerPaymentQuote;
- (id)transactionData;

@end
