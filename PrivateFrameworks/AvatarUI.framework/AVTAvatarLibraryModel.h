/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarLibraryModel : NSObject <AVTAvatarEditorViewControllerDelegate> {
    <AVTAvatarStoreInternal> * _avatarStore;
    AVTAvatarLibraryCreateNewItem * _createNewItem;
    <AVTAvatarLibraryModelDelegate> * _delegate;
    AVTUIEnvironment * _environment;
    bool  _isCreatingAvatar;
    NSMutableArray * _mutableLibraryItems;
}

@property (nonatomic, readonly) <AVTAvatarStoreInternal> *avatarStore;
@property (nonatomic, readonly) AVTAvatarLibraryCreateNewItem *createNewItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarLibraryModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCreatingAvatar;
@property (nonatomic, readonly) NSArray *libraryItems;
@property (nonatomic, readonly) NSMutableArray *mutableLibraryItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)avatarEditorViewController:(id)arg1 didFinishWithAvatarRecord:(id)arg2;
- (void)avatarEditorViewControllerDidCancel:(id)arg1;
- (id)avatarStore;
- (id)createNewItem;
- (id)delegate;
- (id)environment;
- (long long)indexForRecord:(id)arg1;
- (id)initWithAvatarStore:(id)arg1 environment:(id)arg2;
- (void)insertItemForRecord:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isCreatingAvatar;
- (id)libraryItems;
- (id)libraryItemsFromAvatarRecords:(id)arg1;
- (void)load;
- (id)mutableLibraryItems;
- (unsigned long long)numberOfRecords;
- (void)performActionOnItemAtIndex:(unsigned long long)arg1;
- (void)presentActionSheetForRecordItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)presentEditor:(id)arg1 forCreating:(bool)arg2;
- (void)presetShareSheetWithRecords:(id)arg1;
- (void)reloadDataForRecords:(id)arg1;
- (void)removeItemForRecordAtIndex:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCreatingAvatar:(bool)arg1;
- (void)storeDidChangeNotification:(id)arg1;
- (void)updateForCreatedRecord:(id)arg1;
- (void)updateForEditedRecord:(id)arg1;

@end
