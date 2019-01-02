/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
 */

@interface ATXHeuristicResultCache : NSObject <DNDStateUpdateListener> {
    int  _appRefreshToken;
    NSMutableDictionary * _cache;
    DNDState * _doNotDisturbState;
    NSHashTable * _expirerInternTable;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    int  _significantTimeToken;
}

@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addDNDStateUpdateListener;
+ (id)sharedInstance;
+ (id)sharedPassLibrary;

- (void).cxx_destruct;
- (void)_expire:(id)arg1 postNotification:(bool)arg2;
- (id)_internExpirerLocked:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (void)expire:(id)arg1;
- (void)expireAll;
- (id)firstExpirationDate;
- (id)heuristicsCached;
- (id)init;
- (bool)isDNDActiveWithError:(id*)arg1;
- (id)objectForKey:(id)arg1 found:(bool*)arg2;
- (void)setObject:(id)arg1 expirers:(id)arg2 forKey:(id)arg3;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;

@end