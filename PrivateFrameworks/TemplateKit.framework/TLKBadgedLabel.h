/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKBadgedLabel : UIView {
    TLKVibrantLabel * _label;
    bool  _shouldBadge;
    unsigned long long  _style;
}

@property (retain) TLKVibrantLabel *label;
@property (nonatomic) bool shouldBadge;
@property (nonatomic) unsigned long long style;

- (void).cxx_destruct;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (bool)shouldBadge;
- (unsigned long long)style;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateAppearance;

@end
