/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPContactScorer : NSObject {
    PPAutocompleteDelegate * _autocompleteDelegate;
    PPDiscoverySuggester * _discoverySuggester;
    NSObject<OS_dispatch_queue> * _memoryPressureQueue;
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    unsigned long long  _memoryPressureStatus;
    PPPeopleSuggester * _peopleSuggester;
}

+ (id)createNewSharedScorer;
+ (id)sharedInstance;
+ (void)unsetSharedScorer;

- (void).cxx_destruct;
- (id)_contactsFromSuggester:(id)arg1 matchingName:(id)arg2;
- (void)_setupMemoryPressureNotification;
- (id)bestContactsWithLimit:(unsigned long long)arg1;
- (id)contactsForDetailString:(id)arg1;
- (id)contactsForName:(id)arg1 recipients:(id)arg2;
- (void)dealloc;
- (void)discoverEvent:(id)arg1 store:(id)arg2;
- (void)discoveredRecipients:(id)arg1;
- (id)init;
- (double)scoreForContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreForContactIdentifier:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreForFoundOnDeviceContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3;
- (double)scoreFromRankPercentage:(double)arg1 acBoost:(double)arg2;
- (double)scoreMergedNameItem:(id)arg1;
- (void)undiscoverEvent:(id)arg1 store:(id)arg2;
- (void)waitForDiscoveriesToProcess;
- (void)waitForScoringData;

@end
