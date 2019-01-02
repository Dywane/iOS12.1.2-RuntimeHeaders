/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICCloudSyncingObject : NSManagedObject <ICCloudObject, ICLoggable> {
    NSMutableDictionary * _decryptedValues;
    bool  _needsToLoadDecryptedValues;
    CKRecord * _serverRecord;
    CKShare * _serverShare;
    CKRecord * _userSpecificServerRecord;
    bool  mergingUnappliedEncryptedRecord;
}

@property (nonatomic, retain) ICCloudState *cloudState;
@property (nonatomic, retain) NSData *cryptoInitializationVector;
@property (nonatomic) long long cryptoIterationCount;
@property (nonatomic, retain) NSData *cryptoSalt;
@property (nonatomic, retain) NSData *cryptoTag;
@property (nonatomic, retain) NSData *cryptoWrappedKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *decryptedValues;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *encryptedValuesJSON;
@property long long failedToSyncCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isPasswordProtected;
@property (nonatomic, readonly) bool isUnsupported;
@property (nonatomic) bool markedForDeletion;
@property (getter=isMergingUnappliedEncryptedRecord, nonatomic) bool mergingUnappliedEncryptedRecord;
@property (nonatomic) long long minimumSupportedNotesVersion;
@property (nonatomic) bool needsInitialFetchFromCloud;
@property (nonatomic) bool needsToBeFetchedFromCloud;
@property (nonatomic) bool needsToLoadDecryptedValues;
@property (nonatomic) bool needsToSaveUserSpecificRecord;
@property long long numberOfPushAttemptsToWaitCount;
@property (nonatomic, retain) NSString *passwordHint;
@property (nonatomic, retain) NSString *primitiveZoneOwnerName;
@property (nonatomic, retain) CKRecord *serverRecord;
@property (nonatomic, retain) NSData *serverRecordData;
@property (nonatomic, retain) CKShare *serverShare;
@property (nonatomic, retain) NSData *serverShareData;
@property (nonatomic, readonly) bool shouldBeIgnoredForSync;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *unappliedEncryptedRecord;
@property (nonatomic, retain) CKRecord *userSpecificServerRecord;
@property (nonatomic, retain) NSData *userSpecificServerRecordData;
@property (nonatomic, retain) NSString *zoneOwnerName;

+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)assetForData:(id)arg1;
+ (id)cloudObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)currentNotesVersion;
+ (void)deleteAllTemporaryAssetFilesForAllObjects;
+ (void)deleteTemporaryAssetFilesForOperation:(id)arg1;
+ (void)deleteTemporaryFilesForAsset:(id)arg1;
+ (id)deletedByThisDeviceOperationQueue;
+ (id)deletedByThisDeviceSet;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)failedToSyncCountsByIdentifier;
+ (id)failureCountQueue;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (id)keyPathsForValuesAffectingIsSharedReadOnly;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingNeedsToBeDeletedFromCloud;
+ (id)keyPathsForValuesAffectingNeedsToBePushedToCloud;
+ (id)keyPathsForValuesAffectingServerShareCheckingParent;
+ (id)keyPathsForValuesAffectingZoneOwnerName;
+ (bool)needsToReFetchServerRecordValue:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newPlaceholderObjectForRecordID:(id)arg1 context:(id)arg2;
+ (id)numberOfPushAttemptsToWaitByIdentifier;
+ (id)objectWithRecordID:(id)arg1 context:(id)arg2;
+ (id)recordSystemFieldsTransformer;
+ (void)resetAllDeletedByThisDeviceProperties;
+ (id)shareSystemFieldsTransformer;
+ (bool)supportsUserSpecificRecords;
+ (id)temporaryAssetDirectoryURL;
+ (id)temporaryAssets;
+ (id)versionsByOperationQueue;
+ (id)versionsByRecordIDByOperation;

