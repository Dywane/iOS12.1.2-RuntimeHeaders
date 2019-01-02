/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTParsecZKWNewsOperation : FCOperation {
    NSDate * _fetchDate;
    id /* block */  _newsCompletionHandler;
    SFRankingFeedback * _resultRankingFeedback;
    NSOrderedSet * _resultSearchResultIDs;
    NSDictionary * _resultSearchResultsBySearchResultID;
    PARSession * _session;
}

@property (nonatomic, copy) NSDate *fetchDate;
@property (nonatomic, copy) id /* block */ newsCompletionHandler;
@property (nonatomic, copy) SFRankingFeedback *resultRankingFeedback;
@property (nonatomic, copy) NSOrderedSet *resultSearchResultIDs;
@property (nonatomic, copy) NSDictionary *resultSearchResultsBySearchResultID;
@property (nonatomic, retain) PARSession *session;

- (void).cxx_destruct;
- (id)fetchDate;
- (id)init;
- (id /* block */)newsCompletionHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)resultRankingFeedback;
- (id)resultSearchResultIDs;
- (id)resultSearchResultsBySearchResultID;
- (id)session;
- (void)setFetchDate:(id)arg1;
- (void)setNewsCompletionHandler:(id /* block */)arg1;
- (void)setResultRankingFeedback:(id)arg1;
- (void)setResultSearchResultIDs:(id)arg1;
- (void)setResultSearchResultsBySearchResultID:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setTimeoutDuration:(double)arg1;
- (bool)validateOperation;

@end
