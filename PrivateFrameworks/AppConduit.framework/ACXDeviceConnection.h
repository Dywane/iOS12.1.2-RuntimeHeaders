/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
 */

@interface ACXDeviceConnection : NSObject <ACXDeviceConnectionDelegateProtocol> {
    <ACXDeviceConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSObject<OS_dispatch_source> * _observerReEstablishTimer;
    NSHashTable * _observers;
    NSXPCConnection * _xpcConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ACXDeviceConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSObject<OS_dispatch_source> *observerReEstablishTimer;
@property (readonly) NSHashTable *observers;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

+ (void)_removeFilesAtURL:(id)arg1;
+ (void)performUninstallationCleanup;
+ (id)sharedDeviceConnection;

- (void).cxx_destruct;
- (void)_invalidateXPCConnection;
- (bool)_onQueue_createXPCConnectionIfNecessary;
- (void)_onQueue_reEstablishObserverConnectionIfNeeded;
- (id)_proxyWithErrorHandler:(id /* block */)arg1;
- (void)activeComplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)activeComplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPendingInstallations;
- (void)cancelUpdatePendingForCompanionApp:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)fetchApplicationWithContainingApplicationBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInfoForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchInstalledApplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledApplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)fetchInstalledCompatibleApplicationsWithDevice:(id)arg1 withErrorCompletion:(id /* block */)arg2;
- (void)fetchInstalledComplicationsForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledComplicationsWithErrorCompletion:(id /* block */)arg1;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesForApplicationWithBundleID:(id)arg1 forPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchProvisioningProfilesForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchProvisioningProfilesWithCompletion:(id /* block */)arg1;
- (void)fetchWatchAppBundleIDForCompanionAppBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchWatchAppBundleURLWithinCompanionAppWithWatchAppIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)getAlwaysInstallForPairedDevice:(id)arg1 completion:(id /* block */)arg2;
- (void)getAlwaysInstallWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)installAllApplications;
- (void)installApplication:(id)arg1 completionWithError:(id /* block */)arg2;
- (void)installApplication:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 completionWithError:(id /* block */)arg3;
- (void)installApplication:(id)arg1 withProvisioningProfiles:(id)arg2 onPairedDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)installProvisioningProfileWithURL:(id)arg1 completion:(id /* block */)arg2;
- (void)installProvisioningProfileWithURL:(id)arg1 onPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (id)internalQueue;
- (id)observerReEstablishTimer;
- (id)observers;
- (void)removeApplication:(id)arg1 completion:(id /* block */)arg2;
- (void)removeApplication:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)removeObserver:(id)arg1;
- (void)removeProvisioningProfileWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeProvisioningProfileWithID:(id)arg1 fromPairedDevice:(id)arg2 completion:(id /* block */)arg3;
- (void)retryPendingAppInstallationsForPairedDevice:(id)arg1;
- (void)setAllExistingAppsShouldBeInstalled:(bool)arg1 forNewDevice:(id)arg2;
- (void)setAlwaysInstall:(id)arg1;
- (void)setAlwaysInstall:(id)arg1 forDevice:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setObserverReEstablishTimer:(id)arg1;
- (void)setUpdatePendingForCompanionApp:(id)arg1 completion:(id /* block */)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)updateInstallProgressForApplication:(id)arg1 progress:(double)arg2 phase:(unsigned long long)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 completion:(id /* block */)arg3;
- (void)updatePreferencesForApplicationWithIdentifier:(id)arg1 preferences:(id)arg2 forPairedDevice:(id)arg3 completion:(id /* block */)arg4;
- (void)updatedInstallStateForApplicationsWithInfo:(id)arg1;
- (id)xpcConnection;

@end