- (void).cxx_destruct;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (bool)canBeRootShareObject;
- (bool)canBeSharedViaICloud;
- (id)childCloudObjects;
- (void)clearChangeCount;
- (void)clearServerRecord;
- (id)cloudAccount;
- (id)cryptoMasterKey;
- (id)cryptoPassphraseVerifier;
- (long long)databaseScope;
- (void)decrementFailureCounts;
- (void)decryptAndMergeEncryptedJSON:(id)arg1;
- (id)decryptedValueForKey:(id)arg1;
- (id)decryptedValues;
- (void)deleteChangeTokensAndReSync;
- (void)deleteFromLocalDatabase;
- (bool)deletedByThisDevice;
- (void)didAcceptShare:(id)arg1;
- (void)didDeleteUserSpecificRecordID:(id)arg1;
- (void)didFailToSaveUserSpecificRecord:(id)arg1 error:(id)arg2;
- (void)didFetchUserSpecificRecord:(id)arg1;
- (void)didSaveUserSpecificRecord:(id)arg1;
- (void)didTurnIntoFault;
- (long long)failedToSyncCount;
- (void)fixBrokenReferences;
- (bool)hasAllMandatoryFields;
- (bool)hasSuccessfullyPushedLatestVersionToCloud;
- (id)ic_loggingIdentifier;
- (id)ic_loggingValues;
- (void)incrementFailureCounts;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
- (void)initializeCryptoProperties;
- (void)initializeCryptoPropertiesFromObject:(id)arg1;
- (bool)isDeletable;
- (bool)isEncryptableKeyBinaryData:(id)arg1;
- (bool)isInCloud;
- (bool)isInICloudAccount;
- (bool)isMergingUnappliedEncryptedRecord;
- (bool)isOwnedByCurrentUser;
- (long long)isPushingSameOrLaterThanVersion:(long long)arg1;
- (bool)isSharedReadOnly;
- (bool)isSharedRootObject;
- (bool)isSharedViaICloud;
- (bool)isSupportedByCurrentNotes;
- (bool)isUnsupported;
- (bool)isValidObject;
- (void)loadDecryptedValuesIfNecessary;
- (id)loggingDescription;
- (void)markForDeletion;
- (void)mergeCryptoTagAndInitializationVectorFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1;
- (void)mergeDataFromUserSpecificRecord:(id)arg1;
- (id)mergeDecryptedValue:(id)arg1 withOldValue:(id)arg2 forKey:(id)arg3;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeUnappliedEncryptedRecord;
- (bool)needsToBeDeletedFromCloud;
- (bool)needsToBePushedToCloud;
- (bool)needsToDeleteShare;
- (bool)needsToFetchAfterServerRecordChanged:(id)arg1;
- (bool)needsToLoadDecryptedValues;
- (id)newlyCreatedRecord;
- (id)newlyCreatedUserSpecificRecord;
- (long long)numberOfPushAttemptsToWaitCount;
- (void)objectFailedToBePushedToCloudWithOperation:(id)arg1 record:(id)arg2 error:(id)arg3;
- (void)objectWasDeletedFromCloud;
- (void)objectWasDeletedFromCloudByAnotherDevice;
- (void)objectWasFetchedButDoesNotExistInCloud;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (void)objectWasPushedToCloudWithOperation:(id)arg1 serverRecord:(id)arg2;
- (void)objectWillBePushedToCloudWithOperation:(id)arg1;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)parentCloudObject;
- (id)parentEncryptableObject;
- (id)primitiveValueForEncryptableKey:(id)arg1;
- (id)recordID;
- (id)recordName;
- (id)recordType;
- (id)recordZoneName;
- (void)requireMinimumVersionIncludingChildObjects:(long long)arg1;
- (void)resetFailureCounts;
- (void)resetUniqueIdentifier;
- (void)saveAndClearDecryptedData;
- (void)saveAndClearDecryptedDataIfNecessary;
- (void)saveEncryptedJSON;
- (id)serverRecord;
- (id)serverShare;
- (id)serverShareCheckingParent;
- (void)setCryptoInitializationVector:(id)arg1;
- (void)setCryptoMasterKey:(id)arg1;
- (void)setCryptoTag:(id)arg1;
- (void)setDecryptedValue:(id)arg1 forKey:(id)arg2;
- (void)setDeletedByThisDevice:(bool)arg1;
- (void)setFailedToSyncCount:(long long)arg1;
- (void)setInCloud:(bool)arg1;
- (void)setMarkedForDeletion:(bool)arg1;
- (void)setMergingUnappliedEncryptedRecord:(bool)arg1;
- (void)setNeedsToBeFetchedFromCloud:(bool)arg1;
- (void)setNeedsToLoadDecryptedValues:(bool)arg1;
- (void)setNumberOfPushAttemptsToWaitCount:(long long)arg1;
- (void)setPrimitiveValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setServerRecord:(id)arg1;
- (void)setServerShare:(id)arg1;
- (void)setServerShareIfNewer:(id)arg1;
- (void)setUserSpecificServerRecord:(id)arg1;
- (void)setValue:(id)arg1 forEncryptableKey:(id)arg2;
- (void)setVersion:(long long)arg1 forOperation:(id)arg2;
- (id)shareTitle;
- (id)shareType;
- (id)shortLoggingDescription;
- (bool)shouldBeDeletedFromLocalDatabase;
- (bool)shouldBeIgnoredForSync;
- (bool)shouldFallBackToCheckAllCryptoKeys;
- (bool)supportsDeletionByTTL;
- (bool)supportsEncryptedValuesDictionary;
- (void)unmarkForDeletion;
- (void)updateChangeCount;
- (void)updateChangeCountsForUnsavedParentReferences;
- (void)updateParentReferenceIfNecessary;
- (id)userSpecificRecordID;
- (id)userSpecificRecordType;
- (id)userSpecificServerRecord;
- (bool)validateIdentifier:(inout id*)arg1 error:(out id*)arg2;
- (id)valueForEncryptableKey:(id)arg1;
- (long long)versionForOperation:(id)arg1;
- (bool)wantsUserSpecificRecord;
- (id)zoneOwnerName;

@end
