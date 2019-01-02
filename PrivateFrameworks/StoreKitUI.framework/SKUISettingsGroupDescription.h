/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUISettingsGroupDescription : NSObject {
    SKUISettingsGroupController * _controller;
    NSMutableSet * _editableSettings;
    SKUISettingsHeaderFooterDescription * _footerDescription;
    SKUISettingsHeaderFooterDescription * _headerDescription;
    SKUISettingsGroupsDescription * _parent;
    SKUISettingsObjectStore * _settingDescriptions;
    SKUISettingsContext * _settingsContext;
    SKUIGroupViewElement * _viewElement;
}

@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic) SKUISettingsGroupController *controller;
@property (nonatomic) SKUISettingsGroupsDescription *parent;
@property (nonatomic, retain) SKUIGroupViewElement *viewElement;

- (void).cxx_destruct;
- (void)_dismissViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dispatchUpdateForSettingDescription:(id)arg1 updateType:(long long)arg2;
- (void)_presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_updatedEditsValid;
- (void)addSettingDescription:(id)arg1;
- (void)addSettingViewElement:(id)arg1;
- (void)addSibling:(id)arg1;
- (id)clientContext;
- (id)controller;
- (void)deleteSettingDescription:(id)arg1;
- (void)deleteSettingsGroup;
- (id)description;
- (void)dispatchUpdate:(id)arg1;
- (id)editableSettingDescriptions;
- (id)footerDescription;
- (bool)hasEditableSettingDescriptions;
- (bool)hasFooter;
- (bool)hasHeader;
- (bool)hasNoVisibleSettings;
- (id)headerDescription;
- (void)hideSettingDescription:(id)arg1;
- (void)hideSettingsGroup;
- (unsigned long long)index;
- (id)indexPathForSettingDescription:(id)arg1;
- (id)initWithParent:(id)arg1 settingsContext:(id)arg2;
- (bool)isEmpty;
- (bool)isSettingDescriptionHidden:(id)arg1;
- (id)newSiblingWithClass:(Class)arg1;
- (unsigned long long)numberOfSettings;
- (id)parent;
- (void)recycle;
- (void)reloadData;
- (void)reloadSettingDescription:(id)arg1;
- (void)requestLayoutForWidth:(double)arg1 context:(id)arg2;
- (void)revealSettingDescription:(id)arg1;
- (void)revealSettingsGroup;
- (void)setController:(id)arg1;
- (void)setFooterDescription:(id)arg1;
- (void)setFooterViewElement:(id)arg1;
- (void)setHeaderDescription:(id)arg1;
- (void)setHeaderViewElement:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setViewElement:(id)arg1;
- (id)settingDescriptionAtIndex:(unsigned long long)arg1;
- (id)viewElement;
- (id)viewElementForSettingAtIndex:(unsigned long long)arg1;

@end
