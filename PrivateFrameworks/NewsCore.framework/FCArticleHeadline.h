/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleHeadline : FCHeadline <FCHeadlineStocksFields> {
    NSString * _accessoryText;
    NSArray * _allowedStorefrontIDs;
    NSString * _articleID;
    FCInterestToken * _articleInterestToken;
    NTPBArticleRecord * _articleRecord;
    long long  _backendArticleVersion;
    long long  _behaviorFlags;
    NSArray * _blockedStorefrontIDs;
    bool  _boundToContext;
    bool  _canBePurchased;
    NSString * _clusterID;
    unsigned long long  _contentType;
    NSURL * _contentURL;
    FCCoverArt * _coverArt;
    bool  _deleted;
    FCHeadlineExperimentalTitleMetadata * _experimentalTitleMetadata;
    bool  _featureCandidate;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort * _globalCohort;
    bool  _hasThumbnail;
    bool  _hiddenFromAutoFavorites;
    bool  _hiddenFromFeeds;
    NSArray * _iAdCategories;
    NSArray * _iAdKeywords;
    NSArray * _iAdSectionIDs;
    NSString * _identifier;
    bool  _isDraft;
    NSDate * _lastFetchedDate;
    NSDate * _lastModifiedDate;
    long long  _minimumNewsVersion;
    NSArray * _moreFromPublisherArticleIDs;
    bool  _needsRapidUpdates;
    bool  _paid;
    bool  _pressRelease;
    NSString * _primaryAudience;
    NSDate * _publishDate;
    long long  _publisherArticleVersion;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohort * _publisherCohort;
    NSString * _referencedArticleID;
    NSArray * _relatedArticleIDs;
    NSString * _shortExcerpt;
    bool  _showMinimalChrome;
    <FCChannelProviding> * _sourceChannel;
    NSString * _sourceName;
    bool  _sponsored;
    FCTopStoriesStyleConfiguration * _storyStyle;
    unsigned long long  _storyType;
    FCHeadlineThumbnail * _thumbnail;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _thumbnailFocalFrame;
    FCHeadlineThumbnail * _thumbnailHQ;
    FCHeadlineThumbnail * _thumbnailLQ;
    FCHeadlineThumbnail * _thumbnailMedium;
    FCHeadlineThumbnail * _thumbnailUltraHQ;
    FCHeadlineThumbnail * _thumbnailWidget;
    FCHeadlineThumbnail * _thumbnailWidgetHQ;
    FCHeadlineThumbnail * _thumbnailWidgetLQ;
    NSString * _title;
    NSString * _titleCompact;
    NSArray * _topicIDs;
    NSArray * _topics;
    NSString * _versionIdentifier;
    NSString * _videoCallToActionTitle;
    NSURL * _videoCallToActionURL;
    double  _videoDuration;
    NSURL * _videoURL;
    bool  _webEmbedsEnabled;
}

@property (nonatomic, retain) FCInterestToken *articleInterestToken;
@property (nonatomic, retain) NTPBArticleRecord *articleRecord;
@property (nonatomic) long long behaviorFlags;
@property (nonatomic, readonly, copy) NSString *stocksClusterID;
@property (nonatomic, readonly, copy) NSString *stocksMetadataJSON;
@property (nonatomic, readonly, copy) NSString *stocksScoresJSON;
@property (nonatomic, copy) NSString *title;

+ (bool)_forceArticlesToBeShownAsSponsored;
+ (bool)_simulateTopStoriesBadges;

- (void).cxx_destruct;
- (id)accessoryText;
- (id)allowedStorefrontIDs;
- (id)articleID;
- (id)articleInterestToken;
- (id)articleRecirculationConfigJSON;
- (id)articleRecord;
- (long long)backendArticleVersion;
- (id)backingArticleRecordData;
- (long long)behaviorFlags;
- (id)blockedStorefrontIDs;
- (bool)canBePurchased;
- (id)clusterID;
- (id)contentManifestWithContext:(id)arg1;
- (unsigned long long)contentType;
- (id)contentURL;
- (id)coverArt;
- (id)endOfArticleTopicIDs;
- (id)experimentalTitleMetadata;
- (id)globalCohort;
- (bool)hasThumbnail;
- (id)iAdCategories;
- (id)iAdKeywords;
- (id)iAdSectionIDs;
- (id)identifier;
- (id)init;
- (id)initWithArticleRecord:(id)arg1 articleInterestToken:(id)arg2 sourceChannel:(id)arg3 storyStyleConfigs:(id)arg4 storyTypeTimeout:(long long)arg5 rapidUpdatesTimeout:(long long)arg6 assetManager:(id)arg7 experimentalTitleProvider:(id)arg8;
- (id)initWithArticleRecordData:(id)arg1 sourceChannel:(id)arg2 assetManager:(id)arg3;
- (bool)isBoundToContext;
- (bool)isDeleted;
- (bool)isDraft;
- (bool)isFeatureCandidate;
- (bool)isHiddenFromAutoFavorites;
- (bool)isHiddenFromFeeds;
- (bool)isPaid;
- (bool)isPressRelease;
- (bool)isSponsored;
- (id)lastFetchedDate;
- (id)lastModifiedDate;
- (long long)minimumNewsVersion;
- (id)moreFromPublisherArticleIDs;
- (bool)needsRapidUpdates;
- (id)primaryAudience;
- (id)publishDate;
- (long long)publisherArticleVersion;
- (id)publisherCohort;
- (id)publisherID;
- (id)publisherSpecifiedArticleIDs;
- (id)referencedArticleID;
- (id)relatedArticleIDs;
- (void)setArticleID:(id)arg1;
- (void)setArticleInterestToken:(id)arg1;
- (void)setArticleRecord:(id)arg1;
- (void)setBehaviorFlags:(long long)arg1;
- (void)setClusterID:(id)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDeleted:(bool)arg1;
- (void)setExperimentalTitleMetadata:(id)arg1;
- (void)setHasThumbnail:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPaid:(bool)arg1;
- (void)setPublishDate:(id)arg1;
- (void)setShortExcerpt:(id)arg1;
- (void)setSourceChannel:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setStoryStyle:(id)arg1;
- (void)setStoryType:(unsigned long long)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailFocalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setThumbnailHQ:(id)arg1;
- (void)setThumbnailLQ:(id)arg1;
- (void)setThumbnailMedium:(id)arg1;
- (void)setThumbnailUltraHQ:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleCompact:(id)arg1;
- (void)setTopicIDs:(id)arg1;
- (id)shortExcerpt;
- (bool)showMinimalChrome;
- (id)sourceChannel;
- (id)sourceName;
- (id)stocksClusterID;
- (id)stocksFields;
- (id)stocksMetadataJSON;
- (id)stocksScoresJSON;
- (id)storyStyle;
- (unsigned long long)storyType;
- (id)thumbnail;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbnailFocalFrame;
- (id)thumbnailHQ;
- (id)thumbnailLQ;
- (id)thumbnailMedium;
- (id)thumbnailUltraHQ;
- (id)thumbnailWidget;
- (id)thumbnailWidgetHQ;
- (id)thumbnailWidgetLQ;
- (id)title;
- (id)titleCompact;
- (id)topicIDs;
- (id)topics;
- (id)versionIdentifier;
- (id)videoCallToActionTitle;
- (id)videoCallToActionURL;
- (double)videoDuration;
- (id)videoURL;
- (bool)webEmbedsEnabled;

@end
