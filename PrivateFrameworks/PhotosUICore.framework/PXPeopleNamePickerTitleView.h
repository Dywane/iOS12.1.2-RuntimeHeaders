/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver> {
    UIImageView * _avatarView;
    NSMutableArray * _fetchResults;
    NSString * _name;
    UITextField * _nameField;
    UIFont * _nameFont;
    PHPerson * _person;
    NSString * _placeholder;
    UIFont * _placeholderFont;
}

@property (nonatomic, retain) UIImageView *avatarView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *fetchResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) UITextField *nameField;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, retain) PHPerson *person;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UIFont *placeholderFont;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateFieldPlaceholder;
- (void)_updateFieldText;
- (id)avatarView;
- (void)dealloc;
- (id)fetchResults;
- (void)finishEditing;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 person:(id)arg2;
- (id)name;
- (id)nameField;
- (id)nameFont;
- (id)person;
- (id)placeholder;
- (id)placeholderFont;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)resetImages;
- (void)setAvatarView:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameFont:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderFont:(id)arg1;

@end
