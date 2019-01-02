/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADOptInStatusService : ADSingleton <ADOptInStatus_XPC, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    bool  _requestInFlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (nonatomic) bool requestInFlight;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)advertisingIdentifier:(id /* block */)arg1;
- (void)advertisingIdentifierChanged:(id /* block */)arg1;
- (void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)clearAdvertisingIdentifier;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (long long)optInStatusFromRecord:(id)arg1;
- (id)optInStatusString:(long long)arg1;
- (void)reconcileAndUpdateBeforeResponding:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)requestInFlight;
- (void)requestOptInStatusFromJingle:(id /* block */)arg1;
- (void)setListener:(id)arg1;
- (void)setOptInStatus:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setRequestInFlight:(bool)arg1;

@end
