/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateExtraLargeRingImage : CLKComplicationTemplate {
    float  _fillFraction;
    CLKImageProvider * _imageProvider;
    long long  _ringStyle;
}

@property (nonatomic) float fillFraction;
@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic) long long ringStyle;

- (void).cxx_destruct;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (float)fillFraction;
- (id)imageProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (long long)ringStyle;
- (void)setFillFraction:(float)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setRingStyle:(long long)arg1;

@end
