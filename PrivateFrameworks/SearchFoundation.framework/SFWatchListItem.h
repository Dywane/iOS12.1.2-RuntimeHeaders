/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFWatchListItem : NSObject <NSCopying, NSSecureCoding, SFWatchListItem> {
    NSString * _addToUpNextText;
    NSString * _addedToUpNextText;
    NSString * _continueInTextFormat;
    NSString * _inUpNextText;
    NSString * _installButtonTitle;
    NSString * _openButtonTitle;
    NSString * _purchaseOfferTextFormat;
    NSString * _seasonEpisodeTextFormat;
    NSString * _watchListIdentifier;
    NSString * _watchLiveTextFormat;
}

@property (nonatomic, copy) NSString *addToUpNextText;
@property (nonatomic, copy) NSString *addedToUpNextText;
@property (nonatomic, copy) NSString *continueInTextFormat;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *inUpNextText;
@property (nonatomic, copy) NSString *installButtonTitle;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *openButtonTitle;
@property (nonatomic, copy) NSString *purchaseOfferTextFormat;
@property (nonatomic, copy) NSString *seasonEpisodeTextFormat;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *watchListIdentifier;
@property (nonatomic, copy) NSString *watchLiveTextFormat;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addToUpNextText;
- (id)addedToUpNextText;
- (id)continueInTextFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)inUpNextText;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (id)installButtonTitle;
- (id)jsonData;
- (id)openButtonTitle;
- (id)purchaseOfferTextFormat;
- (id)seasonEpisodeTextFormat;
- (void)setAddToUpNextText:(id)arg1;
- (void)setAddedToUpNextText:(id)arg1;
- (void)setContinueInTextFormat:(id)arg1;
- (void)setInUpNextText:(id)arg1;
- (void)setInstallButtonTitle:(id)arg1;
- (void)setOpenButtonTitle:(id)arg1;
- (void)setPurchaseOfferTextFormat:(id)arg1;
- (void)setSeasonEpisodeTextFormat:(id)arg1;
- (void)setWatchListIdentifier:(id)arg1;
- (void)setWatchLiveTextFormat:(id)arg1;
- (id)watchListIdentifier;
- (id)watchLiveTextFormat;

@end
