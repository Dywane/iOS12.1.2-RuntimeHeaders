/* Generated by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductStorePromotionController : NSObject <SKProductsRequestDelegate> {
    NSMutableArray * _fetchOrderCompletions;
    NSMutableArray * _fetchOrderOrders;
    NSMutableArray * _fetchOrderProductsRequests;
    NSObject<OS_dispatch_queue> * _fetchOrderQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultController;

- (void).cxx_destruct;
- (void)fetchStorePromotionOrderWithCompletionHandler:(id /* block */)arg1;
- (void)fetchStorePromotionVisibilityForProduct:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)updateStorePromotionOrder:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateStorePromotionVisibility:(long long)arg1 forProduct:(id)arg2 completionHandler:(id /* block */)arg3;

@end
