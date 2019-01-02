/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreNetworkManager : NSObject {
    bool  _hasSymptomsBasedHistoricalCellQuality;
    bool  _hasSymptomsBasedHistoricalWiFiQuality;
    bool  _hasSymptomsBasedInstantCellQuality;
    bool  _hasSymptomsBasedInstantWiFiQuality;
    bool  _lastFetchInProgress;
    NSNumber * _lastSignalStrength;
    double  _lastSuccessfulSymptomsFetch;
    NSHashTable * _observers;
    NSObject<OS_nw_path_evaluator> * _pathEvaluator;
    int  _pathStatus;
    bool  _pathUsesCellular;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _subscriptionCount;
    bool  _symptomsBasedHistoricalCellQualityIsGood;
    bool  _symptomsBasedHistoricalWiFiQualityIsGood;
    bool  _symptomsBasedInstantCellQualityIsGood;
    bool  _symptomsBasedInstantWiFiQualityIsGood;
    SiriCoreWiFiManagerClient * _wiFiManagerClient;
}

+ (void)_ifnameTypeForName:(char *)arg1 isWiFi:(bool*)arg2 isCellular:(bool*)arg3;
+ (void)acquireDormancySuspendAssertion:(const void**)arg1;
+ (long long)connectionSubTypeForCellularInterface;
+ (long long)connectionTypeForInterface:(id)arg1;
+ (id)connectionTypeForInterfaceName:(id)arg1 isCellular:(bool)arg2;
+ (void)getCarrierName:(id*)arg1 signalStrength:(id*)arg2 subscriptionCount:(id*)arg3;
+ (void)releaseDormancySuspendAssertion:(void*)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_getConnectionSuccessRate:(id)arg1 hasMetric:(bool*)arg2;
- (void)_getNetworkPerformanceFeed;
- (id)_init;
- (void)_pathUpdated:(id)arg1;
- (long long)_reportCellularHistoricalQuality;
- (long long)_reportCellularInstantQuality;
- (long long)_reportWiFiHistoricalQuality;
- (long long)_reportWiFiInstantQuality;
- (void)_stopMonitoringNetwork;
- (id)_wiFiManagerClient;
- (void)acquireWiFiAssertion:(long long)arg1;
- (void)addObserver:(id)arg1;
- (long long)anyNetworkQuality;
- (long long)cellularNetworkQuality;
- (void)dealloc;
- (void)forceFastDormancy;
- (void)getNetworkPerformanceFeed;
- (void)getQualityReport:(id /* block */)arg1;
- (void)getSignalStrength:(id*)arg1 subscriptionCount:(unsigned long long*)arg2;
- (void)releaseWiFiAssertion;
- (void)removeObserver:(id)arg1;
- (void)startMonitoringNetworkForHost:(id)arg1;
- (void)stopMonitoringNetwork;
- (long long)wifiNetworkQuality;

@end
