/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContactlessInterfaceTransactionContext : NSObject {
    NSDate * _date;
    PKExpressTransactionState * _expressState;
    bool  _incompatible;
    PKPaymentApplication * _paymentApplication;
    PKPaymentPass * _paymentPass;
    bool  _success;
    PKPaymentTransaction * _transaction;
    PKTransitAppletHistory * _transitHistory;
    NSArray * _valueAddedServicePasses;
    NSArray * _valueAddedServiceTransactions;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) PKExpressTransactionState *expressState;
@property (nonatomic, readonly) PKFelicaAppletHistory *felicaHistory;
@property (getter=isIncompatible, nonatomic) bool incompatible;
@property (nonatomic, retain) PKPaymentApplication *paymentApplication;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic) bool success;
@property (nonatomic, retain) PKPaymentTransaction *transaction;
@property (nonatomic, retain) PKTransitAppletHistory *transitHistory;
@property (nonatomic, retain) NSArray *valueAddedServicePasses;
@property (nonatomic, retain) NSArray *valueAddedServiceTransactions;

- (void).cxx_destruct;
- (id)date;
- (id)expressState;
- (id)felicaHistory;
- (bool)isIncompatible;
- (id)paymentApplication;
- (id)paymentPass;
- (void)setDate:(id)arg1;
- (void)setExpressState:(id)arg1;
- (void)setIncompatible:(bool)arg1;
- (void)setPaymentApplication:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (void)setTransaction:(id)arg1;
- (void)setTransitHistory:(id)arg1;
- (void)setValueAddedServicePasses:(id)arg1;
- (void)setValueAddedServiceTransactions:(id)arg1;
- (bool)success;
- (id)transaction;
- (id)transitHistory;
- (id)valueAddedServicePasses;
- (id)valueAddedServiceTransactions;

@end
