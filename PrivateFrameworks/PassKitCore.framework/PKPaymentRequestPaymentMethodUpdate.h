/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding> {
    PKPeerPaymentQuote * _peerPaymentQuote;
}

@property (nonatomic, retain) PKPeerPaymentQuote *peerPaymentQuote;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)peerPaymentQuote;
- (void)setPeerPaymentQuote:(id)arg1;

@end
