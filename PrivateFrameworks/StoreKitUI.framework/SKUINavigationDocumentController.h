/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUINavigationDocumentController : NSObject <IKAppNavigationController> {
    SKUIClientContext * _clientContext;
    <SKUINavigationDocumentDelegate> * _delegate;
    UINavigationController * _moreNavigationController;
    UINavigationController * _navigationController;
    UINavigationController * _overrideNavigationController;
    NSMutableArray * _pendingNavigationStackEnsureConsistencyRequests;
    NSMutableArray * _stackItems;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKUINavigationDocumentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *documentStackItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *moreNavigationController;
@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, retain) UINavigationController *overrideNavigationController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeNavigationController;
- (void)_applyDocumentReplacementForOldStackItem:(id)arg1 atOldIndex:(long long)arg2 withStackItem:(id)arg3;
- (void)_ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(bool)arg2;
- (void)_handleStackDidChange;
- (void)_scheduleFlushingPendingNavigationStackEnsureConsistencyRequestsWithTransitionCoordinator:(id)arg1;
- (void)_unloadAllStackItems;
- (void)clear;
- (id)clientContext;
- (id)delegate;
- (id)documentStackItems;
- (id)documents;
- (void)ensureStackConsistencyForNavigationControllerOperation:(long long)arg1 operationDidComplete:(bool)arg2;
- (id)initWithNavigationController:(id)arg1;
- (void)insertDocument:(id)arg1 beforeDocument:(id)arg2 options:(id)arg3;
- (id)moreNavigationController;
- (id)navigationController;
- (id)overrideNavigationController;
- (void)popAllDocuments;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (void)popToRootDocument;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)removeDocument:(id)arg1;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMoreNavigationController:(id)arg1;
- (void)setOverrideNavigationController:(id)arg1;
- (void)setStackItems:(id)arg1 animated:(bool)arg2;

@end
