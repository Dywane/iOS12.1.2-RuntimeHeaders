/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLocalPlayerAuthenticator : NSObject <RemoteUIControllerDelegate> {
    NSString * _alertMessage;
    NSString * _alertTitle;
    bool  _authenticated;
    bool  _authenticating;
    bool  _forceAuthentication;
    GKLocalPlayer * _inputLocalPlayer;
    NSDate * _lastAuthDate;
    NSString * _lastAuthPlayerID;
    NSString * _password;
    UIViewController * _presentingViewController;
    RemoteUIController * _remoteU13Controller;
    GKLocalPlayer * _resultantLocalPlayer;
    GKDispatchGroup * _u13Group;
    UINavigationController * _u13NavigationController;
    NSMutableArray * _u13ObjectModels;
    bool  _userShouldSkipCreateAppleID;
    NSString * _username;
}

@property (retain) NSString *alertMessage;
@property (retain) NSString *alertTitle;
@property (getter=isAuthenticated) bool authenticated;
@property (getter=isAuthenticating) bool authenticating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool forceAuthentication;
@property (readonly) unsigned long long hash;
@property (retain) GKLocalPlayer *inputLocalPlayer;
@property (retain) NSDate *lastAuthDate;
@property (retain) NSString *lastAuthPlayerID;
@property (copy) NSString *password;
@property UIViewController *presentingViewController;
@property (nonatomic, retain) RemoteUIController *remoteU13Controller;
@property (retain) GKLocalPlayer *resultantLocalPlayer;
@property (readonly) Class superclass;
@property (nonatomic, retain) GKDispatchGroup *u13Group;
@property (nonatomic, retain) UINavigationController *u13NavigationController;
@property (nonatomic, retain) NSMutableArray *u13ObjectModels;
@property (nonatomic) bool userShouldSkipCreateAppleID;
@property (copy) NSString *username;

+ (id)authenticatorForExistingPlayer:(id)arg1;
+ (id)authenticatorForExistingPlayer:(id)arg1 withPresentingViewController:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2;
+ (id)authenticatorForPlayerWithUsername:(id)arg1 password:(id)arg2 withPresentingViewController:(id)arg3;
+ (void)postURL:(id)arg1 postBody:(id)arg2 completion:(id /* block */)arg3;

- (void)_authenticateUsingAuthUI:(bool)arg1 authenticationResults:(id)arg2 usernameEditable:(bool)arg3 authUIDismissHandler:(id /* block */)arg4 completionHandler:(id /* block */)arg5;
- (void)_handleAuthResponse:(id)arg1 error:(id)arg2 handler:(id /* block */)arg3;
- (id)alertMessage;
- (id)alertTitle;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)authenticateExistingUserAuthUIWithCompletionHandler:(id /* block */)arg1;
- (void)authenticateFromExternalServiceWithAuthenticationResults:(id)arg1 withHandler:(id /* block */)arg2;
- (void)authenticateUsingAuthUIAllowingAppleIDCreation:(bool)arg1 usernameEditable:(bool)arg2 dismissHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)authenticateUsingAuthUIWithAuthUIDismissHandler:(id /* block */)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateUsingAuthUIWithCompletionHandler:(id /* block */)arg1;
- (void)authenticateWithAuthKitResults:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)authenticateWithCompletionHandler:(id /* block */)arg1;
- (void)authenticationDidComplete;
- (void)cancelAuthDueToAuthKitErrorWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (bool)forceAuthentication;
- (void)handleAuthKitResultsForUnder13WithContinuationData:(id)arg1 altDSID:(id)arg2 password:(id)arg3;
- (id)init;
- (id)inputLocalPlayer;
- (bool)isAuthenticated;
- (bool)isAuthenticating;
- (id)lastAuthDate;
- (id)lastAuthPlayerID;
- (id)password;
- (id)presentingViewController;
- (id)remoteU13Controller;
- (void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIControllerDidDismiss:(id)arg1;
- (void)reset;
- (id)resultantLocalPlayer;
- (void)setAlertMessage:(id)arg1;
- (void)setAlertTitle:(id)arg1;
- (void)setAuthenticated:(bool)arg1;
- (void)setAuthenticating:(bool)arg1;
- (void)setForceAuthentication:(bool)arg1;
- (void)setInputLocalPlayer:(id)arg1;
- (void)setLastAuthDate:(id)arg1;
- (void)setLastAuthPlayerID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRemoteU13Controller:(id)arg1;
- (void)setResultantLocalPlayer:(id)arg1;
- (void)setU13Group:(id)arg1;
- (void)setU13NavigationController:(id)arg1;
- (void)setU13ObjectModels:(id)arg1;
- (void)setUserShouldSkipCreateAppleID:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldAuthenticateForGameCenter;
- (id)u13Group;
- (id)u13NavigationController;
- (id)u13ObjectModels;
- (bool)userShouldSkipCreateAppleID;
- (id)username;

@end
