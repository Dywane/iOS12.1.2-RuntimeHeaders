/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    bool  _doNotCompress;
    bool  _forceLocalDelivery;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbRequest;
    NSDictionary * _persistentUserInfo;
    unsigned long long  _priority;
    bool  _queueOnly1;
    double  _responseTimeout;
    double  _sendTimeout;
    IDSDevice * _toDevice;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doNotCompress;
@property (nonatomic) bool forceLocalDelivery;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) HDIDSMessageCenter *messageCenter;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, retain) id pbRequest;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic) bool queueOnly1;
@property (nonatomic) double responseTimeout;
@property (nonatomic) double sendTimeout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) IDSDevice *toDevice;

+ (id)_requestWithMessageID:(unsigned short)arg1 message:(id)arg2 syncStore:(id)arg3;
+ (id)activationRequestWithRestore:(id)arg1 syncStore:(id)arg2;
+ (id)changeRequestWithChangeSet:(id)arg1 status:(id)arg2 syncStore:(id)arg3;
+ (id)requestWithMessageID:(unsigned short)arg1 device:(id)arg2;
+ (id)speculativeChangeRequestWithChangeSet:(id)arg1 syncStore:(id)arg2;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (bool)doNotCompress;
- (bool)forceLocalDelivery;
- (id)idsIdentifier;
- (id)init;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbRequest;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (bool)queueOnly1;
- (double)responseTimeout;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setDoNotCompress:(bool)arg1;
- (void)setForceLocalDelivery:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setQueueOnly1:(bool)arg1;
- (void)setResponseTimeout:(double)arg1;
- (void)setSendTimeout:(double)arg1;
- (id)toDevice;

@end
