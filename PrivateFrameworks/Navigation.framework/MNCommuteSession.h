/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteSession : NSObject <MNCommuteDestinationObserver, MNCommuteDestinationUpdaterDelegate> {
    unsigned long long  _commuteSessionState;
    MNCommuteDestinationUpdater * _comparisonDestinationStartTime;
    unsigned long long  _currentSuggestionID;
    NSTimer * _etaUpdateTimer;
    bool  _isMapsActive;
    MNLocation * _lastLocation;
    MNLocationHistory * _locationHistory;
    MNObserverHashTable<MNCommuteSessionObserver> * _observers;
    NSArray * _rankedDestinations;
    id  _rankedDestinationsSync;
    unsigned long long  _requestedCommuteSessionState;
    NSMutableDictionary * _suggestions;
    MNSuggestionsManager * _suggestionsManager;
    MNNavigationTraceManager * _traceManager;
}

@property (nonatomic) unsigned long long commuteSessionState;
@property (nonatomic) MNCommuteDestinationUpdater *comparisonDestinationStartTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isMapsActive;
@property (nonatomic, readonly) NSArray *rankedDestinations;
@property (nonatomic) unsigned long long requestedCommuteSessionState;
@property (readonly) NSString *suggestionsDescription;
@property (nonatomic) MNSuggestionsManager *suggestionsManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;

- (void).cxx_destruct;
- (void)_resetRankedDestinations;
- (void)_updateSuggestionsManagerState;
- (void)_updatedDestinations;
- (void)addObserver:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (void)commuteDestination:(id)arg1 didChangeInvalid:(bool)arg2;
- (unsigned long long)commuteSessionState;
- (id)comparisonDestinationStartTime;
- (void)dealloc;
- (void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
- (void)destinationUpdaterDidArrive:(id)arg1;
- (id)init;
- (id)initWithTraceName:(id)arg1 isTraceRecording:(bool)arg2;
- (bool)isMapsActive;
- (id)rankedDestinations;
- (void)removeObserver:(id)arg1;
- (unsigned long long)requestedCommuteSessionState;
- (void)setCommuteSessionState:(unsigned long long)arg1;
- (void)setComparisonDestinationStartTime:(id)arg1;
- (void)setRequestedCommuteSessionState:(unsigned long long)arg1;
- (void)setSuggestionsManager:(id)arg1;
- (void)startETAUpdatesWithInterval:(double)arg1;
- (void)stop;
- (void)stopETAUpdates;
- (id)suggestionsDescription;
- (id)suggestionsManager;
- (id)traceManager;
- (void)updateComparisonStartDate;
- (void)updateLocation:(id)arg1;
- (void)updateMapsActive:(bool)arg1;

@end
