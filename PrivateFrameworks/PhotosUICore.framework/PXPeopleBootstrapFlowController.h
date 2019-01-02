/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleBootstrapFlowController : NSObject <PXPeopleFlowController> {
    <PXPeopleSuggestionManagerDataSource> * _bootstrapDataSource;
    <PXPeopleBootstrapFlowDelegate> * _bootstrapDelegate;
    PXPeopleBootstrapContext * _context;
    unsigned long long  _namingResultType;
    unsigned long long  _viewControllerIndex;
    NSArray * _viewControllers;
}

@property (nonatomic, retain) <PXPeopleSuggestionManagerDataSource> *bootstrapDataSource;
@property (nonatomic, retain) <PXPeopleBootstrapFlowDelegate> *bootstrapDelegate;
@property (nonatomic, readonly) PXPeopleBootstrapContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNextViewController;
@property (nonatomic, readonly) bool hasPreviousViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long namingResultType;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *nextViewController;
@property (nonatomic, readonly) UIViewController<PXPeopleFlowViewController> *previousViewController;
@property (nonatomic, readonly) bool shouldPresentNaming;
@property (nonatomic, readonly) bool shouldPresentPostNaming;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long viewControllerIndex;
@property (nonatomic, copy) NSArray *viewControllers;

- (void).cxx_destruct;
- (id)bootstrapDataSource;
- (id)bootstrapDelegate;
- (void)cancel:(id)arg1;
- (void)commonInitWithContext:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;
- (id)context;
- (void)dealloc;
- (void)done:(id)arg1;
- (bool)hasNextViewController;
- (bool)hasPreviousViewController;
- (id)init;
- (id)initEmptyFlowWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (unsigned long long)namingResultType;
- (id)nextViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)previousViewController;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)setBootstrapDataSource:(id)arg1;
- (void)setBootstrapDelegate:(id)arg1;
- (void)setNamingResultType:(unsigned long long)arg1;
- (void)setViewControllerIndex:(unsigned long long)arg1;
- (void)setViewControllers:(id)arg1;
- (bool)shouldPresentNaming;
- (bool)shouldPresentPostNaming;
- (unsigned long long)viewControllerIndex;
- (id)viewControllers;

@end
