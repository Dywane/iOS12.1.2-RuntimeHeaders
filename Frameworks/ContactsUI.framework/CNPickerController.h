/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
    bool  _allowsCustomItems;
    bool  _allowsDiscoveredItems;
    NSArray * _builtinItems;
    long long  _builtinItemsSection;
    NSArray * _customItems;
    long long  _customItemsSection;
    NSArray * _discoveredItems;
    long long  _discoveredItemsSection;
    id /* block */  _itemLocalizationBlock;
    NSString * _itemLocalizationKey;
    NSIndexPath * _selectedIndexPath;
    id  _selectedItem;
    UITableViewController * _tableViewController;
}

@property (nonatomic) bool allowsCustomItems;
@property (nonatomic) bool allowsDiscoveredItems;
@property (nonatomic, copy) NSArray *builtinItems;
@property (nonatomic) long long builtinItemsSection;
@property (nonatomic, copy) NSArray *customItems;
@property (nonatomic) long long customItemsSection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPickerControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *discoveredItems;
@property (nonatomic) long long discoveredItemsSection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ itemLocalizationBlock;
@property (nonatomic, copy) NSString *itemLocalizationKey;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (nonatomic, retain) id selectedItem;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableViewController *tableViewController;

- (void).cxx_destruct;
- (unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
- (id)_titleForPickerItem:(id)arg1;
- (void)_updateRightButtonItem;
- (bool)allowsCustomItems;
- (bool)allowsDiscoveredItems;
- (id)builtinItems;
- (long long)builtinItemsSection;
- (void)cancelPicker:(id)arg1;
- (id)customItems;
- (long long)customItemsSection;
- (void)customLabelUpdated:(id)arg1;
- (void)dealloc;
- (id)discoveredItems;
- (long long)discoveredItemsSection;
- (void)donePicker:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isEditing;
- (id /* block */)itemLocalizationBlock;
- (id)itemLocalizationKey;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)removeCustomItem:(id)arg1;
- (id)selectedIndexPath;
- (id)selectedItem;
- (void)setAllowsCustomItems:(bool)arg1;
- (void)setAllowsDiscoveredItems:(bool)arg1;
- (void)setBuiltinItems:(id)arg1;
- (void)setBuiltinItemsSection:(long long)arg1;
- (void)setCustomItems:(id)arg1;
- (void)setCustomItemsSection:(long long)arg1;
- (void)setDiscoveredItems:(id)arg1;
- (void)setDiscoveredItemsSection:(long long)arg1;
- (void)setItemLocalizationBlock:(id /* block */)arg1;
- (void)setItemLocalizationKey:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)setTableViewController:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableViewController;
- (void)textFieldDidBeginEditing:(id)arg1;
- (bool)textFieldShouldEndEditing:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
