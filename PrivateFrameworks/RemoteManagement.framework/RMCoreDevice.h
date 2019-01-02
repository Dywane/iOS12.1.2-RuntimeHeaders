/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCoreDevice : NSManagedObject <RMSyncableSubObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) RMUserDeviceState *localUserDeviceState;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *usages;
@property (nonatomic, retain) NSSet *userDeviceAddresses;
@property (nonatomic, retain) NSSet *userDeviceStates;

+ (id)fetchDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;
+ (id)fetchOrCreateLocalDeviceInContext:(id)arg1 error:(id*)arg2;

- (id)syncableRootObject;

@end
