/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILoadGratisEligibilityOperation : NSOperation {
    NSArray * _bundleIDs;
    SKUIClientContext * _clientContext;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    id /* block */  _outputBlock;
}

@property (copy) id /* block */ outputBlock;

- (void).cxx_destruct;
- (id)_bodyData;
- (id)init;
- (id)initWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (id /* block */)outputBlock;
- (void)setOutputBlock:(id /* block */)arg1;

@end
