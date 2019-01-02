/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSSQLTableMigrationDescription : NSObject {
    NSMutableArray * _addedEntityMigrations;
    NSMutableArray * _addedManyToManys;
    NSMutableArray * _copiedEntityMigrations;
    NSNumber * _hasTransformedTableSchema;
    NSMutableDictionary * _migrationByEntity;
    int  _migrationType;
    NSMutableArray * _removedEntityMigrations;
    NSMutableArray * _removedManyToManys;
    NSSQLEntity * _rootEntity;
    NSSQLEntity * _sourceRootEntity;
    NSMutableDictionary * _tempTableNames;
    NSMutableArray * _transformedEntityMigrations;
    NSMutableArray * _transformedManyToManys;
}

@property (nonatomic, readonly) int migrationType;
@property (nonatomic, readonly) NSSQLEntity *rootEntity;

- (id)_addedManyToManys;
- (bool)_hasTransformedTableSchema;
- (id)_removedManyToManys;
- (id)_retainedRemovedSubEntitiesOfEntity:(id)arg1;
- (id)_sourceRootEntity;
- (id)_tempNameForTableName:(id)arg1;
- (id)_transformedManyToManys;
- (void)addEntityMigrationDescription:(id)arg1;
- (void)appendStatementsToCompleteMigration:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToCreateOrDropTables:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToPerformMigration:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (void)appendStatementsToRenameTables:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createDeleteStatementForEntityMigrations:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createFEKUpdateStatementsForEntityMigration:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createInsertStatementForEntityMigration:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (id)createUpdateStatementForEntityMigration:(id)arg1 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg2;
- (void)dealloc;
- (id)description;
- (id)initWithRootEntity:(id)arg1 migrationType:(int)arg2;
- (int)migrationType;
- (id)newCopyAndInsertStatementForToOne:(id)arg1 toManyToMany:(id)arg2 fromTableName:(id)arg3 invertColumns:(bool)arg4 migrationContext:(/* Warning: unhandled struct encoding: '{_NSSQLMigrationContext=@}' */ struct _NSSQLMigrationContext { id x1; })arg5;
- (id)rootEntity;

@end
