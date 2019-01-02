/* Generated by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersistentChangeFetchResult : NSObject {
    unsigned long long  _changeCount;
    NSManagedObjectContext * _context;
    NSPersistentHistoryToken * _initialToken;
    unsigned long long  _maximumChangeThreshold;
    NSArray * _transactions;
}

@property (nonatomic, readonly) unsigned long long changeCount;

+ (id)fetchResultWithToken:(id)arg1 maximumChangeThreshold:(unsigned long long)arg2 managedObjectObjectContext:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (void)enumerateChangesWithBlock:(id /* block */)arg1;
- (id)initWithInitialToken:(id)arg1 transactions:(id)arg2 maximumChangeThreshold:(unsigned long long)arg3 managedObjectObjectContext:(id)arg4;

@end