/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NENexus : NSObject <NENexusAgentDelegate> {
    NENexusAgent * _agent;
    bool  _asserted;
    NSMutableDictionary * _assertions;
    unsigned long long  _availability;
    NSObject<NENexusDelegate> * _delegate;
    NSArray * _dnsServerAddresses;
    NENexusFlowManager * _flowManager;
    NSMutableDictionary * _kernelNexusClientFlows;
    unsigned long long  _level;
    NSArray * _localAddresses;
    unsigned long long  _maximumTransmissionUnit;
    NSString * _name;
    NEPolicySession * _policySession;
    NSObject<OS_nw_nexus> * _userNexus;
    NSMutableDictionary * _userNexusClientCount;
    NSMutableDictionary * _userNexusClientFlows;
    NSMutableDictionary * _userNexusInstances;
    struct NEVirtualInterface_s { } * _virtualInterface;
}

@property (retain) NENexusAgent *agent;
@property (getter=isAsserted) bool asserted;
@property (retain) NSMutableDictionary *assertions;
@property (nonatomic) unsigned long long availability;
@property (readonly, copy) NSString *debugDescription;
@property NSObject<NENexusDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dnsServerAddresses;
@property (retain) NENexusFlowManager *flowManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *interfaceName;
@property (retain) NSMutableDictionary *kernelNexusClientFlows;
@property (readonly) unsigned long long level;
@property (nonatomic, retain) NSArray *localAddresses;
@property (nonatomic) unsigned long long maximumTransmissionUnit;
@property (readonly) NSString *name;
@property (retain) NEPolicySession *policySession;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_nw_nexus> *userNexus;
@property (retain) NSMutableDictionary *userNexusClientCount;
@property (retain) NSMutableDictionary *userNexusClientFlows;
@property (retain) NSMutableDictionary *userNexusInstances;
@property struct NEVirtualInterface_s { }*virtualInterface;

- (void).cxx_destruct;
- (id)agent;
- (id)assertions;
- (unsigned long long)availability;
- (void)cancel;
- (void)closeFlowWithClientIdentifier:(id)arg1;
- (void)connectNewFlow:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFlow:(id)arg1;
- (id)dnsServerAddresses;
- (id)flowManager;
- (void)handleAssertFromClient:(id)arg1;
- (bool)handleRequestNexusFromClient:(id)arg1;
- (void)handleStartFromClient:(id)arg1;
- (void)handleUnassertFromClient:(id)arg1;
- (id)initWithLevel:(unsigned long long)arg1 name:(id)arg2 virtualInterfaceType:(long long)arg3 delegate:(id)arg4;
- (id)initWithName:(id)arg1 delegate:(id)arg2;
- (id)interfaceName;
- (bool)isAsserted;
- (id)kernelNexusClientFlows;
- (unsigned long long)level;
- (id)localAddresses;
- (unsigned long long)maximumTransmissionUnit;
- (id)name;
- (id)policySession;
- (void)rejectFlowWithClientIdentifier:(id)arg1;
- (void)setAgent:(id)arg1;
- (void)setAsserted:(bool)arg1;
- (void)setAssertions:(id)arg1;
- (void)setAvailability:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDnsServerAddresses:(id)arg1;
- (void)setFlowManager:(id)arg1;
- (void)setKernelNexusClientFlows:(id)arg1;
- (void)setLocalAddresses:(id)arg1;
- (void)setMaximumTransmissionUnit:(unsigned long long)arg1;
- (void)setPolicySession:(id)arg1;
- (void)setUserNexus:(id)arg1;
- (void)setUserNexusClientCount:(id)arg1;
- (void)setUserNexusClientFlows:(id)arg1;
- (void)setUserNexusInstances:(id)arg1;
- (void)setVirtualInterface:(struct NEVirtualInterface_s { }*)arg1;
- (bool)setupFlowManager;
- (bool)setupPolicySession;
- (id)userNexus;
- (id)userNexusClientCount;
- (id)userNexusClientFlows;
- (id)userNexusInstances;
- (struct NEVirtualInterface_s { }*)virtualInterface;

@end
