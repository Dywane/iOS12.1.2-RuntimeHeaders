/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKExplanationView : UIView <UIScrollViewDelegate, UITextViewDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    NSAttributedString * _attributedBodyText;
    long long  _backdropStyle;
    _UIBackdropView * _backdropView;
    double  _backdropWeight;
    NSString * _bodyText;
    bool  _bodyTextIsLeftAlgined;
    UITextView * _bodyTextView;
    UIView * _bodyView;
    PKCheckGlyphLayer * _checkmarkLayer;
    long long  _context;
    <PKExplanationViewDelegate> * _delegate;
    PKPaymentSetupDockView * _dockView;
    bool  _forceShowSetupLaterButton;
    UIView * _heroView;
    bool  _hideTitleText;
    UIImage * _image;
    UIImageView * _imageView;
    UIImageView * _logoImageView;
    bool  _privacyFooterShouldPin;
    OBPrivacyLinkController * _privacyLink;
    UIScrollView * _scrollView;
    bool  _showPrivacyView;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleLabelFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleLabelLastLineBounds;
    double  _titleLabelLastLineDescent;
    NSString * _titleText;
    double  _topMargin;
    bool  _updatingBackdropSettings;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic, copy) NSAttributedString *attributedBodyText;
@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic) bool bodyTextIsLeftAlgined;
@property (nonatomic, retain) UIView *bodyView;
@property (nonatomic, readonly) PKCheckGlyphLayer *checkmarkLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKExplanationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKPaymentSetupDockView *dockView;
@property (nonatomic) bool forceShowSetupLaterButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *heroView;
@property (nonatomic) bool hideTitleText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, retain) UIImageView *logoImageView;
@property (nonatomic, retain) OBPrivacyLinkController *privacyLink;
@property (nonatomic) bool showPrivacyView;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIFont *titleFont;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) double topMargin;

- (void).cxx_destruct;
- (void)_accessibilitySettingsDidChange:(id)arg1;
- (void)_calculateBlur;
- (void)_continue;
- (void)_createSubviews;
- (bool)_isBuddyiPad;
- (void)_setupLater;
- (bool)_showApplePayLogo;
- (void)_updateCachedTitleLabelLastLine;
- (void)_updateTitleLabel;
- (id)activityIndicator;
- (id)attributedBodyText;
- (id)bodyText;
- (bool)bodyTextIsLeftAlgined;
- (id)bodyView;
- (id)checkmarkLayer;
- (void)dealloc;
- (id)delegate;
- (id)dockView;
- (bool)forceShowSetupLaterButton;
- (id)heroView;
- (bool)hideTitleText;
- (id)image;
- (id)imageView;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (id)initWithContext:(long long)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)layoutSubviews;
- (id)logoImageView;
- (void)pk_applyAppearance:(id)arg1;
- (id)privacyLink;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAttributedBodyText:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextIsLeftAlgined:(bool)arg1;
- (void)setBodyView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setForceShowSetupLaterButton:(bool)arg1;
- (void)setHeroView:(id)arg1;
- (void)setHideTitleText:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setLogoImageView:(id)arg1;
- (void)setPrivacyLink:(id)arg1;
- (void)setShowPrivacyView:(bool)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTopMargin:(double)arg1;
- (bool)showPrivacyView;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (id)titleFont;
- (id)titleText;
- (double)topMargin;

@end
