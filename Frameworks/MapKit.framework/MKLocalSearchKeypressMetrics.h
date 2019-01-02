/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLocalSearchKeypressMetrics : NSObject {
    <GEOUsageKeypressEventProtocol> * _customUsageCapturer;
    NSString * _query;
    NSArray * _queryTokens;
    NSArray * _suggestionEntries;
    GEOUserSessionSnapshot * _userSessionSnapshot;
}

@property (nonatomic, retain) <GEOUsageKeypressEventProtocol> *customUsageCapturer;
@property (nonatomic, readonly, copy) NSString *query;
@property (nonatomic, readonly, copy) NSArray *queryTokens;
@property (nonatomic, readonly) NSArray *suggestionEntries;
@property (nonatomic, readonly) GEOUserSessionSnapshot *userSessionSnapshot;

- (void).cxx_destruct;
- (id)customUsageCapturer;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3 usageCapturer:(id)arg4;
- (id)query;
- (id)queryTokens;
- (void)setCustomUsageCapturer:(id)arg1;
- (void)submitWithStatus:(unsigned long long)arg1;
- (id)suggestionEntries;
- (id)userSessionSnapshot;

@end
