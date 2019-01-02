/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupHeroView : UIView <PKPaymentHeroImageControllerDelegate> {
    unsigned long long  _animationContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _aspectSize;
    UIView * _backgroundView;
    NSMutableArray * _cardViews;
    long long  _context;
    PKPaymentHeroImageController * _heroImageController;
    UIView<PKHeroImageView> * _heroImageView;
    UILabel * _instructionLabel;
    bool  _isAnimating;
    NSMutableDictionary * _networkImageViewsMap;
    UIImageView * _presentedCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)assetBackgroundColor;

- (void).cxx_destruct;
- (void)_createCardViewsWithImages:(id)arg1;
- (void)_createSubviews;
- (void)_finishedTransitionToCard:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForCardView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForInstructionLabel;
- (id)_imageWithData:(id)arg1;
- (unsigned long long)_indexOfNextObject:(id)arg1 withArray:(id)arg2;
- (double)_instructionFontSizeForContext:(long long)arg1;
- (bool)_isSmallPhone;
- (void)_promptTapToRadarWithTitle:(id)arg1 description:(id)arg2;
- (id)_resizeImage:(id)arg1;
- (void)_setCardViews:(id)arg1 networks:(id)arg2;
- (void)_transitionFromCardToCard:(id)arg1;
- (void)heroImageController:(id)arg1 didFinishDownloadingImageData:(id)arg2 forNetwork:(id)arg3 error:(id)arg4;
- (id)initWithContext:(long long)arg1 heroImageController:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pk_childrenForAppearance;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAnimation;
- (void)stopAnimation;

@end
