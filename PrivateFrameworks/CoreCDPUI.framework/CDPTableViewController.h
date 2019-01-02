/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

@interface CDPTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    id /* block */  _completionHandler;
    UIView * _containerView;
    NSString * _headerSubTitle;
    NSString * _headerTitle;
    BFFPaneHeaderView * _headerView;
    UITableView * _tableView;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *headerSubTitle;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, retain) BFFPaneHeaderView *headerView;
@property (nonatomic, readonly) bool isIPad;
@property (nonatomic, readonly) bool isiPhone5OrSmaller;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, readonly) bool uiTestMode;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)containerView;
- (id)deviceClass;
- (id)headerSubTitle;
- (id)headerTitle;
- (id)headerView;
- (double)heightForHeaderInTableView:(id)arg1;
- (id)initWithTitle:(id)arg1 subTitle:(id)arg2;
- (bool)isIPad;
- (bool)isiPhone5OrSmaller;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setContainerView:(id)arg1;
- (void)setHeaderSubTitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)uiTestMode;
- (void)viewDidLayoutSubviews;
- (id)viewForHeaderInTableView:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
