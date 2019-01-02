/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileDetailView : UIView {
    bool  _adminEnabled;
    <MusicProfileDetailViewDelegate> * _delegate;
    MusicMediaDetailTintInformation * _detailTintInformation;
    MusicProfileFollowButton * _editButton;
    NSString * _editText;
    MusicProfileFollowButton * _followButton;
    bool  _followHidden;
    NSString * _followText;
    UILabel * _followersCountLabel;
    NSString * _followersCountText;
    UILabel * _followersLabel;
    NSString * _followersText;
    bool  _following;
    bool  _followingInitialized;
    NSString * _followingText;
    UILabel * _profileLabel;
    UITapGestureRecognizer * _profileLabelTapGestureRecognizer;
    UIButton * _shareActionsButton;
    bool  _sharingHidden;
    long long  _tintStyle;
    NSString * _title;
    bool  _titleShouldAllowSelection;
}

@property (getter=isAdminEnabled, nonatomic) bool adminEnabled;
@property (nonatomic) <MusicProfileDetailViewDelegate> *delegate;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic, readonly) UIControl *editButton;
@property (nonatomic, copy) NSString *editText;
@property (getter=isFollowHidden, nonatomic) bool followHidden;
@property (nonatomic, copy) NSString *followText;
@property (nonatomic, copy) NSString *followersCountText;
@property (nonatomic, copy) NSString *followersText;
@property (getter=isFollowing, nonatomic) bool following;
@property (nonatomic, copy) NSString *followingText;
@property (nonatomic, readonly) UIButton *shareActionsButton;
@property (getter=isFollowHidden, nonatomic) bool sharingHidden;
@property (nonatomic) long long tintStyle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool titleShouldAllowSelection;

- (void).cxx_destruct;
- (void)_applyDetailTintInformation;
- (void)_editButtonTouchUpInsideAction:(id)arg1;
- (void)_followButtonTouchUpInsideAction:(id)arg1;
- (void)_layoutAvailableItems;
- (void)_profileLabelTapped:(id)arg1;
- (void)_setFollowing:(bool)arg1 animated:(bool)arg2;
- (void)_shareActionsButtonTapped:(id)arg1;
- (void)_updateVisibilityOfFollowItems;
- (void)dealloc;
- (id)delegate;
- (id)detailTintInformation;
- (id)editButton;
- (id)editText;
- (id)followText;
- (id)followersCountText;
- (id)followersText;
- (id)followingText;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAdminEnabled;
- (bool)isFollowHidden;
- (bool)isFollowHidden;
- (bool)isFollowing;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setAdminEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setEditText:(id)arg1;
- (void)setFollowHidden:(bool)arg1;
- (void)setFollowText:(id)arg1;
- (void)setFollowersCountText:(id)arg1;
- (void)setFollowersText:(id)arg1;
- (void)setFollowing:(bool)arg1;
- (void)setFollowing:(bool)arg1 animated:(bool)arg2;
- (void)setFollowingText:(id)arg1;
- (void)setSharingHidden:(bool)arg1;
- (void)setTintStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleShouldAllowSelection:(bool)arg1;
- (id)shareActionsButton;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (long long)tintStyle;
- (id)title;
- (bool)titleShouldAllowSelection;

@end
