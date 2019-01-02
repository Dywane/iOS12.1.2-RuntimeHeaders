/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityValueContext : NSObject <NSCoding, NSCopying> {
    <MusicEntityProviding> * _containerDownloadInformationEntityProvider;
    <MusicEntityValueProviding> * _containerEntityValueProvider;
    MPUContentItemIdentifierCollection * _containerIdentifierCollection;
    MPPlaybackContext * _containerPlaybackContext;
    <MusicEntityValueProviding> * _itemEntityValueProvider;
    unsigned long long  _itemGlobalIndex;
    MPUContentItemIdentifierCollection * _itemIdentifierCollection;
    MPPlaybackContext * _itemPlaybackContext;
    bool  _wantsContainerDownloadInformationEntityProvider;
    bool  _wantsContainerEntityValueProvider;
    bool  _wantsContainerIdentifierCollection;
    bool  _wantsContainerPlaybackContext;
    bool  _wantsItemEntityValueProvider;
    bool  _wantsItemGlobalIndex;
    bool  _wantsItemIdentifierCollection;
    bool  _wantsItemPlaybackContext;
}

@property (nonatomic, retain) <MusicEntityProviding> *containerDownloadInformationEntityProvider;
@property (nonatomic, retain) <MusicEntityValueProviding> *containerEntityValueProvider;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *containerIdentifierCollection;
@property (nonatomic, retain) MPPlaybackContext *containerPlaybackContext;
@property (nonatomic, readonly) <MusicEntityValueProviding> *entityValueProvider;
@property (nonatomic, retain) <MusicEntityValueProviding> *itemEntityValueProvider;
@property (nonatomic) unsigned long long itemGlobalIndex;
@property (nonatomic, copy) MPUContentItemIdentifierCollection *itemIdentifierCollection;
@property (nonatomic, retain) MPPlaybackContext *itemPlaybackContext;
@property (nonatomic) bool wantsContainerDownloadInformationEntityProvider;
@property (nonatomic) bool wantsContainerEntityValueProvider;
@property (nonatomic) bool wantsContainerIdentifierCollection;
@property (nonatomic) bool wantsContainerPlaybackContext;
@property (nonatomic) bool wantsItemEntityValueProvider;
@property (nonatomic) bool wantsItemGlobalIndex;
@property (nonatomic) bool wantsItemIdentifierCollection;
@property (nonatomic) bool wantsItemPlaybackContext;

- (void).cxx_destruct;
- (void)configureWithMediaEntity:(id)arg1;
- (id)containerDownloadInformationEntityProvider;
- (id)containerEntityValueProvider;
- (id)containerIdentifierCollection;
- (id)containerPlaybackContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entityValueProvider;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemEntityValueProvider;
- (unsigned long long)itemGlobalIndex;
- (id)itemIdentifierCollection;
- (id)itemPlaybackContext;
- (void)resetOutputValues;
- (void)setContainerDownloadInformationEntityProvider:(id)arg1;
- (void)setContainerEntityValueProvider:(id)arg1;
- (void)setContainerIdentifierCollection:(id)arg1;
- (void)setContainerPlaybackContext:(id)arg1;
- (void)setItemEntityValueProvider:(id)arg1;
- (void)setItemGlobalIndex:(unsigned long long)arg1;
- (void)setItemIdentifierCollection:(id)arg1;
- (void)setItemPlaybackContext:(id)arg1;
- (void)setWantsContainerDownloadInformationEntityProvider:(bool)arg1;
- (void)setWantsContainerEntityValueProvider:(bool)arg1;
- (void)setWantsContainerIdentifierCollection:(bool)arg1;
- (void)setWantsContainerPlaybackContext:(bool)arg1;
- (void)setWantsItemEntityValueProvider:(bool)arg1;
- (void)setWantsItemGlobalIndex:(bool)arg1;
- (void)setWantsItemIdentifierCollection:(bool)arg1;
- (void)setWantsItemPlaybackContext:(bool)arg1;
- (bool)wantsContainerDownloadInformationEntityProvider;
- (bool)wantsContainerEntityValueProvider;
- (bool)wantsContainerIdentifierCollection;
- (bool)wantsContainerPlaybackContext;
- (bool)wantsItemEntityValueProvider;
- (bool)wantsItemGlobalIndex;
- (bool)wantsItemIdentifierCollection;
- (bool)wantsItemPlaybackContext;

@end
