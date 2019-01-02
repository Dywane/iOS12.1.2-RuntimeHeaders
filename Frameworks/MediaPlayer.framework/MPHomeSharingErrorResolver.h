/* Generated by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingErrorResolver : MPAVErrorResolver <SSAuthorizationRequestDelegate> {
    unsigned long long  _accountID;
    NSData * _accountTokenData;
    SSAuthorizationRequest * _activeRequest;
    bool  _atLeastOneAuthorizationRequestSuccessful;
    MPHomeSharingML3DataProvider * _dataProvider;
    unsigned long long  _downloaderAccountID;
    NSData * _downloaderAccountTokenData;
    NSError * _error;
    unsigned long long  _familyAccountID;
    NSURL * _keybagURL;
    NSMutableArray * _requests;
}

@property (nonatomic, retain) MPHomeSharingML3DataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_errorIsFairPlayError:(id)arg1;
- (void)_performMachineAuthorization;
- (void)_processNextAuthorizationRequest;
- (void)authorizationRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (id)dataProvider;
- (void)dealloc;
- (id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3;
- (id)initWithKeybagURL:(id)arg1 accountID:(unsigned long long)arg2 accountTokenData:(id)arg3 downloaderAccountID:(unsigned long long)arg4 downloaderAccountTokenData:(id)arg5 familyAccountID:(unsigned long long)arg6;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resolveError:(id)arg1;
- (void)setDataProvider:(id)arg1;

@end
