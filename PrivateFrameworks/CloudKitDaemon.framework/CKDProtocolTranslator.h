/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDProtocolTranslator : NSObject {
    NSString * _bundleIdentifier;
    NSString * _containerScopedUserID;
    long long  _databaseScope;
    bool  _dontCreateValidatingParentReferences;
    NSMutableDictionary * _downloadPreauthorizationMap;
    <CKDProtocolTranslatorIdentityDelegate> * _identityDelegate;
    NSString * _orgAdminUserID;
    NSString * _overriddenContainerScopedUserID;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *containerScopedUserID;
@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic) bool dontCreateValidatingParentReferences;
@property (nonatomic, retain) NSMutableDictionary *downloadPreauthorizationMap;
@property (nonatomic) <CKDProtocolTranslatorIdentityDelegate> *identityDelegate;
@property (nonatomic, copy) NSString *orgAdminUserID;
@property (nonatomic, copy) NSString *overriddenContainerScopedUserID;
@property (nonatomic, readonly) CKDPIdentifier *pUserID;

+ (id)translatorIgnoringUserIDsWithDatabaseScope:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 bundleIdentifier:(id)arg3 databaseScope:(long long)arg4;
- (bool)_isDefaultUserNameFromClient:(id)arg1;
- (bool)_isDefaultUserNameFromServer:(id)arg1;
- (id)_pRecordFromRecordSansValues:(id)arg1 forCache:(bool)arg2;
- (bool)_valueTypeIsAnEncryptedBytesTypeForField:(id)arg1;
- (id)ancestorFromPAncestor:(id)arg1 error:(id*)arg2;
- (id)assetFromPAsset:(id)arg1 error:(id*)arg2;
- (id)bundleIdentifier;
- (unsigned long long)capabilitiesFromPZoneCapabilities:(id)arg1;
- (void)consumeResponseHeader:(id)arg1;
- (id)containerPrivacySettingsFromPContainerPrivacySettings:(id)arg1;
- (id)containerScopedUserID;
- (long long)databaseScope;
- (id)deltaPRecordFromRecord:(id)arg1 withAllFields:(bool)arg2 outDeletedMergeFields:(id*)arg3 outKeysToSend:(id*)arg4;
- (bool)dontCreateValidatingParentReferences;
- (id)downloadPreauthorizationMap;
- (id)encryptedFieldValueOfType:(int)arg1 withObject:(id)arg2;
- (id)encryptedObjectRepresentationFromFieldValue:(id)arg1;
- (id)fieldValueFromObject:(id)arg1;
- (id)fieldValueListOfType:(int)arg1 withList:(id)arg2;
- (id)fieldValueOfType:(int)arg1 withObject:(id)arg2;
- (int)fieldValueTypeFromEncryptedDataObject:(id)arg1 isInList:(bool)arg2;
- (int)fieldValueTypeFromObject:(id)arg1;
- (id)identityDelegate;
- (id)identityFromPUser:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 databaseScope:(long long)arg2;
- (id)initWithContainerScopedUserID:(id)arg1 orgAdminUserID:(id)arg2 bundleIdentifier:(id)arg3 databaseScope:(long long)arg4;
- (id)locationFieldValueWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)notificationFromPPushMessage:(id)arg1;
- (bool)objectIsAnEncryptedType:(id)arg1;
- (id)objectRepresentationFromFieldValue:(id)arg1;
- (id)orgAdminUserID;
- (id)overriddenContainerScopedUserID;
- (id)pAliasWithEmailAddress:(id)arg1;
- (id)pAliasWithHashedStringID:(id)arg1 type:(int)arg2;
- (id)pAliasWithIdentityLookupInfo:(id)arg1;
- (id)pAliasWithPhoneNumber:(id)arg1;
- (id)pAliasWithUserRecordID:(id)arg1;
- (id)pAssetFromAsset:(id)arg1;
- (id)pContainerScopedRecordIdentifierWithPRecordIdentifier:(id)arg1;
- (id)pContainerScopedRecordZoneIdentifierFromFromPRecordZoneIdentifier:(id)arg1;
- (id)pContainerScopedUserIdentifierFromPUserIdentifier:(id)arg1;
- (id)pFieldWithKey:(id)arg1 value:(id)arg2;
- (id)pIdentifierFromUserRecordID:(id)arg1;
- (id)pPackageFromPackage:(id)arg1;
- (id)pParticipantFromShareParticipant:(id)arg1 forCache:(bool)arg2;
- (id)pQueryFromQuery:(id)arg1 error:(id*)arg2;
- (id)pRecordFromRecord:(id)arg1;
- (id)pRecordFromRecord:(id)arg1 forCache:(bool)arg2;
- (id)pRecordIdentifierFromRecordID:(id)arg1;
- (id)pRecordIdentifierFromUserRecordName:(id)arg1;
- (id)pRecordZoneFromRecordZone:(id)arg1;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)arg1;
- (id)pReferenceFromReference:(id)arg1 error:(id*)arg2;
- (id)pShareFromShare:(id)arg1 forCache:(bool)arg2;
- (id)pShareIdentifierFromRecordID:(id)arg1;
- (id)pSubscriptionFromSubscription:(id)arg1 error:(id*)arg2;
- (id)pUserID;
- (id)pUserIdentifierFromUserRecordName:(id)arg1;
- (id)packageFromPPackage:(id)arg1 error:(id*)arg2;
- (id)recordFromPRecord:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPRecordIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPShareIdentifier:(id)arg1 error:(id*)arg2;
- (id)recordIDFromPUserName:(id)arg1 error:(id*)arg2;
- (id)recordZoneFromPRecordZone:(id)arg1 error:(id*)arg2;
- (id)recordZoneIDFromPRecordZoneIdentifier:(id)arg1 error:(id*)arg2;
- (id)referenceFromPReference:(id)arg1 error:(id*)arg2;
- (void)setContainerScopedUserID:(id)arg1;
- (void)setDontCreateValidatingParentReferences:(bool)arg1;
- (void)setDownloadPreauthorizationMap:(id)arg1;
- (void)setIdentityDelegate:(id)arg1;
- (void)setOrgAdminUserID:(id)arg1;
- (void)setOverriddenContainerScopedUserID:(id)arg1;
- (id)shareFromPShare:(id)arg1 error:(id*)arg2;
- (id)shareParticipantFromPParticipant:(id)arg1 error:(id*)arg2;
- (id)subscriptionFromPSubscription:(id)arg1 error:(id*)arg2;
- (id)userNameFromPIdentifier:(id)arg1 error:(id*)arg2;

@end
