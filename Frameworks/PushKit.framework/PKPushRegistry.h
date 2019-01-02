/* Generated by EzioChiu
   Image: /System/Library/Frameworks/PushKit.framework/PushKit
 */

@interface PKPushRegistry : NSObject <PKComplicationXPCClient, PKFileProviderXPCClient, PKVoIPXPCClient> {
    int  _complicationToken;
    <PKPushRegistryDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSSet * _desiredPushTypes;
    int  _fileProviderToken;
    NSObject<OS_dispatch_queue> * _ivarQueue;
    NSMutableDictionary * _pushTypeToConnection;
    NSMutableDictionary * _pushTypeToToken;
    int  _voipToken;
}

@property (nonatomic) int complicationToken;
@property <PKPushRegistryDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (copy) NSSet *desiredPushTypes;
@property (nonatomic) int fileProviderToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *ivarQueue;
@property (nonatomic, retain) NSMutableDictionary *pushTypeToConnection;
@property (nonatomic, retain) NSMutableDictionary *pushTypeToToken;
@property (nonatomic) int voipToken;

+ (id)_pushTypeToMachServiceName;

- (void).cxx_destruct;
- (id)_createConnectionForPushType:(id)arg1;
- (void)_registerForPushType:(id)arg1;
- (void)_renewConnectionForPushTypeIfRegistered:(id)arg1;
- (void)_unregisterForPushType:(id)arg1;
- (void)complicationPayloadReceived:(id)arg1;
- (void)complicationRegistrationFailed;
- (void)complicationRegistrationSucceededWithDeviceToken:(id)arg1;
- (int)complicationToken;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)desiredPushTypes;
- (void)fileProviderPayloadReceived:(id)arg1;
- (void)fileProviderRegistrationFailed;
- (void)fileProviderRegistrationSucceededWithDeviceToken:(id)arg1;
- (int)fileProviderToken;
- (id)initWithQueue:(id)arg1;
- (id)ivarQueue;
- (id)pushTokenForType:(id)arg1;
- (id)pushTypeToConnection;
- (id)pushTypeToToken;
- (void)setComplicationToken:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)setDesiredPushTypes:(id)arg1;
- (void)setFileProviderToken:(int)arg1;
- (void)setIvarQueue:(id)arg1;
- (void)setPushTypeToConnection:(id)arg1;
- (void)setPushTypeToToken:(id)arg1;
- (void)setVoipToken:(int)arg1;
- (void)voipPayloadReceived:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)voipRegistrationFailed;
- (void)voipRegistrationSucceededWithDeviceToken:(id)arg1;
- (int)voipToken;

@end
