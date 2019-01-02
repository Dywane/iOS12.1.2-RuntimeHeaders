/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMManagementState : NSObject {
    bool  _cachedIsRestrictionsPasscodeSet;
    bool  _cachedShouldRequestMoreTime;
    NSXPCConnection * _connection;
}

@property bool cachedIsRestrictionsPasscodeSet;
@property bool cachedShouldRequestMoreTime;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, readonly) bool isRestrictionsPasscodeSet;
@property (nonatomic, readonly) bool shouldRequestMoreTime;

- (void).cxx_destruct;
- (bool)cachedIsRestrictionsPasscodeSet;
- (bool)cachedShouldRequestMoreTime;
- (id)connection;
- (void)dealloc;
- (id)init;
- (bool)isRestrictionsPasscodeSet;
- (void)isRestrictionsPasscodeSet:(id /* block */)arg1;
- (void)screenTimeStateCompletionHandler:(id /* block */)arg1;
- (void)screenTimeStateWithCompletionHandler:(id /* block */)arg1;
- (void)screenTimeSyncStateWithCompletionHandler:(id /* block */)arg1;
- (void)setCachedIsRestrictionsPasscodeSet:(bool)arg1;
- (void)setCachedShouldRequestMoreTime:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setScreenTimeEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)setScreenTimeEnabled:(bool)arg1 error:(id*)arg2;
- (void)setScreenTimeSyncingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (bool)shouldRequestMoreTime;
- (void)shouldRequestMoreTime:(id /* block */)arg1;

@end
