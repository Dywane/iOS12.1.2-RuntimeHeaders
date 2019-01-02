/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCloudPhotoWelcomeView : UIView {
    UILabel * _bodyLabel;
    UIVisualEffectView * _buttonContainerVisualEffectView;
    bool  _buttonsEnabled;
    UIView * _containerView;
    <PXCloudPhotoWelcomeViewDelegate> * _delegate;
    struct { 
        bool goButtonTapped; 
        bool learnMoreTapped; 
        bool notNowTapped; 
    }  _delegateRespondsTo;
    UILabel * _finePrintLabel;
    PXUIButton * _goButton;
    NSLayoutConstraint * _goButtonWidthConstraint;
    UIImageView * _graphicImageView;
    NSArray * _layoutConstraints;
    UIButton * _learnMoreButton;
    UIButton * _notNowButton;
    UIScrollView * _scrollView;
    UIVisualEffectView * _statusBarVisualEffectView;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) UILabel *bodyLabel;
@property (nonatomic, readonly) UIVisualEffectView *buttonContainerVisualEffectView;
@property (getter=areButtonsEnabled, nonatomic) bool buttonsEnabled;
@property (nonatomic) <PXCloudPhotoWelcomeViewDelegate> *delegate;
@property (nonatomic, readonly) UILabel *finePrintLabel;
@property (nonatomic, readonly) PXUIButton *goButton;
@property (nonatomic, readonly) UIImageView *graphicImageView;
@property (nonatomic, readonly) UIButton *learnMoreButton;
@property (nonatomic, readonly) UIButton *notNowButton;
@property (nonatomic, readonly) UIVisualEffectView *statusBarVisualEffectView;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_goButtonTapped:(id)arg1;
- (void)_handleNotNowTapped:(id)arg1;
- (void)_learnMoreTapped:(id)arg1;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateFontAndStyle;
- (bool)areButtonsEnabled;
- (id)bodyLabel;
- (id)buttonContainerVisualEffectView;
- (id)delegate;
- (id)finePrintLabel;
- (void)flashScrollIndicators;
- (id)goButton;
- (id)graphicImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)learnMoreButton;
- (id)notNowButton;
- (void)reloadContent;
- (void)setButtonsEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (id)statusBarVisualEffectView;
- (id)titleLabel;
- (void)traitCollectionDidChange:(id)arg1;

@end
