/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactHeaderView : UIView <CNContactPhotoViewDelegate, CNUIReusableView> {
    NSArray * _activatedConstraints;
    bool  _alwaysShowsMonogram;
    NSArray * _contacts;
    <CNContactHeaderViewDelegate> * _delegate;
    UILabel * _nameLabel;
    NSDictionary * _nameTextAttributes;
    bool  _needsReload;
    CNContactPhotoView * _photoView;
    <CNPresenterDelegate> * _presenterDelegate;
    bool  _visibleToScrollViews;
}

@property (nonatomic, retain) NSArray *activatedConstraints;
@property (nonatomic) bool alwaysShowsMonogram;
@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *nameLabel;
@property (nonatomic, copy) NSDictionary *nameTextAttributes;
@property (nonatomic, readonly) CNContactPhotoView *photoView;
@property (nonatomic) <CNPresenterDelegate> *presenterDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool visibleToScrollViews;

+ (struct CGSize { double x1; double x2; })defaultPhotoSize;
+ (id)descriptorForRequiredKeys;
+ (id)descriptorForRequiredKeysIncludingAvatarViewDescriptors:(bool)arg1;
+ (id)makePhotoViewWithMonogrammerStyle:(long long)arg1 shouldAllowTakePhotoAction:(bool)arg2 shouldAllowImageDrops:(bool)arg3;
+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (id)activatedConstraints;
- (bool)alwaysShowsMonogram;
- (bool)canBecomeFirstResponder;
- (id)contactViewCache;
- (id)contacts;
- (void)dealloc;
- (id)delegate;
- (id)descriptorForRequiredKeys;
- (id)initWithContact:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 monogrammerStyle:(long long)arg3 shouldAllowTakePhotoAction:(bool)arg4 shouldAllowImageDrops:(bool)arg5 delegate:(id)arg6;
- (id)nameLabel;
- (id)nameTextAttributes;
- (id)photoView;
- (void)photoViewDidSaveEditsForImageDrop:(id)arg1;
- (void)photoViewDidUpdate:(id)arg1;
- (void)prepareForReuse;
- (id)presenterDelegate;
- (void)reloadDataIfNeeded;
- (void)reloadDataPreservingChanges:(bool)arg1;
- (void)setActivatedConstraints:(id)arg1;
- (void)setAlwaysShowsMonogram:(bool)arg1;
- (void)setContacts:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameTextAttributes:(id)arg1;
- (void)setNeedsReload;
- (void)setPresenterDelegate:(id)arg1;
- (void)setVisibleToScrollViews:(bool)arg1;
- (void)updateConstraints;
- (void)updateFontSizes;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithNewContact:(id)arg1;
- (id)viewControllerForPhotoView:(id)arg1;
- (bool)visibleToScrollViews;

@end
