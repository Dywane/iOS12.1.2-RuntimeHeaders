/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMActivation : RMUniquedManagedObject

@property (nonatomic, copy) NSData *activationPlist;
@property (nonatomic, retain) NSSet *appliedToUsers;
@property (nonatomic, retain) NSSet *configurations;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) RMOrganization *organization;
@property (nonatomic, copy) NSString *organizationIdentifier;

+ (id)fetchRequestForActivationsAppliedToUserDSID:(id)arg1 organizationIdentifier:(id)arg2;
+ (id)fetchRequestForActivationsBelongingToOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForActivationsWithIdentifier:(id)arg1 organizationIdentifier:(id)arg2;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;
- (void)setOrganization:(id)arg1;

@end
