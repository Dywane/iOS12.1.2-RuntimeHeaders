/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STSetupAssistantViewController : BFFSplashController {
    <STSetupAssistantViewControllerDelegate> * _delegate;
    bool  _hasRestrictionsPasscode;
    long long  _state;
}

@property <STSetupAssistantViewControllerDelegate> *delegate;
@property bool hasRestrictionsPasscode;
@property long long state;

- (void).cxx_destruct;
- (id)delegate;
- (bool)hasRestrictions;
- (bool)hasRestrictionsPasscode;
- (id)init;
- (id)initWithScreenTimeState:(long long)arg1 passcode:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHasRestrictionsPasscode:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (void)viewDidLoad;

@end
