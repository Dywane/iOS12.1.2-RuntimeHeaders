/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLiteStatementCache : NSObject {
    struct __CFSet { } * _activeStatements;
    long long  _cacheScope;
    struct sqlite3 { } * _db;
    bool  _inTransaction;
    struct __CFDictionary { } * _statementCache;
    struct __CFDictionary { } * _transactionStatementCache;
    struct __CFSet { } * _uncachedActiveStatements;
}

@property (nonatomic, readonly, copy) NSSet *allStatmentSQLStrings;
@property (nonatomic, readonly) unsigned long long count;

- (void)_assertNoActiveStatements;
- (struct sqlite3_stmt { }*)_cachedStatementForSQL:(id)arg1;
- (void)_clearCachedTransactionStatements;
- (void)_setStatement:(struct sqlite3_stmt { }*)arg1 forSQL:(id)arg2;
- (id)allStatmentSQLStrings;
- (void)beginTransactionWithCacheScope:(long long)arg1;
- (void)checkInStatement:(struct sqlite3_stmt { }*)arg1;
- (struct sqlite3_stmt { }*)checkOutStatementForSQL:(id)arg1 shouldCache:(bool)arg2 error:(id*)arg3;
- (void)clearCachedStatements;
- (unsigned long long)count;
- (void)dealloc;
- (void)endTransaction;
- (id)init;
- (id)initWithDatabase:(struct sqlite3 { }*)arg1;

@end
