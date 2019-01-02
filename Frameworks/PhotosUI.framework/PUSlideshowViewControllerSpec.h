/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowViewControllerSpec : PUViewControllerSpec {
    bool  _isAirplayRouteAvailable;
    bool  _isAirplayScreenAvailable;
    bool  _isChromeVisible;
    unsigned long long  _mode;
    bool  _shouldObserveAirplayRoute;
    bool  _shouldShowAirplayButton;
    bool  _shouldShowChromeBars;
    bool  _shouldShowPlaceholder;
}

@property (nonatomic, readonly) PUSlideshowViewControllerSpecChange *currentChange;
@property (setter=setAirplayRouteAvailable:, nonatomic) bool isAirplayRouteAvailable;
@property (setter=setAirplayScreenAvailable:, nonatomic) bool isAirplayScreenAvailable;
@property (setter=setChromeVisible:, nonatomic) bool isChromeVisible;
@property (nonatomic, readonly) unsigned long long mode;
@property (setter=_setShouldObserveAirplayRoute:, nonatomic) bool shouldObserveAirplayRoute;
@property (nonatomic, readonly) bool shouldPauseWhenAppResignsActive;
@property (nonatomic, readonly) bool shouldRegisterToAirplay;
@property (setter=_setShouldShowAirplayButton:, nonatomic) bool shouldShowAirplayButton;
@property (setter=_setShouldShowChromeBars:, nonatomic) bool shouldShowChromeBars;
@property (setter=_setShouldShowPlaceholder:, nonatomic) bool shouldShowPlaceholder;
@property (nonatomic, readonly) bool shouldUseChromeBars;
@property (nonatomic, readonly) bool shouldUseTapGesture;

- (void)_setShouldObserveAirplayRoute:(bool)arg1;
- (void)_setShouldShowAirplayButton:(bool)arg1;
- (void)_setShouldShowChromeBars:(bool)arg1;
- (void)_setShouldShowPlaceholder:(bool)arg1;
- (id)currentChange;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (bool)isAirplayRouteAvailable;
- (bool)isAirplayScreenAvailable;
- (bool)isChromeVisible;
- (unsigned long long)mode;
- (id)newSpecChange;
- (void)setAirplayRouteAvailable:(bool)arg1;
- (void)setAirplayScreenAvailable:(bool)arg1;
- (void)setChromeVisible:(bool)arg1;
- (bool)shouldObserveAirplayRoute;
- (bool)shouldPauseWhenAppResignsActive;
- (bool)shouldRegisterToAirplay;
- (bool)shouldShowAirplayButton;
- (bool)shouldShowChromeBars;
- (bool)shouldShowPlaceholder;
- (bool)shouldUseChromeBars;
- (bool)shouldUseTapGesture;
- (void)updateIfNeeded;

@end
