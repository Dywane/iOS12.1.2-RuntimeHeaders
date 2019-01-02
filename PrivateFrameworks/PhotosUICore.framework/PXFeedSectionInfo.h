/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedSectionInfo : NSObject <PLAssetContainer, PXInboxModel, PXInboxPreviewItem> {
    NSString * _albumTitle;
    PLCloudFeedEntry * _cloudFeedEntry;
    NSDate * _date;
    NSIndexSet * _excludedAssetIndexes;
    PLCloudSharedAlbumInvitationRecord * _invitationRecord;
    PLManagedAsset * _keyAsset;
    bool  _loaded;
    long long  _numberOfItems;
    PLManagedAsset * _secondaryKeyAsset;
    long long  _sectionType;
    <PLCloudSharedAlbumProtocol> * _sharedAlbum;
    bool  _shouldBeVisibleWhenEmpty;
    PLManagedAsset * _tertiaryKeyAsset;
    NSString * _transientIdentifier;
}

@property (nonatomic, copy) NSString *albumTitle;
@property (nonatomic, readonly) unsigned long long approximateCount;
@property (nonatomic, readonly, retain) NSOrderedSet *assets;
@property (nonatomic, readonly) unsigned long long assetsCount;
@property (nonatomic, readonly) NSArray *assetsForOneUp;
@property (nonatomic, readonly) bool canShowAvalancheStacks;
@property (nonatomic, readonly) bool canShowComments;
@property (nonatomic, readonly) PLCloudFeedEntry *cloudFeedEntry;
@property (nonatomic, readonly) NSCountedSet *countsByAssetDisplayType;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, copy) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, retain) NSDate *endDate;
@property (nonatomic, copy) NSIndexSet *excludedAssetIndexes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *inboxModelTitle;
@property (nonatomic, retain) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) bool isMine;
@property (nonatomic, retain) PLManagedAsset *keyAsset;
@property (nonatomic, readonly) NSString *keyCommentGUID;
@property (nonatomic, readonly) NSArray *leftPreviewItems;
@property (getter=isLoaded, nonatomic) bool loaded;
@property (nonatomic, readonly, copy) NSArray *localizedLocationNames;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic) long long numberOfItems;
@property (nonatomic, readonly) NSString *ownerEmail;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) unsigned long long photosCount;
@property (nonatomic, retain) PLManagedAsset *secondaryKeyAsset;
@property (nonatomic, readonly) long long sectionType;
@property (getter=isSeen, nonatomic) bool seen;
@property (nonatomic, readonly, copy) NSArray *senderNames;
@property (nonatomic, retain) <PLCloudSharedAlbumProtocol> *sharedAlbum;
@property (nonatomic) bool shouldBeVisibleWhenEmpty;
@property (nonatomic, readonly, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, retain) PLManagedAsset *tertiaryKeyAsset;
@property (nonatomic, readonly, retain) NSString *title;
@property (nonatomic, readonly, copy) NSString *transientIdentifier;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) bool userIsSender;
@property (nonatomic, readonly, retain) NSString *uuid;
@property (nonatomic, readonly) unsigned long long videosCount;

+ (void)beginCachingSharedAlbumsByGUIDs;
+ (id)defaultPreviewImage;
+ (void)endCachingSharedAlbumsByGUIDs;
+ (id)sectionInfoWithCloudFeedEntry:(id)arg1;

- (void).cxx_destruct;
- (long long)_inboxModelTypeForCloudCommentType;
- (id)_usersInvolved;
- (id)_usersInvolvedForCoalescedEntry;
- (id)_usersInvolvedForComment;
- (id)_usersInvolvedForInvitation;
- (id)_usersInvolvedForLike;
- (id)_usersInvolvedForPost;
- (id)_usersInvolvedForResponse;
- (id)albumTitle;
- (unsigned long long)approximateCount;
- (bool)areAllAssetsLiked;
- (id)assetForItemAtIndex:(long long)arg1;
- (id)assets;
- (unsigned long long)assetsCount;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (id)assetsForOneUp;
- (id)batchIDForItemAtIndex:(long long)arg1;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (bool)canShowAvalancheStacks;
- (bool)canShowComments;
- (id)captionForItemAtIndex:(long long)arg1;
- (id)cloudFeedEntry;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)commentTextForItemAtIndex:(long long)arg1;
- (id)commentsForItemAtIndex:(long long)arg1;
- (bool)containsAsset:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countsByAssetDisplayType;
- (id)creationDate;
- (id)date;
- (id)excludedAssetIndexes;
- (void)fetchLeftPreviewItemsWithCompletion:(id /* block */)arg1;
- (void)getCommentCount:(out unsigned long long*)arg1 likeCount:(out unsigned long long*)arg2;
- (void)getPhotoCount:(out unsigned long long*)arg1 videoCount:(out unsigned long long*)arg2;
- (bool)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (bool)hasPlayableAssetForItemAtIndex:(long long)arg1;
- (id)inboxModelTitle;
- (long long)indexOfFirstItemFromLastBatch;
- (long long)indexOfItemWithAsset:(id)arg1;
- (long long)indexOfItemWithComment:(id)arg1;
- (id)initWithCloudFeedEntry:(id)arg1;
- (id)invitationRecord;
- (bool)isEmpty;
- (bool)isLoaded;
- (bool)isMine;
- (bool)isSeen;
- (id)keyAsset;
- (id)keyCommentGUID;
- (id)leftPreviewItems;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (long long)numberOfItems;
- (id)ownerEmail;
- (id)ownerFirstName;
- (id)ownerLastName;
- (id)photoLibrary;
- (unsigned long long)photosCount;
- (void)reload;
- (id)secondaryKeyAsset;
- (long long)sectionType;
- (id)senderNames;
- (void)setAlbumTitle:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setExcludedAssetIndexes:(id)arg1;
- (void)setInvitationRecord:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLoaded:(bool)arg1;
- (void)setNumberOfItems:(long long)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setSeen:(bool)arg1;
- (void)setSharedAlbum:(id)arg1;
- (void)setShouldBeVisibleWhenEmpty:(bool)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (id)sharedAlbum;
- (id)sharedAlbumWithGUID:(id)arg1;
- (bool)shouldBeVisibleWhenEmpty;
- (id)tertiaryKeyAsset;
- (id)title;
- (id)transientIdentifier;
- (long long)type;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (bool)userIsSender;
- (id)uuid;
- (unsigned long long)videosCount;

@end
