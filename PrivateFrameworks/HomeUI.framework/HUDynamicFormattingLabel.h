/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDynamicFormattingLabel : UILabel {
    NSDictionary * _defaultAttributes;
    <HFDynamicFormattingValue> * _dynamicFormattingValue;
    <NACancelable> * _formattedValueObservationCancellationToken;
    UIFont * _preferredFontForCurrentSize;
    NSArray * _preferredFonts;
}

@property (nonatomic, copy) NSDictionary *defaultAttributes;
@property (nonatomic, retain) <HFDynamicFormattingValue> *dynamicFormattingValue;
@property (nonatomic, retain) <NACancelable> *formattedValueObservationCancellationToken;
@property (nonatomic, retain) UIFont *preferredFontForCurrentSize;
@property (nonatomic, copy) NSArray *preferredFonts;

- (void).cxx_destruct;
- (id)_formattedValueWithFont:(id)arg1;
- (void)_updateFormattedValueIncludingFont:(bool)arg1;
- (void)_updateFormattedValueObservation;
- (void)_updatePreferredFontIncludingValue:(bool)arg1;
- (id)defaultAttributes;
- (void)didMoveToWindow;
- (id)dynamicFormattingValue;
- (id)formattedValueObservationCancellationToken;
- (void)layoutSubviews;
- (id)preferredFontForCurrentSize;
- (id)preferredFonts;
- (void)setDefaultAttributes:(id)arg1;
- (void)setDynamicFormattingValue:(id)arg1;
- (void)setFormattedValueObservationCancellationToken:(id)arg1;
- (void)setPreferredFontForCurrentSize:(id)arg1;
- (void)setPreferredFonts:(id)arg1;

@end
