/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDisconnectedDatabaseCreatorManagedObjectContext : PLManagedObjectContext

+ (bool)_shouldRequestModelMigratorCreateDatabaseOnRebuildAndRetry;
+ (bool)canMergeRemoteChanges;

- (void)connectToChangeHub;
- (void)disconnectFromChangeHub;

@end
