/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NENetworkAgentRegistrationFileHandle : NEFileHandle {
    NSUUID * _agentUUID;
    NSUUID * _configurationIdentifier;
    NSNumber * _sessionType;
}

@property (readonly) NSUUID *agentUUID;
@property (readonly) NSUUID *configurationIdentifier;
@property (readonly) NSNumber *sessionType;

- (void).cxx_destruct;
- (id)agentUUID;
- (id)configurationIdentifier;
- (id)description;
- (id)dictionary;
- (id)initFromDictionary:(id)arg1;
- (id)initWithNetworkAgentRegistration:(id)arg1 sessionType:(id)arg2 configurationIdentifier:(id)arg3 agentUUID:(id)arg4;
- (id)sessionType;
- (unsigned long long)type;

@end
