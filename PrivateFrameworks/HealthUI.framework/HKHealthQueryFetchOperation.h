/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthQueryFetchOperation : HKChartCacheFetchOperation {
    id /* block */  _clientCompletion;
    id /* block */  _fetchOperationManager;
    HKHealthStore * _healthStore;
    NSArray * _queries;
}

@property (nonatomic, retain) NSArray *queries;

- (void).cxx_destruct;
- (void)completedWithResults:(id)arg1 error:(id)arg2;
- (id)initWithHealthStore:(id)arg1 completion:(id /* block */)arg2;
- (id)queries;
- (void)setQueries:(id)arg1;
- (void)startOperationWithCompletion:(id /* block */)arg1;
- (void)stopOperation;

@end
