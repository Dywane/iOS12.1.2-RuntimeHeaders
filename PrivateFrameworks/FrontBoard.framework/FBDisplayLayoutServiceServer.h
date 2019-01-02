/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBDisplayLayoutServiceServer : FBSServiceFacility {
    NSMutableDictionary * _calloutQueuesByQOS;
    FBServiceClientAuthenticator * _connectionAuthenticator;
    NSMutableDictionary * _defaultQOSClientsByDisplayType;
    <FBDisplayLayoutServiceServerDelegate> * _delegate;
    NSMutableDictionary * _utilityQOSClientsByDisplayType;
}

@property (nonatomic) <FBDisplayLayoutServiceServerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_calloutQueueForQOS:(unsigned long long)arg1;
- (id)_defaultQOSClientsForDisplayType:(long long)arg1;
- (id)_prerequisiteMilestones;
- (void)_sendDisplayLayout:(id)arg1 toClients:(id)arg2 withQualityOfService:(unsigned long long)arg3;
- (id)_utilityQOSClientsForDisplayType:(long long)arg1;
- (id)delegate;
- (id)initWithQueue:(id)arg1;
- (void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2;
- (void)noteClientDidDisconnect:(id)arg1;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)publishDisplayLayout:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAllowClientConnection:(id)arg1 withMessage:(id)arg2;

@end
