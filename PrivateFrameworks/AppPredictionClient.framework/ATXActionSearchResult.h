/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXActionSearchResult : SFSearchResult {
    ATXActionResponse * _actionResponse;
    ATXAction * _atxAction;
}

@property (nonatomic, retain) ATXActionResponse *actionResponse;
@property (nonatomic, readonly) ATXAction *atxAction;

+ (id)_demoModeActionResponse;
+ (bool)_demoModeEnabled;
+ (id)actionResponseForDeveloperMode;
+ (id)predictedActionSearchResultsWithLimit:(long long)arg1 forBundleIdentifiers:(id)arg2;
+ (id)recentDonationsStarting:(id)arg1 end:(id)arg2 number:(unsigned long long)arg3;
+ (id)recentUpcomingMedia;
+ (id)searchResultForAction:(id)arg1 actionResponse:(id)arg2;
+ (bool)shouldDisplayRecentDonationsForTesting;
+ (bool)shouldDisplayUpcomingMediaForTesting;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateInlineCard;
- (id)actionResponse;
- (id)atxAction;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionSearchResult:(id)arg1;
- (void)setActionResponse:(id)arg1;
- (void)setAtxAction:(id)arg1;

@end
