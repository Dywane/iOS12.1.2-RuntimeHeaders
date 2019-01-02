/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKInstructorExtensionProxy : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSUUID * mContextIdentifier;
    NSExtension * mInstructorExtension;
    LSApplicationWorkspace * mWorkspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedExtensionProxy;

- (void).cxx_destruct;
- (void)_fetchListenerEndpointWithCompletionBlock:(id /* block */)arg1;
- (void)applicationInstallsDidStart:(id)arg1;
- (void)dealloc;
- (void)fetchListenerEndpointWithCompletionBlock:(id /* block */)arg1;
- (id)init;
- (bool)proxiesContainClassroomApp:(id)arg1;
- (void)resetExtension;

@end
