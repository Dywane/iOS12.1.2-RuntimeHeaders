/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@interface MadridInternaliCloudListController : PSListController <IMCloudKitEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_handleDaemonConnected:(id)arg1;
- (void)_handleDaemonDisconnected:(id)arg1;
- (void)_startListeningForNotifications;
- (void)_stopListeningForNotifications;
- (void)clearData:(id)arg1;
- (void)clearLocalSyncState:(id)arg1;
- (void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
- (id)messagesOniCloudEnabled:(id)arg1;
- (void)setMessagesOniCloudEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)syncToiCloudNow:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
