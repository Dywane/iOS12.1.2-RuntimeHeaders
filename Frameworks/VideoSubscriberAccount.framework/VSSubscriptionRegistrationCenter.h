/* Generated by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSubscriptionRegistrationCenter : NSObject <VSRemoteNotifierDelegate, VSSubscriptionServiceProtocol> {
    VSSubscriptionServiceConnection * _connection;
    VSSecurityTask * _currentTask;
    VSDelayOperation * _expirationOperation;
    VSSubscriptionFetchOptionsValidator * _fetchOptionsValidator;
    VSLinkedOnOrAfterChecker * _linkedOnOrAfterChecker;
    VSSubscriptionPredicateFactory * _predicateFactory;
    NSOperationQueue * _privateQueue;
    VSRemoteNotifier * _remoteNotifier;
    NSMutableDictionary * _subscriptionsByOptions;
}

@property (nonatomic, retain) VSSubscriptionServiceConnection *connection;
@property (nonatomic, retain) VSSecurityTask *currentTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VSDelayOperation *expirationOperation;
@property (retain) VSSubscriptionFetchOptionsValidator *fetchOptionsValidator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VSLinkedOnOrAfterChecker *linkedOnOrAfterChecker;
@property (retain) VSSubscriptionPredicateFactory *predicateFactory;
@property (nonatomic, retain) NSOperationQueue *privateQueue;
@property (nonatomic, retain) VSRemoteNotifier *remoteNotifier;
@property (nonatomic, retain) NSMutableDictionary *subscriptionsByOptions;
@property (readonly) Class superclass;

+ (id)defaultSubscriptionRegistrationCenter;

- (void).cxx_destruct;
- (void)_refreshCachedSubscriptions;
- (void)_resetExpirationOperation;
- (void)_sendLocalNotificationWithUserInfo:(id)arg1;
- (id)_serviceWithErrorHandler:(id /* block */)arg1;
- (bool)_shouldAllowAccessToSubscription:(id)arg1;
- (bool)_shouldRaiseExceptionsForMisuse;
- (id)connection;
- (id)currentTask;
- (void)dealloc;
- (id)expirationOperation;
- (void)fetchActiveSubscriptionsWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)fetchOptionsValidator;
- (id)init;
- (id)linkedOnOrAfterChecker;
- (id)predicateFactory;
- (id)privateQueue;
- (void)registerSubscription:(id)arg1;
- (id)remoteNotifier;
- (void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2;
- (void)removeSubscriptions:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setCurrentSubscription:(id)arg1;
- (void)setCurrentTask:(id)arg1;
- (void)setExpirationOperation:(id)arg1;
- (void)setFetchOptionsValidator:(id)arg1;
- (void)setLinkedOnOrAfterChecker:(id)arg1;
- (void)setPredicateFactory:(id)arg1;
- (void)setPrivateQueue:(id)arg1;
- (void)setRemoteNotifier:(id)arg1;
- (void)setSubscriptionsByOptions:(id)arg1;
- (id)subscriptionsByOptions;

@end
