/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFThumbnailItem_ios : UICollectionReusableView <PDFKitPlatformThumbnailItem> {
    CALayer * _borderEffect;
    bool  _horizontalModeStyle;
    UIImageView * _imageView;
    PDFPage * _page;
    UILabel * _textField;
}

@property (nonatomic) CALayer *borderEffect;
@property (nonatomic) bool horizontalModeStyle;
@property (retain) UIImageView *imageView;
@property (nonatomic) PDFPage *page;
@property (retain) UILabel *textField;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)borderEffect;
- (bool)horizontalModeStyle;
- (id)imageView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)page;
- (void)setBorderEffect:(id)arg1;
- (void)setHorizontalModeStyle:(bool)arg1;
- (void)setImageView:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setTextField:(id)arg1;
- (id)textField;

@end
