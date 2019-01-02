/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCNAutoCompleteFetchDelelegate : NSObject <CNAutocompleteFetchDelegate> {
    <CNCancelable> * _fetchCancelable;
    NSMutableArray * _results;
    id /* block */  _serviceHelperCompletion;
    AFWatchdogTimer * _watchDogTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNCancelable> *fetchCancelable;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableArray *results;
@property (copy) id /* block */ serviceHelperCompletion;
@property (readonly) Class superclass;
@property (retain) AFWatchdogTimer *watchDogTimer;

+ (id)sharedDelegateWithServiceHelperCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)autoCompleteResultAdddressTypeForResultValue:(id)arg1;
- (id)autoCompleteSourceTypeForResult:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)fetchCancelable;
- (id)init;
- (id)results;
- (id /* block */)serviceHelperCompletion;
- (void)setFetchCancelable:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setServiceHelperCompletion:(id /* block */)arg1;
- (void)setWatchDogTimer:(id)arg1;
- (id)watchDogTimer;

@end
