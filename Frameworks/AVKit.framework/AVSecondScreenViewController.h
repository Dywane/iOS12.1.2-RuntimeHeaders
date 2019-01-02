/* Generated by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVSecondScreenViewController : UIViewController {
    UIView * _contentView;
    UILabel * _debugLabel;
    AVSecondScreenPlayerLayerView * _playerLayerView;
    bool  _playingOnSecondScreen;
    AVPlayerLayer * _sourcePlayerLayer;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, readonly) UILabel *debugLabel;
@property (nonatomic, retain) AVSecondScreenPlayerLayerView *playerLayerView;
@property (getter=isPlayingOnSecondScreen, nonatomic) bool playingOnSecondScreen;
@property (nonatomic) AVPlayerLayer *sourcePlayerLayer;

- (void).cxx_destruct;
- (void)_updateContentViewIfNeeded;
- (void)_updateLayout;
- (id)contentView;
- (void)dealloc;
- (id)debugLabel;
- (id)debugText;
- (bool)isPlayingOnSecondScreen;
- (void)loadPlayerLayerViewIfNeeded;
- (id)playerLayerView;
- (void)setContentView:(id)arg1;
- (void)setDebugText:(id)arg1;
- (void)setPlayerLayerView:(id)arg1;
- (void)setPlayingOnSecondScreen:(bool)arg1;
- (void)setSourcePlayerLayer:(id)arg1;
- (id)sourcePlayerLayer;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
