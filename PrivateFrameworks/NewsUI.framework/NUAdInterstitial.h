/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUAdInterstitial : NSObject <ADInterstitialAdDelegate> {
    id /* block */  _completionBlock;
    ADInterstitialAd * _interstitial;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ADInterstitialAd *interstitial;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)initWithContext:(id)arg1 andCompletionBlock:(id /* block */)arg2;
- (id)interstitial;
- (void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdDidLoad:(id)arg1;
- (void)interstitialAdDidUnload:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInterstitial:(id)arg1;

@end
