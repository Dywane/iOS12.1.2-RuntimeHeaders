/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
 */

@interface BLDownloadStatus : NSObject <NSCopying> {
    NSString * _artistName;
    NSString * _assetKind;
    bool  _canPause;
    NSString * _downloadID;
    long long  _downloadPhase;
    NSNumber * _estimatedTimeRemaining;
    NSString * _genre;
    bool  _isAudiobook;
    bool  _isPurchase;
    bool  _isRestore;
    bool  _isSample;
    NSNumber * _percentComplete;
    NSString * _permLink;
    long long  _persistentIdentifier;
    NSDate * _purchaseDate;
    NSNumber * _storeAccountIdentifier;
    NSNumber * _storeID;
    NSString * _subtitle;
    NSString * _thumbnailImageURL;
    NSString * _title;
    NSNumber * _transferBytesExpected;
    NSNumber * _transferBytesWritten;
}

@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *assetKind;
@property (nonatomic) bool canPause;
@property (nonatomic, copy) NSString *downloadID;
@property (nonatomic) long long downloadPhase;
@property (nonatomic, retain) NSNumber *estimatedTimeRemaining;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic) bool isAudiobook;
@property (nonatomic) bool isPurchase;
@property (nonatomic) bool isRestore;
@property (nonatomic) bool isSample;
@property (nonatomic, retain) NSNumber *percentComplete;
@property (nonatomic, copy) NSString *permLink;
@property (nonatomic) long long persistentIdentifier;
@property (nonatomic, retain) NSDate *purchaseDate;
@property (nonatomic, retain) NSNumber *storeAccountIdentifier;
@property (nonatomic, retain) NSNumber *storeID;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *thumbnailImageURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) NSNumber *transferBytesExpected;
@property (nonatomic, retain) NSNumber *transferBytesWritten;

- (void).cxx_destruct;
- (id)artistName;
- (id)assetKind;
- (bool)canPause;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloadID;
- (long long)downloadPhase;
- (id)estimatedTimeRemaining;
- (id)genre;
- (bool)isAudiobook;
- (bool)isPurchase;
- (bool)isRestore;
- (bool)isSample;
- (id)percentComplete;
- (id)permLink;
- (long long)persistentIdentifier;
- (id)purchaseDate;
- (void)setArtistName:(id)arg1;
- (void)setAssetKind:(id)arg1;
- (void)setCanPause:(bool)arg1;
- (void)setDownloadID:(id)arg1;
- (void)setDownloadPhase:(long long)arg1;
- (void)setEstimatedTimeRemaining:(id)arg1;
- (void)setGenre:(id)arg1;
- (void)setIsAudiobook:(bool)arg1;
- (void)setIsPurchase:(bool)arg1;
- (void)setIsRestore:(bool)arg1;
- (void)setIsSample:(bool)arg1;
- (void)setPercentComplete:(id)arg1;
- (void)setPermLink:(id)arg1;
- (void)setPersistentIdentifier:(long long)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setStoreAccountIdentifier:(id)arg1;
- (void)setStoreID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransferBytesExpected:(id)arg1;
- (void)setTransferBytesWritten:(id)arg1;
- (id)storeAccountIdentifier;
- (id)storeID;
- (id)subtitle;
- (id)thumbnailImageURL;
- (id)title;
- (id)transferBytesExpected;
- (id)transferBytesWritten;

@end
