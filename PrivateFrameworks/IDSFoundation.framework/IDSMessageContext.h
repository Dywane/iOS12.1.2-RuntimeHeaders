/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMessageContext : NSObject {
    id  _boostContext;
    NSMutableDictionary * _dict;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly) double averageLocalRTT;
@property (nonatomic, retain) id boostContext;
@property (nonatomic) long long broadcastID;
@property (nonatomic, retain) NSNumber *broadcastTime;
@property (nonatomic) long long connectionType;
@property (nonatomic, readonly) bool deviceBlackedOut;
@property (nonatomic, copy) NSData *engramGroupID;
@property (nonatomic) bool expectsPeerResponse;
@property (nonatomic, copy) NSString *fromID;
@property (nonatomic) bool fromServerStorage;
@property (nonatomic, copy) NSString *incomingResponseIdentifier;
@property (nonatomic, readonly) long long localMessageState;
@property (nonatomic, copy) NSNumber *originalCommand;
@property (nonatomic, copy) NSString *originalDestinationDevice;
@property (nonatomic, copy) NSString *outgoingResponseIdentifier;
@property (nonatomic, retain) NSNumber *priority;
@property (nonatomic, copy) NSString *senderCorrelationIdentifier;
@property (nonatomic, readonly) NSDate *serverReceivedTime;
@property (nonatomic, copy) NSNumber *serverTimestamp;
@property (nonatomic, copy) NSString *serviceIdentifier;
@property (nonatomic, copy) NSString *storageGuid;
@property (nonatomic, copy) NSString *toID;
@property (nonatomic) bool usedEngram;
@property (nonatomic) bool wantsAppAck;
@property (nonatomic) bool wantsManualAck;
@property (nonatomic, readonly) NSError *wpConnectionError;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

- (void).cxx_destruct;
- (double)averageLocalRTT;
- (id)boostContext;
- (long long)broadcastID;
- (id)broadcastTime;
- (long long)connectionType;
- (void)dealloc;
- (bool)deviceBlackedOut;
- (id)engramGroupID;
- (bool)expectsPeerResponse;
- (id)fromID;
- (bool)fromServerStorage;
- (id)incomingResponseIdentifier;
- (id)initWithDictionary:(id)arg1 boostContext:(id)arg2;
- (long long)localMessageState;
- (id)objectForKey:(id)arg1;
- (id)originalCommand;
- (id)originalDestinationDevice;
- (id)outgoingResponseIdentifier;
- (id)priority;
- (id)senderCorrelationIdentifier;
- (id)serverReceivedTime;
- (id)serverTimestamp;
- (id)serviceIdentifier;
- (void)setBoostContext:(id)arg1;
- (void)setBroadcastID:(long long)arg1;
- (void)setBroadcastTime:(id)arg1;
- (void)setConnectionType:(long long)arg1;
- (void)setEngramGroupID:(id)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setFromID:(id)arg1;
- (void)setFromServerStorage:(bool)arg1;
- (void)setIncomingResponseIdentifier:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOriginalCommand:(id)arg1;
- (void)setOriginalDestinationDevice:(id)arg1;
- (void)setOutgoingResponseIdentifier:(id)arg1;
- (void)setPriority:(id)arg1;
- (void)setSenderCorrelationIdentifier:(id)arg1;
- (void)setServerTimestamp:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setStorageGuid:(id)arg1;
- (void)setToID:(id)arg1;
- (void)setUsedEngram:(bool)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setWantsManualAck:(bool)arg1;
- (id)storageGuid;
- (id)toID;
- (bool)usedEngram;
- (bool)wantsAppAck;
- (bool)wantsManualAck;
- (id)wpConnectionError;

// Image: /System/Library/PrivateFrameworks/NanoLeash.framework/NanoLeash

- (id)nfmDescription;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npkDescription;

// Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport

- (id)pbDescription;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pkDescription;

@end
