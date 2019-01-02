/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPiTunesMediaAudioBookUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {
    LPiTunesMediaAsset * _artwork;
    NSString * _author;
    NSString * _name;
    NSString * _narrator;
    NSString * _storeFrontIdentifier;
    NSString * _storeIdentifier;
}

@property (nonatomic, retain) LPiTunesMediaAsset *artwork;
@property (nonatomic, copy) NSString *author;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *narrator;
@property (nonatomic, copy) NSString *storeFrontIdentifier;
@property (nonatomic, copy) NSString *storeIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artwork;
- (id)assetsToResolve;
- (id)author;
- (id)name;
- (id)narrator;
- (id)resolve;
- (void)setArtwork:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNarrator:(id)arg1;
- (void)setStoreFrontIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeFrontIdentifier;
- (id)storeIdentifier;

@end
