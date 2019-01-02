/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKBalloonLabelMarkerView : _MKLabelMarkerView <_MKBalloonCalloutViewConfiguring> {
    UIView * _anchorDotView;
    bool  _balloonCalloutShouldOriginateFromSmallSize;
    long long  _balloonCalloutStyle;
    UIView * _balloonContentView;
    UIColor * _balloonFillColor;
    UIImage * _balloonImage;
    UIColor * _balloonStrokeColor;
    bool  _needsToResolveBalloonAttributes;
    double  _smallBalloonScaleFactor;
}

@property (getter=_balloonCalloutStyle, nonatomic, readonly) long long balloonCalloutStyle;
@property (getter=_balloonContentView, nonatomic, readonly) UIView *balloonContentView;
@property (getter=_balloonImage, nonatomic, readonly) UIImage *balloonImage;
@property (getter=_balloonInnerStrokeColor, nonatomic, readonly) UIColor *balloonInnerStrokeColor;
@property (getter=_balloonStrokeColor, nonatomic, readonly) UIColor *balloonStrokeColor;
@property (getter=_balloonTintColor, nonatomic, readonly) UIColor *balloonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)calloutViewClass;

- (void).cxx_destruct;
- (void)_addAnchorDotViewIfNeeded;
- (bool)_balloonCalloutShouldOriginateFromSmallSize:(double*)arg1;
- (long long)_balloonCalloutStyle;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonInnerStrokeColor;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (void)_configureBalloonForDataIconImageKeys:(id)arg1 scale:(double)arg2;
- (void)_resolveBalloonAttributesIfNecessary;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (bool)shouldShowCallout;
- (bool)updateCalloutViewIfNeededAnimated:(bool)arg1;

@end
