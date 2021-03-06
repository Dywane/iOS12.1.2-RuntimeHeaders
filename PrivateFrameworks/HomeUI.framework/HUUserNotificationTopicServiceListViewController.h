/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUUserNotificationTopicServiceListViewController : HUItemTableViewController {
    HMHome * _home;
    HUUserNotificationTopicServiceListModuleController * _moduleController;
    HFUserNotificationServiceTopic * _topic;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) HUUserNotificationTopicServiceListModuleController *moduleController;
@property (nonatomic, readonly) HFUserNotificationServiceTopic *topic;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1 topic:(id)arg2;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)moduleController;
- (void)setModuleController:(id)arg1;
- (id)showNotificationSettingsForHomeKitObject:(id)arg1 animated:(bool)arg2;
- (id)topic;

@end
