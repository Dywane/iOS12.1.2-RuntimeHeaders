/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIButtonsView : NUIContainerBoxView {
    SearchUIMovieCardSectionView * _cardSectionView;
}

@property SearchUIMovieCardSectionView *cardSectionView;

- (void).cxx_destruct;
- (id)buttonForChannelDetails:(id)arg1 punchoutURLs:(id)arg2 isEntitled:(bool)arg3 isContinuing:(bool)arg4 isContainerItem:(bool)arg5 seasonNumber:(id)arg6 episodeNumber:(id)arg7;
- (id)buttonForOffer:(id)arg1 playable:(id)arg2;
- (id)buttonForPlayable:(id)arg1;
- (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 punchoutURL:(id)arg3;
- (id)buttonsForPlayables:(id)arg1 channels:(id)arg2 currentEpisode:(id)arg3 isUpNextable:(bool)arg4 isUpNexted:(bool)arg5;
- (id)cardSectionView;
- (bool)channelHasBeenSeen:(id)arg1 seenChannels:(id)arg2;
- (void)fetchButtonsWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCardSectionView:(id)arg1;
- (void)sendErrorFeedbackIfNecessary:(id)arg1;
- (void)setCardSectionView:(id)arg1;

@end
