/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProfileHeaderContentViewController : UIViewController <MusicClientContextConsuming, MusicMediaDetailHeaderContentViewController, MusicProfileDetailViewDelegate> {
    bool  _adminEnabled;
    MusicClientContext * _clientContext;
    <MusicEntityProviding> * _containerEntityProvider;
    MusicEntityValueContext * _containerEntityValueContext;
    <MusicMediaProfileHeaderContentViewControllerDelegate> * _delegate;
    bool  _followHidden;
    NSString * _followersCountText;
    NSString * _followersText;
    bool  _hasProfileImage;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    MusicProfileDetailView * _profileDetailView;
    UIImage * _profileImage;
    NSOperationQueue * _profileImageEffectQueue;
    UIImageView * _profileImageView;
    NSString * _profileTitle;
    bool  _shouldDelayTransitionProgress;
    double  _transitionProgress;
}

@property (getter=isAdminEnabled, nonatomic) bool adminEnabled;
@property (nonatomic, retain) MusicClientContext *clientContext;
@property (nonatomic, readonly) <MusicEntityProviding> *containerEntityProvider;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicMediaProfileHeaderContentViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isFollowHidden, nonatomic) bool followHidden;
@property (nonatomic, copy) NSString *followersCountText;
@property (nonatomic, copy) NSString *followersText;
@property (nonatomic) bool hasProfileImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic, copy) UIImage *profileImage;
@property (nonatomic, copy) NSString *profileTitle;
@property (nonatomic, readonly) UIButton *shareButton;
@property (nonatomic) bool shouldDelayTransitionProgress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyProfileImageTintInformation;
- (void)_applyTintInformation;
- (void)_applyTransitionProgress;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_calculateProfileDetailViewLayoutInsets;
- (void)_containerEntityValueProviderDidInvalidateNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_effectiveVerticalInsets;
- (bool)_isFollowActionAvailable;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadProfileImageView;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updatePreferredContentSize;
- (id)clientContext;
- (void)configureArtworkCatalog:(id)arg1;
- (id)containerEntityProvider;
- (void)dealloc;
- (id)delegate;
- (id)followersCountText;
- (id)followersText;
- (bool)hasProfileImage;
- (id)initWithContainerEntityProvider:(id)arg1;
- (bool)isAdminEnabled;
- (bool)isFollowHidden;
- (id)mediaDetailTintInformation;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)profileDetailView:(id)arg1 didUpdateFollowingState:(bool)arg2;
- (void)profileDetailViewDidSelectEditButton:(id)arg1;
- (void)profileDetailViewDidSelectShareActionsButton:(id)arg1;
- (void)profileDetailViewDidSelectTitle:(id)arg1;
- (id)profileImage;
- (id)profileTitle;
- (void)setAdminEnabled:(bool)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFollowHidden:(bool)arg1;
- (void)setFollowersCountText:(id)arg1;
- (void)setFollowersText:(id)arg1;
- (void)setHasProfileImage:(bool)arg1;
- (void)setMediaDetailHeaderHeight:(double)arg1 withMaximumHeaderHeight:(double)arg2 transitionProgress:(double)arg3;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setProfileImage:(id)arg1;
- (void)setProfileTitle:(id)arg1;
- (void)setShouldDelayTransitionProgress:(bool)arg1;
- (id)shareButton;
- (bool)shouldDelayTransitionProgress;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
