/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMockPeerPaymentController : PKPeerPaymentController {
    PKCurrencyAmount * _mockBalance;
    id  _performCompletion;
    bool  _shouldGenerateMockTransactions;
}

@property (nonatomic, retain) PKCurrencyAmount *mockBalance;
@property (nonatomic) bool shouldGenerateMockTransactions;

- (void).cxx_destruct;
- (void)_adjustBalanceForAuthorizedTransferQuote:(id)arg1;
- (void)_insertPaymentTransactionForSecondaryFundingSourceIfNecessary:(id)arg1;
- (void)_insertPeerPaymentTransactionForAuthroizedTransferQuote:(id)arg1;
- (id)_quoteItemDictionaryWithType:(unsigned long long)arg1 amount:(id)arg2 alternateFundingSource:(id)arg3 featureDescriptor:(id)arg4;
- (void)formalRequestTokenForAmount:(id)arg1 completion:(id /* block */)arg2;
- (void)identifyRecipientWithAddress:(id)arg1 senderAddress:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithPeerPaymentWebService:(id)arg1;
- (id)mockBalance;
- (void)paymentAuthorizationCoordinator:(id*)arg1 didAuthorizePeerPaymentQuote:(id)arg2 handler:(id /* block */)arg3;
- (void)paymentAuthorizationCoordinator:(id*)arg1 didSelectPaymentMethod:(id)arg2 handler:(id /* block */)arg3;
- (void)performAction:(id)arg1 withPaymentIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)quoteWithAmount:(id)arg1 requestToken:(id)arg2 alternateFundingSource:(id)arg3 completion:(id /* block */)arg4;
- (void)setMockBalance:(id)arg1;
- (void)setShouldGenerateMockTransactions:(bool)arg1;
- (bool)shouldGenerateMockTransactions;

@end
