/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUFlightView : UIView <FUFlightInfoViewProtocol, UIPageViewControllerDataSource, UIPageViewControllerDelegate> {
    NSArray * _allLegs;
    UIVisualEffectView * _backBlurView;
    UIView * _borderLineViewLandscape;
    UIView * _borderLineViewPortrait;
    NSLayoutConstraint * _bottomMapConstraint;
    NSMutableArray * _controllers;
    long long  _currentFocus;
    FUFLightTrack * _currentTrack;
    <FUFlightViewDelegate> * _delegate;
    unsigned long long  _displayStyle;
    UIView * _errorView;
    NSArray * _flights;
    bool  _highlightCurrentFlightLeg;
    bool  _ignoreMapUpdate;
    NSLayoutConstraint * _lanscapeConstraint1;
    NSLayoutConstraint * _lanscapeConstraint2;
    NSLayoutConstraint * _lanscapeConstraint3;
    NSLayoutConstraint * _leadingMapConstraint;
    UIView * _loadingView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _mapInsets;
    MKMapView * _mapView;
    NSLayoutConstraint * _pageContainerHeightConstraint;
    UIPageControl * _pageControl;
    NSLayoutConstraint * _pageControllerHeightConstraint;
    UIScrollView * _pageViewContainer;
    UIPageViewController * _pageViewController;
    FUPlaneTrackerAnnotationView * _planeTracker;
    NSLayoutConstraint * _portraitConstraint1;
    long long  _selectedFlight;
    long long  _selectedLeg;
    bool  _showInfoPanel;
    bool  _spotlightMode;
    NSMutableArray * _tracks;
}

@property (nonatomic) UIVisualEffectView *backBlurView;
@property (nonatomic) UIView *borderLineViewLandscape;
@property (nonatomic) UIView *borderLineViewPortrait;
@property (nonatomic, retain) NSLayoutConstraint *bottomMapConstraint;
@property (nonatomic) long long currentFocus;
@property (readonly, copy) NSString *debugDescription;
@property <FUFlightViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long displayStyle;
@property (retain) UIView *errorView;
@property (nonatomic, retain) NSArray *flights;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightCurrentFlightLeg;
@property (nonatomic) bool ignoreMapUpdate;
@property (nonatomic) NSLayoutConstraint *lanscapeConstraint1;
@property (nonatomic) NSLayoutConstraint *lanscapeConstraint2;
@property (nonatomic) NSLayoutConstraint *lanscapeConstraint3;
@property (nonatomic, retain) NSLayoutConstraint *leadingMapConstraint;
@property (retain) UIView *loadingView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } mapInsets;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) NSLayoutConstraint *pageContainerHeightConstraint;
@property (nonatomic) UIPageControl *pageControl;
@property (nonatomic) NSLayoutConstraint *portraitConstraint1;
@property (nonatomic) long long selectedFlight;
@property (nonatomic) long long selectedLeg;
@property (nonatomic) bool showInfoPanel;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)absoluteLegIndex;
- (void)addTrack:(id)arg1;
- (id)allLegs;
- (id)arrivalCamera;
- (void)awakeFromNib;
- (id)backBlurView;
- (id)borderLineViewLandscape;
- (id)borderLineViewPortrait;
- (id)bottomMapConstraint;
- (void)changeCurrentPage:(id)arg1;
- (void)cleanupView;
- (id)currentFlight;
- (long long)currentFocus;
- (id)currentLeg;
- (id)delegate;
- (id)departureCamera;
- (unsigned long long)displayStyle;
- (id)errorView;
- (void)fitMap:(bool)arg1;
- (id)flightCamera;
- (id)flightForLeg:(id)arg1;
- (void)flightInfoView:(id)arg1 didUpdateFocus:(long long)arg2;
- (id)flights;
- (bool)hasFollowupContent:(id)arg1;
- (bool)highlightCurrentFlightLeg;
- (bool)ignoreMapUpdate;
- (id)infoViewControllerCreate;
- (bool)landscapeMode;
- (bool)landscapeModeForTraits:(id)arg1;
- (id)lanscapeConstraint1;
- (id)lanscapeConstraint2;
- (id)lanscapeConstraint3;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)leadingMapConstraint;
- (id)loadingView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })mapInsets;
- (id)mapView;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (id)pageContainerHeightConstraint;
- (id)pageControl;
- (void)pageViewController:(id)arg1 didFinishAnimating:(bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)portraitConstraint1;
- (bool)preservesSuperviewLayoutMargins;
- (void)removeMapBackground;
- (long long)selectedFlight;
- (long long)selectedLeg;
- (void)setAbsoluteIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)setBackBlurView:(id)arg1;
- (void)setBorderLineViewLandscape:(id)arg1;
- (void)setBorderLineViewPortrait:(id)arg1;
- (void)setBottomMapConstraint:(id)arg1;
- (void)setCurrentFocus:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (void)setErrorView:(id)arg1;
- (void)setFlights:(id)arg1;
- (bool)setFlights:(id)arg1 selectedFlight:(long long)arg2 selectedLeg:(long long)arg3;
- (void)setHighlightCurrentFlightLeg:(bool)arg1;
- (void)setIgnoreMapUpdate:(bool)arg1;
- (void)setLanscapeConstraint1:(id)arg1;
- (void)setLanscapeConstraint2:(id)arg1;
- (void)setLanscapeConstraint3:(id)arg1;
- (void)setLeadingMapConstraint:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setMapInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMapView:(id)arg1;
- (void)setPageContainerHeightConstraint:(id)arg1;
- (void)setPageControl:(id)arg1;
- (void)setPortraitConstraint1:(id)arg1;
- (void)setSelectedFlight:(long long)arg1;
- (void)setSelectedLeg:(long long)arg1;
- (void)setShowInfoPanel:(bool)arg1;
- (void)setupStyles;
- (void)showError;
- (void)showInfo;
- (bool)showInfoPanel;
- (void)showLoading;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBorderLines;
- (void)updateConstraints;
- (void)updateMapArcs;
- (void)updateMapCamera;
- (void)updateOrienationConstraints;
- (void)updatePageControllerScrolling;

@end
