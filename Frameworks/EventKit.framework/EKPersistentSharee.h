/* Generated by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentSharee : EKPersistentObject

+ (id)defaultPropertiesToLoad;
+ (id)relations;

- (id)UUID;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (int)entityType;
- (id)externalID;
- (id)firstName;
- (id)lastName;
- (id)owner;
- (void)setAddress:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setShareeAccessLevel:(int)arg1;
- (void)setShareeStatus:(int)arg1;
- (void)setUUID:(id)arg1;
- (int)shareeAccessLevel;
- (int)shareeStatus;

@end
