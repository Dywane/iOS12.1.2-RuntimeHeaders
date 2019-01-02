/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    bool  _isInitialSync;
}

@property (nonatomic) bool isInitialSync;

- (Class)bulkChangeTaskClass;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)copyMultiGetTaskWithURLs:(id)arg1;
- (id)dataContentType;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 context:(id)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7 appSpecificDataItemClass:(Class)arg8;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 syncItemOrder:(bool)arg5 context:(id)arg6 accountInfoProvider:(id)arg7 taskManager:(id)arg8 appSpecificDataItemClass:(Class)arg9;
- (bool)isInitialSync;
- (void)setIsInitialSync:(bool)arg1;

@end
