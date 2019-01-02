/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAuthorizationEntity : HDHealthEntity

+ (void)_addAuthorizationWithRow:(struct HDSQLiteRow { }*)arg1 toCodableCollection:(id)arg2;
+ (id)_allSourcesRequestingTypes:(id)arg1 additionalPredicate:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)_insertAuthorizationWithSourceIdentifier:(long long)arg1 dataTypeCode:(long long)arg2 authorizationStatus:(long long)arg3 authorizationRequest:(long long)arg4 authorizationMode:(long long)arg5 modificationDate:(id)arg6 currentDate:(id)arg7 syncProvenance:(long long)arg8 objectAnchor:(long long)arg9 modificationEpoch:(id)arg10 options:(unsigned long long)arg11 database:(id)arg12 error:(id*)arg13;
+ (bool)_insertCodableAuthorizations:(id)arg1 sourceEntity:(id)arg2 syncProvenance:(long long)arg3 objectAnchor:(long long)arg4 currentDate:(id)arg5 options:(unsigned long long)arg6 database:(id)arg7 error:(id*)arg8;
+ (bool)_insertCodableSourceAuthorizations:(id)arg1 overwriteExisting:(bool)arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)_maxObjectPersistentIDForProfile:(id)arg1 error:(id*)arg2;
+ (id)_predicateForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)_predicateForSourceEntities:(id)arg1;
+ (id)_predicateForSourceEntities:(id)arg1 types:(id)arg2;
+ (id)_predicateForType:(id)arg1;
+ (id)_predicateForTypes:(id)arg1;
+ (id)_propertiesForCodableAuthorization;
+ (bool)_resetAuthorizationStatusesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)_setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 dateModified:(id)arg5 syncProvenance:(long long)arg6 objectAnchor:(long long)arg7 options:(unsigned long long)arg8 profile:(id)arg9 database:(id)arg10 error:(id*)arg11;
+ (id)_sourceEntityForCodableSourceAuthorization:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 database:(id)arg4 error:(id*)arg5;
+ (id)allSourcesRequestingTypes:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsBySourceForType:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (id)authorizationRecordsByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)authorizationStatusesForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (const struct { id x1; unsigned char x2; }*)columnDefinitionsWithCount:(unsigned long long*)arg1;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)modificationDateForSourceEntity:(id)arg1 type:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (id)readAuthorizationStatusesByTypeForBundleIdentifier:(id)arg1 types:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (bool)resetAllAuthorizationStatusesWithProfile:(id)arg1 error:(id*)arg2;
+ (bool)resetAuthorizationStatusesForBundleIdentifier:(id)arg1 profile:(id)arg2 error:(id*)arg3;
+ (bool)setAuthorizationStatuses:(id)arg1 authorizationRequests:(id)arg2 authorizationModes:(id)arg3 sourceEntity:(id)arg4 options:(unsigned long long)arg5 profile:(id)arg6 error:(id*)arg7;
+ (bool)setAuthorizationStatuses:(id)arg1 sourceEntity:(id)arg2 profile:(id)arg3 error:(id*)arg4;
+ (id)uniquedColumns;

@end
