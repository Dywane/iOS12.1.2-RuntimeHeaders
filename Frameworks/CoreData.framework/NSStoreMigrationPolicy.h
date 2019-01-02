/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMigrationPolicy : NSObject {
    NSPersistentStoreCoordinator * _coordinator;
    NSString * _destinationConfiguration;
    NSDictionary * _destinationOptions;
    NSString * _destinationType;
    NSURL * _destinationURL;
    NSMappingModel * _mappingModel;
    NSMigrationManager * _migrationManager;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
    NSArray * _resourceBundles;
    NSString * _sourceConfiguration;
    NSDictionary * _sourceMetadata;
    NSManagedObjectModel * _sourceModel;
    NSDictionary * _sourceOptions;
    NSURL * _sourceURL;
    long long  _workingWithSkewedSource;
}

+ (id)destinationURLForMigrationSourceURL:(id)arg1 createDocumentReplacementDirectory:(bool)arg2 error:(id*)arg3;
+ (int)migrationDebugLevel;
+ (id)migrationStoreOptionsFromStoreOptions:(id)arg1;
+ (void)setMigrationDebugLevel:(int)arg1;

- (id)_gatherDataAndPerformMigration:(id*)arg1;
- (id)addMigratedStoreToCoordinator:(id)arg1 withType:(id)arg2 configuration:(id)arg3 URL:(id)arg4 options:(id)arg5 error:(id*)arg6;
- (id)createMigrationManagerForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (void)dealloc;
- (id)destinationConfiguration;
- (id)destinationConfigurationForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (id)destinationModel;
- (id)destinationOptions;
- (id)destinationOptionsForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (id)destinationType;
- (id)destinationTypeForMigration:(id)arg1 sourceMetadata:(id)arg2 error:(id*)arg3;
- (id)destinationURL;
- (void)didPerformMigrationWithManager:(id)arg1;
- (id)externalDataReferencesURLForDestination:(id)arg1 forStoreOfType:(id)arg2;
- (void)handleMigrationError:(id)arg1 inManager:(id)arg2;
- (id)mappingModel;
- (id)mappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
- (bool)migrateStoreAtURL:(id)arg1 toURL:(id)arg2 storeType:(id)arg3 options:(id)arg4 withManager:(id)arg5 error:(id*)arg6;
- (id)migrateStoreAtURL:(id)arg1 withManager:(id)arg2 metadata:(id)arg3 options:(id)arg4 error:(id*)arg5;
- (id)migrationManager;
- (id)persistentStoreCoordinator;
- (id)resourceBundles;
- (void)setDestinationConfiguration:(id)arg1;
- (void)setDestinationOptions:(id)arg1;
- (void)setDestinationType:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setMappingModel:(id)arg1;
- (void)setMigrationManager:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1;
- (void)setPersistentStoreCoordinator:(id)arg1 sourceURL:(id)arg2 configuration:(id)arg3 metadata:(id)arg4 options:(id)arg5;
- (void)setResourceBundles:(id)arg1;
- (void)setSourceConfiguration:(id)arg1;
- (void)setSourceMetadata:(id)arg1;
- (void)setSourceModel:(id)arg1;
- (void)setSourceOptions:(id)arg1;
- (void)setSourceURL:(id)arg1;
- (id)sourceConfiguration;
- (id)sourceMetadata;
- (id)sourceModel;
- (id)sourceModelForStoreAtURL:(id)arg1 metadata:(id)arg2 error:(id*)arg3;
- (id)sourceOptions;
- (id)sourceType;
- (id)sourceURL;
- (void)willPerformMigrationWithManager:(id)arg1;

@end
