/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController {
    SUSegmentedControl * _inlineSegmentedControl;
    NSIndexPath * _previewIndexPath;
    SUAudioPlayer * _previewPlayer;
    SUPlayerStatus * _previewStatus;
}

- (bool)_handleInlinePreviewForIndexPath:(id)arg1;
- (bool)_handleMediaPreviewForIndexPath:(id)arg1;
- (bool)_handlePreviewForIndexPath:(id)arg1;
- (void)_playerStatusChangeNotification:(id)arg1;
- (void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(bool)arg3;
- (void)_stopPreviewPlayback;
- (void)applicationDidEnterBackground;
- (bool)canDisplaySectionGroup:(id)arg1;
- (bool)canSelectRowAtIndexPath:(id)arg1;
- (void)dealloc;
- (bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (id)init;
- (bool)purchaseItemAtIndexPath:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)setSkLoading:(bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillDisappear:(bool)arg1;

@end
