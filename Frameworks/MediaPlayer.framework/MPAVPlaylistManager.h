/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVPlaylistManager : NSObject <MPAVQueueController, MPAVQueueCoordinatorDataSource, MPQueueBehaviorManaging, MPQueueFeederDelegate, NSSecureCoding> {
    MPAVController * _avController;
    MPAVItem * _currentItem;
    <MPAVItemQueueIdentifier> * _currentItemQueueIdentifier;
    MPQueueFeeder * _currentQueueFeeder;
    <MPAVPlaylistManagerDelegate> * _delegate;
    bool  _goToTargetIndex;
    long long  _lastSelectionDirection;
    long long  _playbackMode;
    MPQueueFeeder * _playlistFeeder;
    MPAVQueueCoordinator * _queueCoordinator;
    long long  _repeatMode;
    long long  _targetIndex;
    bool  _updatedAudioSessionMode;
}

@property (nonatomic, readonly) bool allowsQueueResetWhenReachingEnd;
@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic) MPAVController *avController;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly) long long currentIndex;
@property (retain) MPAVItem *currentItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MPAVPlaylistManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackMode;
@property (nonatomic, readonly) MPQueueFeeder *playlistFeeder;
@property (nonatomic, readonly) long long playlistItemCount;
@property (readonly) MPAVQueueCoordinator *queueCoordinator;
@property (nonatomic) long long repeatMode;
@property (nonatomic) bool shouldDeferItemLoading;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) long long upNextItemCount;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyVolumeNormalizationForQueuedItems;
- (long long)_indexForStringIdentifier:(id)arg1;
- (id)_itemToFollowItemIndex:(long long)arg1 skipUnavailableContent:(bool)arg2;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (long long)_nextItemIndex:(long long)arg1 repeatMode:(long long)arg2;
- (void)_notifyQueueFeederContentsChanged;
- (id)_nowplayingContentItemForIndex:(long long)arg1;
- (id)_nowplayingContentItemIdentifierForIndex:(long long)arg1;
- (unsigned long long)_playbackIndexForDelta:(long long)arg1 fromIndex:(unsigned long long)arg2 ignoreElapsedTime:(bool)arg3 totalItemCount:(unsigned long long)arg4 didReachEnd:(bool*)arg5;
- (long long)_prepareToQueuePlaybackIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (id)_queuePlayerFeederItemForIndex:(long long)arg1;
- (void)_reloadQueuedItemsIfPathBecameAvailable;
- (void)_updateAudioSessionModeWithIndex:(unsigned long long)arg1;
- (void)_willFinishReloadWithQueueFeeder:(id)arg1 fromPlaybackContext:(id)arg2;
- (bool)allowsQueueResetWhenReachingEnd;
- (bool)allowsUserVisibleUpcomingItems;
- (id)avController;
- (bool)canSeek;
- (bool)canSeekItem:(id)arg1;
- (bool)canSkipItem:(id)arg1;
- (bool)canSkipToPreviousItem;
- (bool)canSkipToPreviousItemForItem:(id)arg1;
- (void)clearQueueFeeder;
- (void)connectQueueCoordinator:(id)arg1;
- (id)contentItemIDForPlaylistIndex:(long long)arg1;
- (long long)currentIndex;
- (id)currentItem;
- (id)currentQueueUUID;
- (void)dealloc;
- (id)delegate;
- (void)disconnectQueueCoordinator;
- (unsigned long long)displayCountForItem:(id)arg1;
- (unsigned long long)displayIndexForItem:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(id /* block */)arg1;
- (void)handlePlaybackFailureForItem:(id)arg1;
- (bool)hasQueueContents;
- (unsigned long long)indexForContentItemID:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3 didReachEnd:(bool*)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isPlaceholderItemForContentItemID:(id)arg1;
- (id)itemForContentItemID:(id)arg1;
- (id)itemForPlaylistIndex:(long long)arg1;
- (id)metadataItemForPlaylistIndex:(long long)arg1;
- (id)musicPlayerControllerQueueForUUID:(id)arg1;
- (long long)playbackMode;
- (void)player:(id)arg1 currentItemDidChangeFromItem:(id)arg2 toItem:(id)arg3;
- (id)playlistFeeder;
- (id)playlistFeederForPlaylistIndex:(long long)arg1;
- (long long)playlistIndexOfIndex:(long long)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexOfItem:(id)arg1;
- (long long)playlistIndexOfItemIdentifier:(id)arg1;
- (long long)playlistIndexOfQueueIdentifier:(id)arg1 inPlaylistFeeder:(id)arg2;
- (long long)playlistIndexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3 didReachEnd:(bool*)arg4;
- (long long)playlistItemCount;
- (id)queueCoordinator;
- (void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
- (id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;
- (void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
- (void)queueCoordinatorDidChangeItems:(id)arg1;
- (void)queueFeeder:(id)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(id)arg3;
- (void)queueFeeder:(id)arg1 didChangeContentsWithReplacementPlaybackContext:(id)arg2;
- (void)queueFeederDidInvalidateAssets:(id)arg1;
- (void)queueFeederDidInvalidateRealRepeatType:(id)arg1;
- (void)queueFeederDidInvalidateRealShuffleType:(id)arg1;
- (void)queueFeederDidReplaceItem:(id)arg1;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)repeatMode;
- (void)requestMusicPlayerControllerQueueWithCompletionHandler:(id /* block */)arg1;
- (void)reset;
- (void)setAvController:(id)arg1;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setCurrentItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setMusicPlayerControllerQueue:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)setPlaylistFeeder:(id)arg1 startIndex:(long long)arg2 keepPlaying:(bool)arg3;
- (void)setRepeatMode:(long long)arg1;
- (void)setShouldDeferItemLoading:(bool)arg1;
- (bool)shouldDeferItemLoading;
- (id)uniqueIdentifier;
- (long long)upNextItemCount;
- (void)updateForSoundCheckDefaultsChange;
- (void)updateLocationDependentPropertiesForItem:(id)arg1;
- (bool)userCanChangeShuffleAndRepeatType;

@end
