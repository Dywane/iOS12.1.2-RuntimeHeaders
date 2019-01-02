/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRequestPerformer : NSObject <VNRequestCancelling, VNRequestWarming, VNTrackerProviding> {
    NSLock * _requestLock;
    NSMutableArray * _requestsInFlight;
    NSMutableArray * _requestsPending;
    NSMutableDictionary * _sequencedRequestObservations;
    NSMutableSet * _trackerKeys;
}

- (void).cxx_destruct;
- (id)_dependencyAnalyzedRequestsForRequests:(id)arg1;
- (id)_orderedRequestsForRequests:(id)arg1;
- (bool)_performOrderedRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)_validateAndPrepareRequests:(id)arg1 error:(id*)arg2;
- (void)cancelAllRequests;
- (void)dealloc;
- (id)init;
- (bool)performDependentRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4;
- (bool)performRequests:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
- (bool)performRequests:(id)arg1 inContext:(id)arg2 onBehalfOfRequest:(id)arg3 error:(id*)arg4;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (bool)prepareForPerformingRequestsOfClass:(id)arg1 error:(id*)arg2;
- (id)previousSequencedObservationsForRequest:(id)arg1;
- (void)recordSequencedObservationsForRequest:(id)arg1;
- (void)releaseTracker:(id)arg1;
- (id)trackerWithOptions:(id)arg1 error:(id*)arg2;

@end
