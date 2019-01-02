/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STIntroSplashViewController : BFFSplashController <STIntroViewController> {
    STIntroductionModel * _model;
    id /* block */  completionBlock;
}

@property (copy) id /* block */ completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) STIntroductionModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)initWithIntroductionModel:(id)arg1;
- (id)model;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setModel:(id)arg1;

@end
