/* Generated by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKPaymentTransaction : NSObject {
    id  _internal;
}

@property (nonatomic, readonly) NSString *_transactionIdentifier;
@property (nonatomic, readonly) NSArray *downloads;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *matchingIdentifier;
@property (nonatomic, readonly) SKPaymentTransaction *originalTransaction;
@property (nonatomic, readonly) SKPayment *payment;
@property (nonatomic, readonly) NSDate *transactionDate;
@property (nonatomic, readonly) NSString *transactionIdentifier;
@property (nonatomic, readonly) NSData *transactionReceipt;
@property (nonatomic, readonly) long long transactionState;

- (void).cxx_destruct;
- (id)UUID;
- (void)_setDownloads:(id)arg1;
- (void)_setError:(id)arg1;
- (void)_setOriginalTransaction:(id)arg1;
- (void)_setTemporaryIdentifier:(id)arg1;
- (void)_setTransactionDate:(id)arg1;
- (void)_setTransactionIdentifier:(id)arg1;
- (void)_setTransactionReceipt:(id)arg1;
- (void)_setTransactionState:(long long)arg1;
- (id)_transactionIdentifier;
- (bool)canMergeWithTransaction:(id)arg1;
- (id)copyXPCEncoding;
- (id)downloads;
- (id)error;
- (id)init;
- (id)initWithPayment:(id)arg1;
- (id)initWithServerTransaction:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)matchingIdentifier;
- (bool)mergeWithServerTransaction:(id)arg1;
- (bool)mergeWithTransaction:(id)arg1;
- (id)originalTransaction;
- (id)payment;
- (id)transactionDate;
- (id)transactionIdentifier;
- (id)transactionReceipt;
- (long long)transactionState;

@end
