/* Generated by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderHostProtocol, NEExtensionPacketTunnelProviderProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(id /* block */)arg1;
- (void)requestSocket:(bool)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)setVirtualInterfaceSocket:(id)arg1;

@end
