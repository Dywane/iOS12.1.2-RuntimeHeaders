/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVPopoverViewController : _TVBgImageLoadingViewController <UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * _cancelButtonItem;
    long long  _expandedRow;
    bool  _ignoreDismissalOnExpansionOrContraction;
    _TVPopoverDescriptor * _popoverDescriptor;
    NSArray * _popoverEntries;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } calculatedPreferredContentSize;
@property (nonatomic, readonly) UIBarButtonItem *cancelButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long expandedRow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _TVPopoverDescriptor *popoverDescriptor;
@property (nonatomic, copy) NSArray *popoverEntries;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_cancelButtonTouchUpInside:(id)arg1;
- (void)_dismissViewControllerAnimated:(bool)arg1;
- (double)_heightForOptionAtRow:(unsigned long long)arg1;
- (id)_modalPresenterPresentedViewController;
- (void)_updatePreferredContentSize;
- (struct CGSize { double x1; double x2; })calculatedPreferredContentSize;
- (id)cancelButtonItem;
- (void)dealloc;
- (long long)expandedRow;
- (id)init;
- (id)initWithViewElement:(id)arg1;
- (void)loadView;
- (id)popoverDescriptor;
- (id)popoverEntries;
- (void)setExpandedRow:(long long)arg1;
- (void)setPopoverEntries:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
