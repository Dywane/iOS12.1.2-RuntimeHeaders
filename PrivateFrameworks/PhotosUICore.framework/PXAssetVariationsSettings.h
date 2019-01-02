/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetVariationsSettings : PXSettings {
    bool  _addSimulatedProgressComponent;
    bool  _allowOrbPreview;
    bool  _invalidateCachedPreviews;
    long long  _layoutStyle;
    long long  _selectionBehavior;
    double  _selectionDetailsDismissalDelay;
    bool  _showLoopBadges;
    bool  _showStatusInDisclosureLabel;
    bool  _simulateLoadingFailure;
    bool  _simulateSavingFailure;
    long long  _suggestionsScheme;
    bool  _useLiveRenderedPreviews;
    bool  _useNeutrinoRendering;
}

@property (nonatomic) bool addSimulatedProgressComponent;
@property (nonatomic) bool allowOrbPreview;
@property (nonatomic) bool invalidateCachedPreviews;
@property (nonatomic) long long layoutStyle;
@property (nonatomic) long long selectionBehavior;
@property (nonatomic) double selectionDetailsDismissalDelay;
@property (nonatomic) bool showLoopBadges;
@property (nonatomic) bool showStatusInDisclosureLabel;
@property (nonatomic) bool simulateLoadingFailure;
@property (nonatomic) bool simulateSavingFailure;
@property (nonatomic) long long suggestionsScheme;
@property (nonatomic) bool useLiveRenderedPreviews;
@property (nonatomic) bool useNeutrinoRendering;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)addSimulatedProgressComponent;
- (bool)allowOrbPreview;
- (bool)invalidateCachedPreviews;
- (long long)layoutStyle;
- (id)parentSettings;
- (long long)selectionBehavior;
- (double)selectionDetailsDismissalDelay;
- (void)setAddSimulatedProgressComponent:(bool)arg1;
- (void)setAllowOrbPreview:(bool)arg1;
- (void)setDefaultValues;
- (void)setInvalidateCachedPreviews:(bool)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setSelectionBehavior:(long long)arg1;
- (void)setSelectionDetailsDismissalDelay:(double)arg1;
- (void)setShowLoopBadges:(bool)arg1;
- (void)setShowStatusInDisclosureLabel:(bool)arg1;
- (void)setSimulateLoadingFailure:(bool)arg1;
- (void)setSimulateSavingFailure:(bool)arg1;
- (void)setSuggestionsScheme:(long long)arg1;
- (void)setUseLiveRenderedPreviews:(bool)arg1;
- (void)setUseNeutrinoRendering:(bool)arg1;
- (bool)showLoopBadges;
- (bool)showStatusInDisclosureLabel;
- (bool)simulateLoadingFailure;
- (bool)simulateSavingFailure;
- (long long)suggestionsScheme;
- (bool)useLiveRenderedPreviews;
- (bool)useNeutrinoRendering;

@end
