/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFOnBoardingAssetManager : NSObject

+ (id)appropriateAvailableLanguageForCurrentLanguage;
+ (id)appropriateAvailableLanguageForPreferredLanguages:(id)arg1 regionCode:(id)arg2;
+ (long long)currentAssetDeviceClass;
+ (bool)hasWorldwideAsset:(long long)arg1;
+ (id)sharedManager;
+ (bool)shouldUseWorldwideAssetForLanguage:(id)arg1 feature:(long long)arg2;
+ (bool)shouldUseWorldwideAssetForPreferredLanguages:(id)arg1 language:(id)arg2 feature:(long long)arg3;

- (id)assetFeatureValueForFeature:(long long)arg1;
- (id)assetTypeForCurrentDevice;
- (void)downloadAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)featureKey;
- (id)movieURLForAsset:(id)arg1;
- (id)placeholderImageForFeature:(long long)arg1;
- (id)placeholderImageNameForFeature:(long long)arg1;
- (id)placeholderImageNameForFeature:(long long)arg1 language:(id)arg2;
- (void)purgeAssets:(id)arg1;
- (void)purgeFeatureMoviesExceptLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)purgeFeatureMoviesWithCompletion:(id /* block */)arg1;
- (void)purgeMovieForFeature:(long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveMovieForFeature:(long long)arg1 completion:(id /* block */)arg2;
- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(bool)arg3 completion:(id /* block */)arg4;
- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(bool)arg3 useLocalAssets:(bool)arg4 completion:(id /* block */)arg5;

@end
