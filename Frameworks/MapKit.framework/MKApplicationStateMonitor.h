/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKApplicationStateMonitor : NSObject {
    bool  _active;
    BKSApplicationStateMonitor * _appStateMonitor;
    bool  _forceBackboardServicesMonitoring;
    bool  _inBackground;
    unsigned long long  _observerCount;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic) bool forceBackboardServicesMonitoring;
@property (getter=isInBackground, nonatomic, readonly) bool inBackground;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_becomeActive;
- (void)_enterBackground;
- (void)_exitBackground;
- (void)_handleApplicationStateChange:(id)arg1 interestedPID:(int)arg2;
- (void)_performSynchronouslyOnMainQueue:(id /* block */)arg1;
- (void)_resignActive;
- (void)dealloc;
- (bool)forceBackboardServicesMonitoring;
- (bool)isActive;
- (bool)isInBackground;
- (void)setForceBackboardServicesMonitoring:(bool)arg1;
- (void)startObserving;
- (void)stopObserving;

@end
