/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIButtonFooterSettingsHeaderFooterDescriptionView : SKUISettingsHeaderFooterDescriptionView {
    UIButton * _button;
    SKUIButtonViewElement * _buttonElement;
    SKUIViewElement * _viewElement;
}

+ (id)_buttonWithButtonElement:(id)arg1;
+ (struct CGSize { double x1; double x2; })preferredSizeForSettingsHeaderFooterDescription:(id)arg1 context:(id)arg2;
+ (bool)prefetchResourcesForSettingsHeaderFooterDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (void)requestLayoutForSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 settingsHeaderFooterDescription:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (void)_buttonTapped:(id)arg1;
- (void)_reloadWithButtonElement:(id)arg1 context:(id)arg2;
- (void)layoutSubviews;
- (void)reloadWithSettingsHeaderFooterDescription:(id)arg1 width:(double)arg2 context:(id)arg3;
- (bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;

@end
